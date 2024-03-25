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

void postToInfix(string &s){
    int n = s.length();
    string result;
    stack<string> st;
    for(int i=0;i<n;i++){
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')|| (ch >= '0' && ch <= '9')){
            string s = string(1,ch);
            st.push(s);
        }
        else{
            string operand1="";
            string operand2="";
            operand1 = st.top();
            st.pop();
            operand2 = st.top();
            st.pop();
            string res = "";
            res = "("+operand2+ch+operand1+")";
            st.push(res);

        }
    }
    while(!st.empty()){
        result = st.top();
        st.pop();
    }
    cout<<result<<endl;
}

int main()
{
    string str;
    cin >> str;
    postToInfix(str);
    
}
