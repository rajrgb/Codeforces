#include<iostream>
using namespace std;
int solve(int n, bool * arr){
  int c=0;
  int i;
  int max=0;
  for(i=0;i<n;i++){
    if(arr[i]==0)
    {
      c++;
    }
    else{
      if(c>max)
      max=c;
      c=0;
    }
  }
  if(c>max)
  max=c;
  return max;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int i;
    bool arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<solve(n,arr)<<endl;
  }
}
