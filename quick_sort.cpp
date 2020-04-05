#include<bits/stdc++.h>

using namespace std;

int partition(int A[], int lb, int ub){
	int start = lb; int end = ub; int pivot = A[lb];
	while(start<end)
	{while(A[start]<=pivot) start++;
	while(A[end]>pivot) end--;
	if(start<end){
				int temp = A[end];
				A[end] = A[start];
				A[start] = temp;		
	}}
	int temp = A[lb];
	A[lb] = A[end];
	A[end] = temp;
	return end;
}

void quick_sort(int A[], int lb, int ub){
	if(lb<ub)
	{int loc = partition(A, lb, ub);
	quick_sort(A, lb, loc-1);
	quick_sort(A, loc+1, ub);
}}

int main(){
	
int i;	
int arr[] = {2, 3, 1 ,6, 8, 9, 5, 5, 10, 1, 9};
quick_sort(arr,0,10);
for(i = 0; i<11;i++)
	cout<<arr[i]<<"  ";

return 0;}
