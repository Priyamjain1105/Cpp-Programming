#include <bits/stdc++.h>
using namespace std;

vector<int> insertion(vector<int> &arr)
{
    int temp;
    int n = arr.size();
    int i = 1;
    while (i < n)
    {
        int j = i;
        while (arr[j - 1] > arr[i] && j > 0)
        {

            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
        i++;
    }
}

int main()
{
    vector<int> a = {4, 3, 5, 6};
    insertion(a);
    for (auto it : a)
    {
        cout << it << " ";
    }
}