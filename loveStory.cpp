#include<iostream>
using namespace std;
int solve(string s){
  const string str="codeforces";
  int i;
  int c=0;
  for(i=0;i<10;i++)
  if(str[i]!=s[i])
  c++;
  return c;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<solve(s)<<endl;
  }
}
