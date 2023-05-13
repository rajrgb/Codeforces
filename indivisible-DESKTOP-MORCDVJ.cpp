#include<iostream>
using namespace std;
void solve(){
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<1;
    return;
  }
  if(n&1)
  {
    cout<<-1;
    return;
  }
  int i=2;
  int j=1;
  int x=n/2;
  while(x--){
    cout<<i<<" "<<j<<" ";
    i+=2;
    j+=2;
  }
  return;
}

int main(){
  int t;
  cin>>t;
  while(t--)
  {
    solve();
    cout<<endl;
  }
}
