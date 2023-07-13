#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX;

int getMin(int* arr, bool* found, int n){
    int i;
    int min=inf;
    int pos=-1;
    for(i=0;i<n;i++){
        if(!found[i]&&arr[i]<min){
            min=arr[i];
            pos=i;
        }
    }
    found[pos]=1;
    return pos;
}
void dijktra(vector<vector<int>> adj, int n){
    int i,j;
   
    int res[n]={};
    for(i=0;i<n;i++) res[i]=inf;

    res[0]=0;

    bool found[n]={};
    
    for(i=0;i<n;i++){
        int curr=getMin(res,found,n);
        //traverse all non confirmed edges of curr

        for(j=0;j<9;j++){
            if(adj[curr][j]&&!found[j]&&(res[curr]+adj[curr][j]<res[j]))
            res[j]=res[curr]+adj[curr][j];
        }
    }
    for(i=0;i<n;i++) cout<<res[i]<<" ";
}

int main(){
    vector<vector<int>> adj=
    {{0,4,8,0,0,0,0,0,0},
     {4,0,11,8,0,0,0,0,0},
     {8,11,0,0,7,1,0,0,0},
     {0,8,0,0,2,0,7,4,0},
     {0,0,7,2,0,6,0,0,0},
     {0,0,1,0,6,0,0,2,0},
     {0,0,0,7,0,0,0,14,9},
     {0,0,0,4,0,2,14,0,10},
     {0,0,0,0,0,0,9,10,0}};

    int i,j;
    // for(i=0;i<9;i++)
    // {
    //         for(j=0;j<9;j++)
    //             cout<<adj[i][j]<<" ";
    //         cout<<"\n";
    // }
    dijktra(adj,9);
    

}