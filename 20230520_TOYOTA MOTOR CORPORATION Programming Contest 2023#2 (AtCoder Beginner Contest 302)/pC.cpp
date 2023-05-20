// Accepted    7 ms	3596 KB	
// Author: Jing-Min, Yang
// Link: https://atcoder.jp/contests/abc302/tasks/abc302_c

#include<iostream>
#include<vector>
using namespace std;

int n,m;
vector<string> input;
vector<bool> used;
bool diff(int idx1,int idx2){
    int count=0;
    for(int i=0;i<m;i++){
        if(input[idx1][i]!=input[idx2][i]) count++;
        if(count==2) return false;
    }
    if(count==1) return true;
    return false;
}
bool dfs(int idx,int count){
    for(int i=0;i<n;i++){
        if(used[i]==false && diff(idx,i)){
            if(count==n-2) return true;
            used[i]=true;
            if(dfs(i,count+1)) return true;
            used[i]=false;
        }
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    input.clear(); input.resize(n);
    used.clear(); used.resize(n,false);
    for(int i=0;i<n;i++) cin>>input[i];
    for(int i=0;i<n;i++){
        if(dfs(i,0)){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}