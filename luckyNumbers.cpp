#include<bits/stdc++.h>
using namespace std;
int luckiness(int k){
  int min=9; int max=0;
  while(k){
    int r=k%10;
    if(r>max) max=r;
    if(r<min) min=r;
    k/=10;
  }
  return max-min;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int l,r; cin>>l>>r;
    int res=l;
    int resLuck=luckiness(res);
    l++;
    while(l<=r){
      int currLuck=luckiness(l);
      if(currLuck>resLuck)
      {
        resLuck=currLuck;
        res=l;
      }
      l++;
      if(resLuck==9)
      break;
    }
    cout<<res<<"\n";
  }
}
