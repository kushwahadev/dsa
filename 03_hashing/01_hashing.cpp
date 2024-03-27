#include <bits/stdc++.h>
using namespace std;
// int hashhing[10000000] declare here is size more than 10^6
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hashh[13] = {0}; //.array size cant be more than 10^6 in main
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hashh[number] << endl;
    }

    return 0;
}