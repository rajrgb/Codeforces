#include<bits/stdc++.h>
using namespace std;
long long solve(){
  int n;
  cin>>n;
  vector<int> vp;
  vector<int> vn;
  int i;
  for(i=0;i<n;i++){
    int x;
    cin>>x;
    if(x<0)
    vn.push_back(x);
    else
    vp.push_back(x);
  }

  long long bp=-1;
  long long bn=-1;

  if(vp.size()>1){
    int firstMaxP,secondMaxP;
    int pos=0;
    firstMaxP=vp[0];
    for(i=1;i<vp.size();i++){
      if(vp[i]>firstMaxP){
        firstMaxP=vp[i];
        pos=i;
      }
    }
    secondMaxP=-1;
    for(i=0;i<vp.size();i++){
      if(vp[i]>secondMaxP&&i!=pos){
        secondMaxP=vp[i];
      }
    }
    bp=(long long)firstMaxP*secondMaxP;
  }
  if(vn.size()>1){
    int firstMinN, secondMinN;
    int pos=0;
    firstMinN=vn[0];
    for(i=1;i<vn.size();i++){
      if(vn[i]<firstMinN){
        firstMinN=vn[i];
        pos=i;
      }
    }
    secondMinN=1;
    for(i=0;i<vn.size();i++){
      if(vn[i]<secondMinN&&i!=pos){
        secondMinN=vn[i];
      }
    }
    bn=(long long)firstMinN*secondMinN;
  }
  if(bp==-1&&bn==-1)
  return (long long)vp[0]*vn[0];

  if(bp>bn)
  return bp;
  return bn;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    cout<<solve()<<endl;
  }
}
