#include<bits/stdc++.h>
using namespace std;



int firstoccurence(vector<int>& arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = 0;
    int mid = low + (high - low) / 2; // optimized ver of (low+start)/2
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }

        if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return ans;
}

int lastoccurence(vector<int>& arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = 0;
    int mid = low + (high - low) / 2; // optimized ver of (low+start)/2
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }

        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return ans;
}



int main() {
    int n,k;
    cin>>n>>k;
    vector<int> arr[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	int first = firstoccurence(arr,  n,  k);
	int last = lastoccurence(arr, n,  k);
	if(last==0 && first==0){
		return 0;
	}
	int occurences= last-first+1;
	return occurences;
}
