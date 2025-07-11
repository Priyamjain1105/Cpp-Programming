/*
Infix to postfix

here we have to convert expression from (a+b)/c to ab+c/

optimal:
  take one by one char from the string

  if we get any operand add it to the string

  if char '(' then put it in stack
  if char ')' then pop all the char in the stack and push into ans string, until u get '(' in stack

  if we get any operator [ () ^ / * + - ] BEDMAS
     the current operator  in the s[i] should be greater then the that in st.top()
     if not pop and put st.top() into strings until that state in be achived and the push the current operator

here we use priority function to measure the priority of the element

*/

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

string infixtopostfix(string s)
{
    int len = s.size();
    stack<char> st;
    string ans;
    for (int i = 0; i < len; i++)
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
    return ans;
}

int main()
{
    string s = "(a+b)/c";
    string ans = infixtopostfix(s);
    cout << ans;
}