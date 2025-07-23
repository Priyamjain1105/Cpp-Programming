/* without recursion*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int n)
{

    int d;
    int c;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            d = d * (1 - (1 / i));
        }
        return n * d;
    }
}

int main()
{
    int n = gcd(99);
    cout << n;
}