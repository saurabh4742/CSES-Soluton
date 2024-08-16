#include<iostream>
#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
void calc(vector<long long> arr,long long i,long long arr1sum,long long arr2sum,long long &diff){
    if(i==arr.size()){
        if(abs(arr1sum-arr2sum)<diff)
        diff=abs(arr1sum-arr2sum);
        return ;
    }
    else{
        long long temp=i+1;
        calc(arr,temp,arr1sum+arr[i],arr2sum,diff);
        calc(arr,temp,arr1sum,arr2sum+arr[i],diff);
        return ;
    }
}
int main()
{
    long long n;
    cin>>n;
   vector<long long> arr;
    for(long long i=0;i<n;i++){
        long long temp;
        cin>>temp;
        arr.push_back(temp);
    }
    long long diff=INT_MAX;
    calc(arr,0,0,0,diff);
    cout<<diff<<endl;
    return 0;
}