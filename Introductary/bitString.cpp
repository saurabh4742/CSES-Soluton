#include <iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long mod=(1000000000 +7);
    long long ans=1;
    for(long long i=0;i<n;i++){
        ans=(ans%mod)*2;
    }
    cout<<ans%mod<<endl;
    return 0;
}