#include <bits/stdc++.h>
using namespace std;

vector<int> no_to_binary(int n)
{
    int temp = n;
    vector<int> arr;

    // till the end of this loop we can expect the arr contains the binary value of the n
    while (temp > 0)
    {

        // will find the min no whcich can divide it and putting it into array
        int i = 0;
        while (temp % i != 0)
        {
            i = i + 1;
        }

        // updating the value of temp to the new quotient
        temp = temp / i;
        cout << temp << endl;
        // pushing the value to the arr
        arr.push_back(i);
    }

    return arr;
}

int main()
{
    int n = 5;
    vector<int> arr = no_to_binary(n);
    for (auto it : arr)
    {
        cout << it;
    }
}