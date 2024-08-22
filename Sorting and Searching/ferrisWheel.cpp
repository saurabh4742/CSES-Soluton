#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int weight[n];
    for(int i=0;i<n;i++)
    cin>>weight[i];
    if(n==1)
    {
        if(weight[0]<=k)
        {
            cout<<1;
            return 0;
        }
        cout<<0;
        return 0;
    }
    int i=0,j=n-1;
    sort(weight,weight+n);
    int ans=0;
    vector<int> used(n,0);
    while(i<j){
        if(weight[i]+weight[j]<k){
            ans++;
            used[i]=1;
            used[j]=1;
            i++;
            j--;
        }
        else if(weight[i]+weight[j]>k){
            j--;
        }
        else{
            used[i]=1;
            used[j]=1;
            ans++;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        if(!used[i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}