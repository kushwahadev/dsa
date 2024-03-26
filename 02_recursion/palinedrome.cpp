#include <bits/stdc++.h>
using namespace std;
bool palin(string str, int i, int n)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (str[i] != str[n - i - 1])
    {
        return false;
    }
    return palin(str, i + 1, n);
}
int main()
{

    string str;
    cin >> str;
    cout << palin(str, 0, str.length());

} // namespace std;
