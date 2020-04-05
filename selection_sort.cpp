#include<bits/stdc++.h>

using namespace std;

void selection_sort(int A[], int n){
	int i, j, min, temp;
	for(i=0; i <= n-2; i++ ){ 
		min = i;
		for(j=i+1; j <= n-1; j++)
			if(A[j] < A[min])
				min = j;
		if(min != i){ 
			temp = A[i];
			A[i] = A[min];
			A[min] = temp;
		}
	}	 
}

int main(){
	
int i;	
int arr[] = {2, 3, 1 ,6, 8, 9, 5, 5, 10, 1, 9};
selection_sort(arr,11);
for(i = 0; i<11;i++)
	cout<<arr[i]<<"  ";

return 0;}
