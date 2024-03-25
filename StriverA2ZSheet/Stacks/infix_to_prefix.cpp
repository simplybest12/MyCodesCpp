#include <stack>
#include <string>
#include <iostream>
using namespace std;

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '/' || ch == '*')
        return 2;
    if (ch == '-' || ch == '+')
        return 1;
    return -1;
}

string infixTopostfix(string &s)
{
    stack<char> st;
    string expression;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        // ch == operand direcly add it into expression
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')|| (ch >= '0' && ch <= '9'))
        {
            expression += ch;
        }
        // if ch == '(' push it
        else if (ch == '(')
        {
            st.push('(');
        }
        else if (ch == ')')
        {
            while (st.top() != '(')
            {
                expression += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(st.empty()){
                st.push(ch);
            }
            else if ((precedence(ch) > precedence(st.top())) )
            {
                st.push(ch);
            }
            
            else
            {
                while (!st.empty() && precedence(ch) < precedence(st.top()))
                {
                    expression += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
    }
    if (!st.empty())
    {
        while (!st.empty())
        {
            expression += st.top();
            st.pop();
            /* code */
        }
    }

    return expression;

} 

void reverseString(string &s){
    int n = s.length();
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++,j--;
    }

}

string infixToPrefix(string &s){
    int n = s.length();
    string res;
    reverseString(s);
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            s[i]=')';
        }
        else if(s[i]==')'){
            s[i]='(';
        }
    }
    res = infixTopostfix(s);
    reverseString(res);
    return res;
}

int main(){
    string s;
    cin>>s;
    string ans;
    ans = infixToPrefix(s);
    cout<<ans<<endl;
}