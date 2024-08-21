#include <iostream>
using namespace std;
int main() {
    long long t;
    cin>>t;
    long long a[t];
    long long b[t];
    for(long long i=0;i<t;i++)
        cin>>a[i]>>b[i];
        for(long long i=0;i<t;i++){
        while (a[i] && b[i]){
            if(a[i]==b[i]){
                
                a[i]-=2;
                b[i]-=1;
            }
            else if(a[i]<b[i]){
                a[i]-=1;
                b[i]-=2;
            }
            else{
               a[i]-=2;
               b[i]-=1;
            }
        }
        if(!a[i] & !b[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    return 0;
}