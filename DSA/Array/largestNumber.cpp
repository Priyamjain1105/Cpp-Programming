/*
Need to include vector library first
Ans use the funtion arr.size() for getting the length of the array
*/

#include <iostream>
#include <vector>
using namespace std;

// brute force: Arrange in decending order
int large1(vector<int> arr)
{
    // sort the array
    int n = arr.size();
    cout << arr[n - 1];
}

// Optimal Solution
int largestno(vector<int> arr)
{
    int l1 = arr.size();
    int l = 0;
    for (int i = 0; i < l1; i++)
    {
        if (arr[i] > l)
        {
            l = arr[i];
        }
    }
    return l;
}

int main()
{
    cout << "Finding the largest no in the array" << endl;
    vector<int> s = {5, 4, 6, 3, 2, 1};
    int larg = largestno(s);
    cout << "The largest no is " << larg;
}