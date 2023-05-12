#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int tc;
	cin>>tc;

	while(tc--){
		//code
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        int arr[n];
        f(i,0,n) cin>>arr[i];
        int curr=arr[0]+w;
        int vac=0;
        int count=1;
        int exp=-1;
        int res=0;
        f(i,1,n){
            if(arr[i]<=curr&&count<k&&vac==0) count++;
            else if(vac==0){
                res+=1;
                vac=k;
                vac=vac-count;
                exp=curr+d;
                if(vac==0||exp<arr[i]){
                    count=1;
                    curr=arr[i]+w;
                    exp=-1;
                    vac=0;
                }
                else{
                    count=1;
                }
            }
            else{
                if(arr[i]<=exp&&count<vac) count++;
                else{
                    vac=0;
                    count=1;
                    curr=arr[i]+w;
                    exp=-1;
                }
            }
        }
        if(vac==0) res++;
     
        cout<<res<<"\n";
	}
	return 0;
}