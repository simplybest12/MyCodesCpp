#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>
#include <cmath>
#include <stack>
using namespace std;



vector<char> reverse_a_string(vector<char> &str){
    stack<char> s;
    vector<char> v;
    for(auto i : str){
        s.push(i);
    }
    while (!s.empty())
    {
        
        v.push_back(s.top());
        s.pop();
        /* code */
    }
    return v;
    


}

int main(){
    vector<char> v = {'d','e','e','p','a'};
    v = reverse_a_string(v);
    cout<<"Reversed string is: "<<endl;
    for (auto i : v){
        cout<<i<<" ";
    }



}

