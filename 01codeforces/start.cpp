#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        string temp = a;
        a[0] = b[0];
        b[0] = temp[0];
        cout << a << " " << b << endl;
    }

    return 0;
}