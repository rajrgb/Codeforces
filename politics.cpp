#include<iostream>
using namespace std;
int solve(string str[], int n){
  int i;
  string ref=str[0];
  int count=0;
  for(i=0;i<n;i++){
    if(str[i]==ref)
    count++;
  }
  return count;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    string str[n];
    int i;
    for(i=0;i<n;i++)
    cin>>str[i];
    cout<<solve(str,n)<<endl;
  }
}
