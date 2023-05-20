// Accepted    85 ms	6296 KB
// Author: Jing-Min, Yang
// Link: https://atcoder.jp/contests/abc302/tasks/abc302_d

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

long long n,m,d;
vector<long long> vecN,vecM;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m>>d;
    vecN.clear(); vecN.resize(n);
    vecM.clear(); vecM.resize(m);
    for(int i=0;i<n;i++) cin>>vecN[i];
    for(int i=0;i<m;i++) cin>>vecM[i];
    sort(vecN.begin(),vecN.end());
    sort(vecM.begin(),vecM.end());
    n--, m--;
    while(n>=0 && m>=0){
        if(abs(vecN[n]-vecM[m])<=d){
            cout<<vecN[n]+vecM[m]<<endl;
            return 0;
        }
        if(vecN[n]>vecM[m]) n--;
        else m--;
    }
    cout<<-1<<endl;
}