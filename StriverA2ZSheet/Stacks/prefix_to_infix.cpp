#include <stack>
#include <string>
#include <iostream>
using namespace std;

string prefixToInfix(string &s){
    int n = s.length();
    string result;
    stack<string> st;
    for(int i=n-1;i>=0;i--){
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
            res = "("+operand1+ch+operand2+")";
            st.push(res);

        }
    }
    while(!st.empty()){
        result = st.top();
        st.pop();
    }
    return result;
}

int main(){
    string exp;
    cin>>exp;
    cout << "Prefix : ";
    string ans = prefixToInfix(exp);
    cout<<ans<<endl;
}