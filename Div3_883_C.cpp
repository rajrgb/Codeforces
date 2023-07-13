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
       
        int n,m,h;
        cin>>n>>m>>h;
        int arr[n][m];
        int i,j;
        for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>arr[i][j];

        pair<int,ll> scores[n];

        for(i=0;i<n;i++) sort(arr[i],arr[i]+m);

    
        for(i=0;i<n;i++){
            int tt=0;
            int pen=0;
            scores[i].first=0;
            scores[i].second=0;
            for(j=0;j<m;j++){
                if(tt+arr[i][j]<=h){
                    tt=tt+arr[i][j];
                    scores[i].first+=1;
                    scores[i].second=scores[i].second+tt;
                }
            }
        }
    
        int count=0;

        int keyScore=scores[0].first;
        ll keyPenalty=scores[0].second;

        for(i=1;i<n;i++){
            if(scores[i].first>keyScore || scores[i].first==keyScore && scores[i].second<keyPenalty) count++;
            
        }
        cout<<count+1;
        cout<<"\n";
	}
	return 0;
}