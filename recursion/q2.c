//print the sum from 1 to n
// #include<stdio.h>
// int sum(int n){
//     if(n == 1) return 1;
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d", &n);
//     int ans = sum(n);
//     printf("%d", ans);
//     return 0;
// }
#include<stdio.h>
void sum(int n,int sum){
    if(n==0){
        printf("%d", sum);
        return;
    }
    sum(n-1,sum+n);
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    sum(n,0);
    return 0;
}