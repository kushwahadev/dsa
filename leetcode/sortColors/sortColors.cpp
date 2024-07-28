#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    for (int i = 0; i < 6; i++)
    {
        int value;
        cin >> value;
        nums.push_back(value);
    }

    int arr[] = {0, 0, 0};

    for (int i = 0; i < nums.size(); i++)
    {
        arr[nums[i]]++;
    }

    for (int i = 0; i < arr[0]; i++)
    {
        nums[i] = 0;
    }
    for (int i = arr[0]; i < arr[0] + arr[1]; i++)
    {
        nums[i] = 1;
    }
    for (int i = arr[0] + arr[1]; i < arr[0] + arr[1] + arr[2]; i++)
    {
        nums[i] = 2;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
} // namespace std;