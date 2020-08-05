#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k;
    int S1 = mid - lb + 1;
    int S2 = ub - mid;
    int L[S1], R[S2];
    for (i = 0; i < S1; i++)
        L[i] = arr[lb + i];
    for (j = 0; j < S2; j++)
        R[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = lb;
    while (i < S1 && j < S2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < S1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < S2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

int minVal(int x, int y) { return (x < y) ? x : y; }

void mergeSort(int arr[], int n)
{
    int window_size;
    int i;
    for (window_size = 1; window_size <= n - 1; window_size = 2 * window_size)
    {
        for (i = 0; i < n - 1; i += 2 * window_size)
        {
            int mid = minVal(i + window_size - 1, n - 1);
            int right_end = minVal(i + 2 * window_size - 1, n - 1);
            merge(arr, i, mid, right_end);
        }
    }
}

int main()
{
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
    mergeSort(arr, size);
    cout << "\nSorted array ---->\n";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}