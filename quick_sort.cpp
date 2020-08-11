#include<bits/stdc++.h>
using namespace std;

int partition(int A[], int lb, int ub) {
	int start = lb; int end = ub; int pivot = A[lb];
	while (start<end)
	{
		while (A[start]<=pivot) start++;
		while (A[end]>pivot) end--;
		if (start<end) {
			int temp = A[end];
			A[end] = A[start];
			A[start] = temp;
		}
	}
	int temp = A[lb];
	A[lb] = A[end];
	A[end] = temp;
	return end;
}

void quick_sort(int A[], int lb, int ub) {
	if (lb<ub)
	{
		int loc = partition(A, lb, ub);
		quick_sort(A, lb, loc-1);
		quick_sort(A, loc+1, ub);
	}
}

int main() {
	int size, i;
	cout << "Enter size of array = ";
	cin >> size;
	cout << "\nEnter array ---->\n";
	int arr[size];
	for (i = 0; i < size; i++)
	{
		cout << "Enter num " << i + 1 << " = ";
		cin >> arr[i];
	}
	quick_sort(arr, 0, size-1);
	cout << "\nSorted array ---->\n";
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << "\n";
	return 0;
}
