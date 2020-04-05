#include<bits/stdc++.h>

using namespace std;

void maxHeapify(int A[], int n, int i){
	int max = i;
	int rc = (2*i)+2;
	int lc = (2*i)+1;
	
	if(rc<=n && A[rc]>A[max])
		max = rc;
	if(lc<=n && A[lc]>A[max])
		max = lc;
	
	if(max!=i){
		int temp = A[i];
		A[i] = A[max];
		A[max] = temp;
		maxHeapify(A,n,max);
	}
}

void heap_sort(int A[], int n){
	int i;
	for(i = (n/2)-1; i>=0; i--)
		maxHeapify(A,n,i);
	for(i = n; i>0; i--){
		int temp = A[0];
		A[0] = A[i];
		A[i] = temp;
		maxHeapify(A,i-1,0);	
	}
}
int main(){
	
int i;	
int arr[] = {2, 3, 1 ,6, 8, 9, 5, 5, 10, 1, 9};
heap_sort(arr,11-1);
for(i = 0; i<11;i++)
	cout<<arr[i]<<"  ";

return 0;}
