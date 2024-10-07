# infix to Postfix

## Checking if the character is operand
```cpp
string infixToPostfix(string s)
{
    int i;
    stack<char> st;
    string ans;

    while (i < s.size())
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
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
            st.pop();
        }

        else
        {
            while (priority(s[i]) < priority(st.top()))
            {
                ans = ans + st.top();
                st.pop();
            }
            st.push(s[i]);
        }

        i++;
    }
    while (!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }

    return ans;
}

```
