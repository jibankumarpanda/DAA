// write a program to store the roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
int main(){
    int arr[4][2]={{76, 85}, {88, 90}, {82, 78}, {76, 92}};
    //row wise print
    for(int i=0;i<4;i++){
       for(int j=0;j<2;j++){
           printf("%d ", arr[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    //column wise print
    for(int j=0;j<2;j++){
       for(int i=0;i<4;i++){
           printf("%d ", arr[i][j]);
       }
       printf("\n");
    }
    return 0;
}