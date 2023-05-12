#include<iostream>
using namespace std;

 int pow(int a, int b){
        int p=1;
        int i=1;
        while(i<=b){
            p*=a;
            i++;
        }
        return p;
    }

  void solve(){
        int n;
        cin>>n;
        int e=-1;
        int x=n;
        while(x!=0){
            x/=10;
            e++;
        }
        int res=9*e+n/pow(10,e);
        cout<<res<<endl;
    }

int main(){
      int t;
      cin>>t;
      while(t--){
            solve();
      }
}
