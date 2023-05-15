#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int gcd(int a, int b){
    if(a==0||b==0)
    return a+b;

    if(a>b){
        return gcd(a%b, b);
    }
    return gcd(b%a,a);
}

int gcdN(int * arr, int n, int s){
    int i;
    int g=arr[s];
    for(i=s+1;i<n;i++){
        g=gcd(g,arr[i]);
    }
    return g;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int tc;
	cin>>tc;

	while(tc--){
		//code
        int n; 
        int x;
        cin>>n;
        int diff[n+1]={};
        f(i,1,n+1){
            cin>>x;
            diff[x]=abs(x-i);
        }
        sort(diff+1,diff+n+1);

       
        int i;
        for(i=1;i<=n;i++){
            if(diff[i]!=0) break;
        }
        int count=i-1;
        if(count==n)
        cout<<n;
      
        else{
        cout<<gcdN(diff,n+1,i);
        }
        cout<<"\n";
	}
	return 0;
}