
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif

	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==2){
        int a[2];
        for(int i=0;i<2;i++){
            cin>>a[i];
        }
	      for(int i=0;i<2;i++){
	          cout<<a[i];
	      }
	    }
	    else if(n>2){
        int a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
	      sort(a,a+n);
	      for(int i=0;i<n;i++){
	        cout<<a[i];
	       }
	    }
	}
	return 0;
}

// {
//   int n;
//   cin>>n;
//   int a[n];
//   for(int i=0;i<n;i++){
//     cin>>a[i];
//   }
//   int m;
//   cin>>m;
//   int b[m];
//   for (int i=0; i<m; i++) {
//     cin>>b[i];
//   }
//   int k=0;
//   int c[50];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(a[i]==b[j]){
//         c[k]=a[i];
//         k++;
//       }
//     }
//   }
//   for(int i=0;i<k;i++){
//     cout<<c[i]<<" ";
//   }
//   a.erase(5);
//     return 0;
// }
