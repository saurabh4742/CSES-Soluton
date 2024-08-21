#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(string &query,int &ans,int i ,int j,int count,vector<vector<int>> visited){
    if(i<0 || j<0 || i>6 || j>6)
    return;
    if(i==6 && j==0 && count==47)
    {
        ans++;
        return;
    }
    else if(i==6 && j==0 && count!=47){
        return;
    }
    if(query[count]=='?' && !visited[i][j]){
        visited[i][j]=1;
        solve(query,ans,i+1,j,count+1,visited);
        solve(query,ans,i-1,j,count+1,visited);
        solve(query,ans,i,j+1,count+1,visited);
        solve(query,ans,i,j-1,count+1,visited);
        return;
    }
    else if(query[count]!='?' && !visited[i][j]){
        visited[i][j]=1;
        if(query[count]=='R')
        solve(query,ans,i,j+1,count+1,visited);
        else if(query[count]=='L')
        solve(query,ans,i,j-1,count+1,visited);
        else if(query[count]=='U')
        solve(query,ans,i-1,j,count+1,visited);
        else if(query[count]=='D')
        solve(query,ans,i+1,j,count+1,visited);

    }
    return;
}
int main()
{
    string query;
    cin>>query;
    vector<vector<int>> visited(7,vector<int>(7,0));
    int ans=0;
    solve(query,ans,0,0,0,visited);
    cout<<ans;
    return 0;
}