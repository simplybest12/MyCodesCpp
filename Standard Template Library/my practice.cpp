#include <bits/stdc++.h>
using namespace std;
#define asort(a) sort(a, a + n)
#define all(x) (x).begin(), (x).end()
#define dsort(a) sort(a, a + n, greater<int>())
#define vasort(v) sort(v.begin(), v.end());
#define vdsort(v) sort(v.begin(), v.end(), greater<int>());
#define reverse(v) reverse(v.begin(), v.end());
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vll vector<long long>
#define vd vector<double>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define debug cout << "I am here" << endl;
#define pno cout << "NO" << endl
#define pys cout << "YES" << endl
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)

int printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int mod(int n)
{
    if (n < 0)
    {
        n = -n;
    }
    else
    {
        n = n;
    }
}
int binary_search(int a[], int key, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + (high - 1)) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int freqArr(int n, int a[])
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ma = *max_element(a, a + n);
    int freq[ma + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    for (int i = 0; i < ma + 1; i++)
    {
        if (freq[i] != 0)
        {
            cout << i << "-->" << freq[i] << endl; // i represents number and freq[i] represents frequency
        }
    }
}
void insertsSort(int *A, int n)
{
    int j, key, i;
    // loops for passes i.e. its line seperating sorted and insorted array (1|2,|4|,2,|4)--> n-1
    for (i = 1; i < n - 1; i++)
    {
        j = i - 1;
        key = A[i];
        // loop for each pass
        while (j >= 0 && A[j] > key)
        { // j>=0 cozz of it cant be -1 && < || > for ascending anf descending
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
// dont use this coz of high time complexity O(n^2)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// time complexity of this is O(logn) and has built in function too __gcd(a,b)
ll fact(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
// time complexity of this is O(n)
// int sumo(int n){
//   if(n==1){
//     return 1;
//   }
//   return sumo(n)=n+sumo(n-1);
// }
int intdig(int n)
{
    int t = 0;
    while (n > 0)
    {
        n = n / 10;
        t++;
    }
    return t;
}
int pAlindrome(int num)
{
    int rev = 0, digit;
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    return rev;
}
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
int firstindex(int array[], int target, int arraysize)
{
    if (target == array[0])
        return 0;
    if (arraysize == 0)
        return -1;
    return firstindex(array + 1, target, arraysize - 1) + 1;
}

int lastindex(int newarray[], int targetelement, int sizeofarray)
{
    if (targetelement == newarray[sizeofarray - 1])
        return sizeofarray - 1;
    if (sizeofarray == 0)
        return -1;
    return lastindex(newarray, targetelement, sizeofarray - 1);
}

void printCharWithFreq(string str)
{
    int n = str.size();
    int freq[26];
    int b[1500], k = 0;
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;
    for (int i = 0; i < n; i++)
    {
        if (freq[str[i] - 'a'] != 0)
        {
            cout << str[i] << freq[str[i] - 'a'] << " ";
            freq[str[i] - 'a'] = 0;
            b[k++] = freq[str[i] - 'a'];
        }
    }
}
long int factorial(long int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
ll power2(ll n)
{
    ll c = 0;
    while (n > 1)
    {
        n = n / 2;
        c++;
    }
    return c;
}
long long fastpow(ll a, ll b)
{
    long long res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            res = (res * a);
        }
        a = (a * a);
        b = b >> 1;
    }
    return res;
}
ll nC2(ll n)
{
    if (n < 2)
    {
        return 0;
    }
    return (n * (n - 1) / 2);
}
ll printKthBit(unsigned int n)
{
    int i = 1;
    while (n > 0)
    {
        int p = (n >> (i - 1)) % 2;
        if (p != 1)
        {
            i++;
        }
        else
        {
            return i;
            break;
        }
    }
}
void insertElement(int arr[], int n, int x, int pos)
{
    // shift elements to the right
    // which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
}
void righshift(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        swap(arr[i], arr[n - 1]);
        i++;
    }
}
int sumofdig(int n)
{
    ll res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}
// int main()
// {
//     int n;
//     string s;
//     cin>>s>>n;
//     int c=0;
//     unordered_map <char,int> mp;
//     for(int i=0;i<s.length();i++){
//         mp[s[i]]+=(n%i);
//     }

//     // for(int i=0;i<s.length();i+=((2*n)-2)){
//     //     cout<<s[i];
//     //     if(i>s.length()){
//     //         c++;
//     //         i=0;
//     //         i+=c;
//     //     }
//     // }

// }
bool check(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-' && (s[i + 1] >= 0 || s[i] <= 9))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
         cout<< "false";
         return 0;
        }
        i++;
        j--;

    }
    cout<<"true";
    return 0;
}
