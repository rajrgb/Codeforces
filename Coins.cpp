#include<iostream>
using namespace std;
bool solve(long long n, long long k){
  if(n%2==0)
  return 1;
  else if(n%2!=0){
    if(k%2==0)
    return 0;
    else if(k>n)
    return 0;
    else return 1;
  }
  return 0;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n, k;
    cin>>n>>k;
    if(solve(n,k))
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
  }
}
