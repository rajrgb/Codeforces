#include<iostream>
using namespace std;
int solve(){
  int n,m; cin>>n>>m;
  int deg[n+1]={};
  for(int i=1;i<=m;i++){
    int u,v;
    cin>>u>>v;
    deg[u]++;
    deg[v]++;
  }
  int count=0;
  for(int i=1;i<=n;i++)
  if(deg[i]==1)count++;

  if(count==n-1)
  {
    cout<<count<<" "<<0;
  }
  else{
    int x=n-count-1;
    int y=count/x;
    cout<<x<<" "<<y;
  }
  return 0;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
    cout<<"\n";
  }
}
