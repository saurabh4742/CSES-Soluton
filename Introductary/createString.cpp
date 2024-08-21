#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans,string &query,string sol,vector<int> mark){
    if(query.length()==sol.length()){
        ans.push_back(sol);
        return;
    }
    for (int i=0;i<query.length();i++){
        if(mark[i]!=1){
        mark[i]=1;
        solve(ans,query,sol+query[i],mark);
        mark[i]=0;
        }

    }
}
int main()
{
    vector <string > ans;
    string s;
    cin>>s;
    vector<int> mark (s.length(),0);
    solve(ans,s,"",mark);
    set<string> sett;
    for(int i=0;i<ans.size();i++)
    {
        if(!sett.count(ans[i])){
            sett.insert(ans[i]);
        }
    }
    cout<<sett.size()<<endl;
    for (auto& it:sett){
        cout<<it<<endl;
    }
    return 0;
}