#include<stdio.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a , b;
    printf("enter the number: ");
    scanf("%d", &a);
    printf("enter the number: ");
    scanf("%d", &b);
    swap(&a,&b);
    printf("the number is: %d %d", a, b);
}
