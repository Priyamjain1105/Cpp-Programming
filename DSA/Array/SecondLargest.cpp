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

int optimal(vector<int> a)
{
    int largest = a[0];
    int slargest = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        if (a[i] > slargest && a[i] != largest)
        {
            slargest = a[i];
        }
    }
    return slargest;
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

    int sol = optimal(arr);
    cout << "From optimal" << sol;
}
