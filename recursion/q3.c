#include<stdio.h>
int fibo(int n){
    if(n==1 || n ==0){
        printf("%d ", n);
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
int n;
printf("enter the number: ");
scanf("%d", &n);
fibo(n);
    return 0;
}