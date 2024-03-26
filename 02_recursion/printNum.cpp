// print N numbers in linear

#include <bits/stdc++.h>
using namespace std;
void printNum(int n)
{
    if (n < 1)
    {
        return;
    }
    // cout << n; 54321
    printNum(n - 1);
    cout << n; // 12345
}
int main()
{
    // cout << "jai shree ram";
    int n;
    cin >> n;
    printNum(n);
    return 0;
}