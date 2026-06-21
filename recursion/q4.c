#include<stdio.h>
int fact(int n){
    if(n<0){
        printf("factorial is not defined for negative numbers");
        return -1;
    }
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
int n;
printf("enter the number: ");
scanf("%d", &n);
int ans = fact(n);
printf("factorial of %d is %d", n, ans);
return 0;
}