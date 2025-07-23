/* without recursion*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    while (b != 0)
    {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main()
{
    int n = gcd(5, 4);
    cout << n;
}