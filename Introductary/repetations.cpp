#include <iostream>
using namespace std;
int main(){
   string code;
   cin>>code;
   int maxStreak=0;
   int streak=0;
   char last;
   int size=code.length();
   for (int i=0;i<size;i++){
       if(i==0){
           streak++;
           last=code[0];
       }
       else{
           if(code[i]==last)
           {
               streak++;
               if(maxStreak<streak)
               maxStreak=streak;
           }
           else{
               last=code[i];
               if(maxStreak<streak)
               maxStreak=streak;
               streak=1;
           }
       }
   }
   if(maxStreak<streak)
    maxStreak=streak;
   cout<<maxStreak;
   return 0;
}