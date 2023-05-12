#include<iostream>
using namespace std;
bool solve(int n, int m){
  if(n==m)
  return 1;
  if(m>n||n%3!=0)
  return 0;

  int x=n/3;

  if(x==m||2*x==m)
  return 1;

  return solve(x,m)||solve(2*x,m);
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    if(solve(n,m))
    cout<<"Yes";
    else
    cout<<"No";
    cout<<endl;
  }
}
