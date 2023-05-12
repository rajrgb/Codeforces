#include<iostream>
using namespace std;
char* solve(int n, int d, char* str){
      int i;
      int pos=n;
      char c='0'+d;
      for(i=0;i<=n-1;i++)
      {
            if(str[i]<c)
            {
                  pos=i;
                  break;
            }
      }
      for(i=n-1;i>=pos;i--)
      str[i+1]=str[i];
      str[pos]=c;
      str[n+1]='\0';
      return str;
}
int main()
{
      int t;
      cin>>t;
      while(t--){
            int n, d;
            cin>>n>>d;
            char str[n+2];
            cin>>str;
            cout<<solve(n,d,str)<<endl;
      }

}
