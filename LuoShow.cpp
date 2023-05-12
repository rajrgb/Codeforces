#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int res=1;
    int n,m; cin>>n>>m;
    int arr[n];
    int i;
    bool pos[m+1]={};
    for(i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]>0)
      pos[arr[i]]=1;
    }
    
    cout<<res+count<<"\n";
  }
}
