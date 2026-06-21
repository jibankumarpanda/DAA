// write a program to store the roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
int main(){
    int arr[4][2]={{1, 85}, {2, 90}, {3, 78}, {4, 92}};
    for(int i=0;i<4;i++){
       for(int j=0;j<2;j++){
           printf("%d ", arr[i][j]);
       }
       printf("\n");
    }
    return 0;
}