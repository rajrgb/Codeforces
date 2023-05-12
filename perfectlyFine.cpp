#include<bits/stdc++.h>
using namespace std;
int solve(){
  int n;
  cin>>n;
  int a=-1, b=-1, p=-1;
  int ma=INT_MAX, mb=INT_MAX, mp=INT_MAX;

  int i;
  for(i=0;i<n;i++){
    int x;
    string str;
    cin>>x;
    cin>>str;
    if(str[0]=='1'&&x<ma)
    {
      ma=x;
      a=i;
    }
    if(str[1]=='1'&&x<mb)
    {
      mb=x;
      b=i;
    }
    if(str[0]=='1'&&str[1]=='1'&&x<mp){
      mp=x;
      p=i;
    }
  }
  int mc=ma+mb;

  if(a==-1||b==-1)
  return -1;

  if(a==b)
  return ma;

  if(mc<mp)
  return mc;

  return mp;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    cout<<solve()<<endl;
  }
}
