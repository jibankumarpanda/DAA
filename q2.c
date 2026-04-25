#include<stdio.h>
struct comment{
int id;
int likes;
};
void merge(struct comment arr[],int left,int mid,int right){
int i,j,k;
int n1=mid-left+1;
int n2=right-mid;
struct comment L[n1],R[n2];
for(i=0;i<n1;i++)
L[i]=arr[left+i];
for(j=0;j<n2;j++)
R[j]=arr[right+j];
i=0;
j=0;
k=left;
while(i<n1 && j<n2){
	if(L[i].likes>=R[j].likes)
	arr[k++]=L[i++];
	
	else
	arr[k++]=R[j++]; // Fix array indexing error
	
}
while(i<n1){
arr[k++]=L[i++];
}
while(j<n2){
arr[k++]=R[j++];
}
}
void mergeSort(struct comment arr[],int left,int right){
	if(left<right){
	int mid=left+(right-left)/2; // Fix merge sort logic
mergeSort(arr,left,mid);
mergeSort(arr,mid+1,right);
merge(arr,left,mid,right); // Fix function signature
}
}

int main(){
int n,i;
printf("enter the number of comments: ");
scanf("%d", &n);
struct comment comments[n];
for(i=0;i<n;i++){
printf("enter the number of id for comments %d: ",i+1);
scanf("%d", &comments[i].id);
printf("enter the number of likes for comments %d: ",i+1);
scanf("%d", &comments[i].likes);
}
mergeSort(comments, 0, n-1);
for(i=0;i<n;i++){
printf("comment %d: id=%d, likes=%d\n", i+1, comments[i].id, comments[i].likes);
}
return 0;
}