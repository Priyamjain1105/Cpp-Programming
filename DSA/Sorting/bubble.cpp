#include <bits/stdc++.h>
using namespace std;

vector<int> bubble(vector<int> &arr)
{
    int temp;
    int n = arr.size();
    int i = 0;
    while (i < n)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        i++;
    }
}

int main()
{
    vector<int> a = {4, 3, 5, 3, 5, 6};
    bubble(a);
    for (auto it : a)
    {
        cout << it << " ";
    }
}