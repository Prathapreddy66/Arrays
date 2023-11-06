#include<iostream>
#include<array>
using namespace std;

int columnsoutput(int inputmatrix[4][5]){
	int col;
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
			if(inputmatrix[i][j]!=0){
				col++;
			}
		}
	}
	return col;
}

void sparseoutput(int col, int inputmatrix[4][5]){
	int sparseoutput[3][col];
	int k=0; 
	int i=0;
	while (i<4){
		int j=0;
		while(j<5){
			if(inputmatrix[i][j]!=0){
				sparseoutput[0][k] = i;  
                sparseoutput[1][k] = j;  
                sparseoutput[2][k] = inputmatrix[i][j];  
                k++;  
			}
		 j++;
		}
		i++;
	}

	
	for(int i=0 ;i<3; i++)  
    {  
        for(int j=0; j<col; j++)  
        {  
            cout<< sparseoutput[i][j];  
            cout<<"\t"; 
        }  
        cout<<"\n";  
    }  
}

int main(){
	int col = 0; 
	int inputmatrix [4][5]= 
	{
		{0,0,3,0,4},
		{0,0,5,7,0},
		{0,0,0,0,0},
		{0,2,6,0,0}
	};
 	col= columnsoutput(inputmatrix);
	sparseoutput(col,inputmatrix);
}