#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[2][n];
    int i,j;
    int key=2*n;
    arr[0][0]=key--;

    arr[1][n-1]=key--;

    i=1;
    for(j=1;j<n-1;j++){
      arr[i][j]=key--;
      i=!i;
    }
    i=1;
    for(j=0;j<n;j++){
      arr[i][j]=key--;
      i=!i;
    }
    for(i=0;i<2;i++){
      for(j=0;j<n;j++)
      cout<<arr[i][j]<<" ";
      cout<<endl;
    }
  }
}
