#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>
#include <cmath>
#include <unordered_map>

using namespace std;

vector<vector<int>> vp;
void frequencySort(string s) {
        unordered_map<char,int> mp;
        int n=s.length();
        string srt="";
        cout<<"JERe"<<endl;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            cout<<s[i]<<endl;
        }
        cout<<"HLLO"<<endl;
    
     unordered_map<char , int>::iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    // return srt;
}

// void solve(vector<int> &arr,vector<int> &ans,int i,int j){
   
//     if(i==arr.size()){   
//         vp.push_back(ans);   
//       return;
//     }
//     if(j<arr.size()){
//         ans.push_back(arr[j]);
//         // vp.push_back(ans);
//         solve(arr,ans,i,j+1);
//         ans.pop_back();
//     }
//     // ans.push_back(arr[j]);
//     // solve(arr,ans,i,j+1);
   
   
//       else{
//  solve(arr,ans,i+1,0);
//       }  //  ans.pop_back();
     


// }


int main() {
    vector<string> arr;
    string s;
    vector<int> ans;
    int n;cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     arr.push_back(x);
    // }
    // solve(arr,ans,0,0);
    frequencySort(s);

    // for(auto it : vp){
    //     for(auto itr : it){
    //         cout<<itr<<" ";
    //     }
    //     cout<<endl;
    // }

    
    

}