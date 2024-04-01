#include <bits/stdc++.h>
using namespace std;

// merge arrays
void merge(vector<int> &arr, int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1];
    int R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0,
        j = 0,
        k = low;
    while (i < n1 && j < n2)
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

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// merge sort
void mergeSort(vector<int> &arr, int low, int high)
{
    // cout << arr[low] << "<-low : high->" << arr[high] << endl;
    // cout << low << "<-low : high->" << high << endl;
    // cout << "after : " << endl;
    // for (int i = low; i <= high; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl
    //      << high << "<-high : low-> " << low << " " << endl;
    if (low >= high)
        return;

    int mid = low + ((high - low) / 2);
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
    // cout << "before : " << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}