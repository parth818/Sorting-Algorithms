#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int A[], int n){ 
	int i, j, temp;
	for(i=1; i <= n-1; i++ ){ 
		temp = A[i];
		j = i;
		while (j > 0 && A[j-1] > temp){
			A[j] = A[j-1];
			j = j - 1;
		}
	A[j] = temp;}
}

int main(){
	
int i;	
int arr[] = {2, 3, 1 ,6, 8, 9, 5, 5, 10, 1, 9};
insertion_sort(arr,11);
for(i = 0; i<11;i++)
	cout<<arr[i]<<"  ";

return 0;}
