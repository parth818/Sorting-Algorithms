#include<bits/stdc++.h>

using namespace std;

void merge(int A[], int lb, int mid, int ub){
	int B[ub-lb+1];
	int i = lb;
	int j = mid+1;
	int k = 0;
	while(i<=mid && j<=ub){
			if(A[i]<A[j]) {B[k]=A[i]; i++;}
			else {B[k]=A[j];j++;}
			k++;
	}
	while(i<=mid){
			B[k] = A[i];
			i++;
			k++;}
	while(j<=ub){
			B[k] = A[j];
			j++;
			k++;}
			
	for(j = lb;j<=ub;j++)
		A[j]=B[j-lb];
}

void merge_sort(int A[], int lb, int ub){
	if(lb<ub){
	int mid = (lb+ub)/2;
	merge_sort(A, lb, mid);
	merge_sort(A, mid+1, ub);
	merge(A, lb, mid, ub);}
	
}

int main(){
	
int i;	
int arr[] = {2, 3, 1 ,6, 8, 9, 5, 5, 10, 1, 9};
merge_sort(arr,0,10);
for(i = 0; i<11;i++)
	cout<<arr[i]<<"  ";

return 0;}
