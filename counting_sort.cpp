#include<bits/stdc++.h>

using namespace std;

int max(int A[], int n){
	int max = 0, i;
	for(i = 1; i<n ;i++)
		{if(A[i]>A[max])
			max = i;}
	return A[max];
}

void counting_sort(int A[], int n){
	int maximum = max(A, n);
	int K[maximum+1] = {0};
	int B[n];
	int i;
	for(i = 0;i< n ;i++){
		K[A[i]]++;
	}
	for(i = 0;i< n-1 ;i++){
		K[i+1]+=K[i];
	}
	for(i = n-1;i>= 0 ;i--){
		 B[--K[A[i]]] = A[i];
	}
	for(i = 0;i< n ;i++){
		A[i] = B[i];
	}
	 
}

int main(){
	
int i;	
int arr[] = {2, 3, 1 ,6, 8, 9, 5, 5, 10, 1, 9};
counting_sort(arr,11);
for(i = 0; i<11;i++)
	cout<<arr[i]<<"  ";

return 0;}
