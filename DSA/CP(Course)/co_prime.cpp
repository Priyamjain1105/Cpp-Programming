/*
 Finding the common factor of the 2 coprime
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    cout << "a:" << a << " b:" << b << " a%b:" << a % b << endl;
    return gcd(b, a % b);
}

int main()
{
    int a = gcd(48, 18);
    cout << a;
}