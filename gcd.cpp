#include<iostream>
using namespace std;


int gcd(int a, int b){
    if(a==0||b==0)
    return a+b;

    if(a>b){
        return gcd(a%b, b);
    }
    return gcd(b%a,a);
}

int gcdN(int * arr, int n){
    int i;
    int g=arr[0];
    for(i=1;i<n;i++){
        g=gcd(g,arr[i]);
    }
    return g;
}
int main(){
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>> arr[i];

   cout<<gcdN(arr,n);

}

    