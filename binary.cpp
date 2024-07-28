#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int key;
    cin >> n;
    cin >> key;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int i = 0;
    int j = arr.size() - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;

        if (arr[mid] == key)
        {
            cout << "find the key is " << arr[mid];
            return 0;
        }
        else if (arr[mid] < key)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }

    return 0;
}