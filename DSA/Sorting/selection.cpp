#include <bits/stdc++.h>
using namespace std;

vector<int> selection_sort(vector<int> &arr)
{
    int temp;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size() + 1; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                for (auto it : arr)
                {
                    cout << it << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<int> a = {5, 6, 4, 5, 3, 2, 1};
    selection_sort(a);

    for (auto it : a)
    {
        cout << it << " ";
    }
}