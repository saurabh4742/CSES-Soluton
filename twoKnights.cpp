#include <iostream>
using namespace std;
long long countFreeBoard(long long i,long long j,long long k){
    long long totalSquare=k*k;
    long long notAllowed=1;
    if(i+2<=k && j-1>0 )
    notAllowed++;
    if(i+2<=k && j+1<=k )
    notAllowed++;
    if(i-2>0 && j-1>0 )
    notAllowed++;
    if(i-2>0 && j+1<=k)
    notAllowed++;
    if(i-1>0 && j+2<=k)
    notAllowed++;
    if(i+1<=k && j+2<=k )
    notAllowed++;
    if(i-1>0 && j-2>0)
    notAllowed++;
    if(i+1<=k && j-2>0)
    notAllowed++;
    return totalSquare-notAllowed;
}
int main(){
    long long k;
    cin>>k;
    for(long long board=1;board<=k;board++){
        long long ans=0;
        for (long long i=1;i<=board;i++){
        for (long long j=1;j<=board;j++){
            ans+=countFreeBoard(i,j,board);
        }
    }
     cout<<ans/2<<endl;
    }
   return 0;
}