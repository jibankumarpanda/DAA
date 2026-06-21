#include<stdio.h>
int main(){
    int a,b;
    printf("enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    for(int i=1;i<=b;i++){
        a = a * 2;
    }
    printf("a^b = %d", a);
    return 0;
}