#include <iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
    long long arr[n];
    long long mark[n];
    long long Total=0;
    long long len1=0;
    for (long long i=1;i<=n;i++){
        arr[i-1]=i;
        Total+=i;
        mark[i-1]=0;
        
    }
    if(Total%2!=0)
    cout<<"NO";
    else{
        cout<<"YES"<<endl;
        long long sum=0;
        for(long long i=n-1;i>=0;i--){
            if(sum+arr[i]<=Total/2){
                mark[i]=1;
                sum+=arr[i];
                len1++;
            }
        }
        cout<<len1<<endl;
        for(long long i=0;i<n;i++){
            if(mark[i]==1){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
        cout<<n-len1<<endl;;
        for(long long i=0;i<n;i++){
            if(mark[i]==0){
                cout<<arr[i]<<" ";
            }
        }
    }
   return 0;
}