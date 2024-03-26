#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        vector<int> a;
        int total = 0;

        for (int c = 0; c < n; c++)
        {
            int input;
            cin >> input;
            a.push_back(input);
        }

        for (int cnt = 0; cnt < n; cnt++)
        {
            total += a[cnt];
        }

        cout << total << endl;
    }
}