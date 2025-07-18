#include <bits/stdc++.h>
using namespace std;

// Arrange in decending order and get the second largest
vector<int> bruteforce(vector<int> a)
{
    int temp;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                cout << a[i] << " Swaped With " << a[j] << endl;
            }
        }
    }
    return a;
}

void arrayTraversal(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << "->";
    }
}

int main()
{
    cout << "Started";
    vector<int> arr = {5, 4, 3, 7, 1};
    vector<int> bs = bruteforce(arr);
    arrayTraversal(bs);
}