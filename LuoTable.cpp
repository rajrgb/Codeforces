#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,m; cin>>n>>m;
    int size=n*m;
    int arr[size]={};
    int i;
    for(i=0;i<size;i++) cin>>arr[i];
    int max=arr[0]; int min=arr[0]; int posMax=0; int posMin=0;
    for(i=0;i<size;i++){
      if(arr[i]>max) { max=arr[i]; posMax=i; }
      if(arr[i]<min) { min=arr[i]; posMin=i; }
    }
    int secMax;
    if(posMax==0) secMax=arr[1];
    else secMax=arr[posMax-1];

    for(i=0;i<size;i++){
      if(arr[i]>secMax&&i!=posMax)
      secMax=arr[i];
    }
   int secMin;
   if(posMin==0) secMin=arr[1];
   else secMin=arr[posMin-1];

   for(i=0;i<size;i++){
     if(arr[i]<secMin&&i!=posMin)
     secMin=arr[i];
   }
    long long res=0;
    if(secMax-min > max-secMin)
    {
    if(n>m){
      res+=(long long)(n-1)*(max-min)+(m-1)*(secMax-min);
    }
    else{
      res+=(long long)(m-1)*(max-min)+(n-1)*(secMax-min);
    }
    }
    else
    {
      if(n>m){
        res+=(long long)(n-1)*(max-min)+(m-1)*(max-secMin);
      }
      else{
        res+=(long long)(m-1)*(max-min)+(n-1)*(max-secMin);
      }
    }
    res+=(long long)(m-1)*(n-1)*(max-min);
    cout<<res<<"\n";
  }
}
