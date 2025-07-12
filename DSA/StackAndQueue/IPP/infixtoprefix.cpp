#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '/' || ch == '*')
    {
        return 2;
    }
    else if (ch == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

string infixtopostfix(string ns)
{
    int len = ns.size();
    stack<char> st;
    string ans, s;

    // Reversing the string
    for (int i = len; i >= 0; i--)
    {
        if (ns[i] == '(')
        {
            s = s + ')';
        }
        else if (ns[i] == ')')
        {
            s = s + '(';
        }
        else
        {
            s = s + ns[i];
        }
    }
    cout << "reversed string:" << s << endl;
    // converting the reversed string into postfix
    for (int i = 0; i <= len; i++)
    {

        // if operand
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
        {
            ans = ans + s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }
            st.pop(); // to remove '(' from the stack
        }

        // for operators
        else
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            //                    -------------     -----------------
            {
                ans = ans + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    // at the end we will empty the stack
    while (!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }

    string ragain = "";
    for (int i = len; i >= 0; i--)
    {
        ragain = ragain + ans[i];
    }

    return ragain;
}

int main()
{
    string s = "(a+b)/c";
    string ans = infixtopostfix(s);
    cout << ans;
}