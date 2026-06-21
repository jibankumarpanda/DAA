#include<stdio.h>

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    for(int i = 0;i<=n;i++){
        for(int space = 1;space<=n-i;space++){
            printf(" ");
        }
        for(int j = 0;j<=i;j++){
            int ans = ncr(i,j);
            printf("%d ", ans);
        }
        printf("\n");
    }
    return 0;
}