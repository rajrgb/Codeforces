#include<iostream>
using namespace std;
int main(){
  int q;
  cin>>q;
  while(q--){
    int n, t;
    cin>>n>>t;
    int arr[n];
    int brr[n];
    int i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    cin>>brr[i];

    //solution

    i=0;
    int max=-1;
    int soli=-2;
    while(t&&i<n){
      if(t>=arr[i]&&brr[i]>max){
        max=brr[i];
        soli=i;
      }
      i++;
      t=t-1;
    }
    cout<<soli+1<<endl;
  }
}
