#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int A[], int n){ 
	int i, j, flag;
	for (i = 1; i <= n-1; i++){ 
		flag = 1;
		for (j = 0; j <= n-1-i; j++){
			if (A[j] > A[j+1]){ 
				flag = 0;
				A[j] = A[j] + A[j+1];
				A[j+1] = A[j] - A[j+1];
				A[j] = A[j] - A[j+1];
			}
		}
	if(flag) break;
	} 
}

int main(){
	
int i;	
int arr[] = {2, 3, 1 ,6, 8, 9, 5, 5, 10, 1, 9};
bubble_sort(arr,11);
for(i = 0; i<11;i++)
	cout<<arr[i]<<"  ";

return 0;}
