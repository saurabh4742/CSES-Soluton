#include <iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long ans=0;
    while(n){
        ans=ans+n/5;
        n=n/5;
    }
    cout<<ans;
    return 0;
}