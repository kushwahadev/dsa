// factorial of N numbers
#include <bits/stdc++.h>
using namespace std;
int product(int n)
{
    if (n == 1)
        return 1;

    return n * product(n - 1);
}
int main()
{
    // cout << "jai shree ram";
    int n;
    cin >> n;
    cout << product(n);
    return 0;
}