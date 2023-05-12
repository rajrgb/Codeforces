#include<iostream>
using namespace std;

int abs(int k)
{
  if(k<0)
  return -k;
  return k;
}

int solve(int n,int k){
  int count=0;
  for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    count+=1&&(abs(x-i)%k);
  }

  if(!count)
  return 0;
  if(count==2)
  return 1;
  return -1;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
  }
}
