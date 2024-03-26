// print name N times
#include <bits/stdc++.h>
using namespace std;

void printname(int n)
{
    if (n == 0)
    {
        return;
    }

    printname(--n);
    cout << "dev kushwaha" << endl;
}
int main()
{
    int n;
    cin >> n;
    printname(n);

    return 0;
}
