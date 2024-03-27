#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precompute
    int hashh[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hashh[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char alpha;
        cin >> alpha;
        // fetch
        cout << hashh[alpha - 'a'] << endl;
    }

    return 0;
}