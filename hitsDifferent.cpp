#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  unordered_map<int, long long> m;
  while(t--){
    int n;
    cin>>n;

    if(!m[n]){
      long long res=0;
      queue<int> q;
      q.push(n);
      int prev=-1;
      while(!q.empty()){
        int cn=q.front();
        // cout<<"cn: "<<cn<<endl;
        q.pop();
        res+=(long long)cn*cn;
        if(cn==1)
        break;
        int r,tr,k;
        r=(sqrt(1+8*cn)-1)/2;
        k=r*(r+1)/2;
        if(k<cn)
        r=r+1;
        tr=r*(r-1)/2+1;
        if(tr==cn){
          q.push(cn-r+1);
          prev=cn-r+1;
        }
        else if(k==cn){
          if(cn-r!=prev)
            q.push(cn-r);
        }

        else{
          int x=cn-tr;
          int tz=(r-1)*(r-2)/2+1;
          int a=tz+x-1;
          if(a!=prev)
          q.push(a);
          prev=a+1;
          q.push(prev);
        }
      }
      m[n]=res;
    }

    cout<<m[n]<<"\n";
  }
}
