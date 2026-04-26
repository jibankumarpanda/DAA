#include<stdio.h.>
void add(int A[2][2],int B[2][2],int C[2][2]){
	for(int i=0;i<2;i++)
 	  for(int j=0;j<2;j++)
		C[i][j]=A[i][j]+B[i][j];
}

void subtract(int A[2][2],int B[2][2],int C[2][2]){
	for(int i=0;i<2;i++)
	  for(int j=0;j<2:j++)
	 	C[i][j]=A[i][j]-B[i][j];
}

void multiply(int A[2][2],int B[2][2],int C[2][2]){
	for(int i=0;i<2;i++)
	  for(int i=0;i<2;i++)
		C[i][j]=0;
		for(int k=0;k<2;k++){
		   C[i][j]=A[i][k]*B[k][j];
	}
}

void strassen(int A[2][2],int B[2][2],int c[2][2]){
	int A11[2][2], A12[2], A21[2][2] ,A22[2][2];
	int B11[2][2], B12[2], B21[2][2] ,B22[2][2];
	int M1[2][2], M2[2], M3[2][2] , M4[2][2];
	int M5[2][2], M6[2], M7[2][2];
	int T1[2][2], T2[2];

	for(int i=0;i<2;i++){
	   for(int j=0;j<2;j++){
		A11[i][j]=A[i][j];
		A12[i][j]=A[i][j+2];
		A21[i][j]=A[i+2][j];
		A22[i][j]=A[i+2][j+2];

		B11[i][j]=B[i][j];
		B12[i][j]=B[i][j+2];
		B21[i][j]=B[i+2][j];
		B22[i][j]=B[i+2][j+2];
	}
}


		


	
