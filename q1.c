#include<stdio.h>
#include<string.h>
int main(){
    char dict[20][50];
    char target[50];
int n,i;
printf("enter the number of words: ");
scanf("%d" , &n);
for(i=0;i<n;i++){
	printf("enter the wordsd: ",i+1);
	scanf("%s", dict[i]);
}
printf("ehter the target: ");
scanf("%s", target);

// Sort the words for binary search
for(i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(strcmp(dict[j], dict[j+1]) > 0){
            char temp[50];
            strcpy(temp, dict[j]);
            strcpy(dict[j], dict[j+1]);
            strcpy(dict[j+1], temp);
        }
    }
}

int found=0,res=-1;
int low=0,high=n-1;

while(low<=high){
	int mid = low+(high-low)/2;
if(strcmp(target,dict[mid])==0){
	found=1;
	res=mid;
	break;
    }
else if(strcmp(target,dict[mid])<0){
	high=mid-1;
}
else{
    low=mid+1;
 }
}

if(found){
	printf("%s the word is at: %d", target,res+1);
}
else{
printf("not found");
}

return 0;	
}