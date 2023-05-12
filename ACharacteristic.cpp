#include<iostream>
using namespace std;

int solve(int n,int k){
  int i;
  for(i=0;i<=n/2;i++){
    int first=(i*(i-1))/2;
    int a=n-i;
    int second=(a*(a-1))/2;
    if(first+second==k){
      cout<<"YES"<<endl;
      for(int j=1;j<=i;j++){
        cout<<-1<<" ";
      }
      for(int j=1;j<=a;j++){
        cout<<1<<" ";
      }
      cout<<endl;
      return 1;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    solve(n,k);
  }
}
