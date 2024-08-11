#include<bits/stdc++.h>
using namespace std;

#define ASCII_SIZE 256
#define MAX_INT 2000000
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i, a, b) for (int i = a; i < b; i++)

class DisjointSet{
    vector<int> rank,size,parent;
    public:
    DisjointSet(int n){
        rank.resize(n+1,1);
        size.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            size[i]=0;
        }
    }

    void findUPar(int node){
        if(node == parent[node]) return;

        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u,int v){
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

};

int main(){
    DisjointSet ds(7);
    ds.unionByRank(2,3);
    ds.unionByRank()

}
