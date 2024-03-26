#include <bits/stdc++.h>
using namespace std;

int sign(int prev, int x)
{

    if (x / 10 == 0)
    {
        return (prev * 10) + (x % 10);
    }

    return sign((prev * 10) + (x % 10), x / 10);
}
int reverse(int x)
{

    if (x == 0)
    {
        return 0;
    }
    if (x < 0)
    {
        return sign(0, x);
    }

    return sign(0, x);
}

int main()
{

    cout << reverse(123456779);
}