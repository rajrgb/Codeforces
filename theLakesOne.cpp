#include<bits/stdc++.h>
using namespace std;


int solve()
{
  int i,j;
  int dx[4]={0,0,1,-1};
  int dy[4]={1,-1,0,0};

  int n,m; cin>>n>>m;
  vector<vector<int>> arr(n,vector<int>(m)), visited;
  visited=arr;
  for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>arr[i][j];
  int maxVol=0;
  for(int r=0;r<n;r++){
    for(int c=0;c<m;c++){
      int vol=0;
      if(!visited[r][c]&&arr[r][c]){
        vol=arr[r][c];
        visited[r][c]=1;
        queue<pair<int,int>> q;
        pair<int,int> p;
        p.first=r;
        p.second=c;
        q.push(p);
        while(!q.empty()){
          p=q.front();
          q.pop();
          int ri,cj;
          ri=p.first;
          cj=p.second;
          for(i=0;i<4;i++){
            int x=ri+dx[i];
            int y=cj+dy[i];
            if(x>=0&&x<n&&y>=0&&y<m&&arr[x][y]&&!visited[x][y])
            {
              vol+=arr[x][y];
              p.first=x;
              p.second=y;
              q.push(p);
              visited[x][y]=1;
            }
          }
        }
      }
      maxVol=max(maxVol,vol);
    }
  }

  return maxVol;
}
int main(){
cin.tie(0)->sync_with_stdio(0);
  int t;
  cin>>t;
  while(t--){
    cout<<solve()<<"\n";
  }
}
