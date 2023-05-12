#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string str;
    cin>>str;
    char c=str[0];
    int i;
    for(i=1;i<str.size();i++) if(str[i]!=c) break;

    if(i==str.size()) cout<<-1;
    else cout<<str.size()-1;
    cout<<"\n";
  }
}
