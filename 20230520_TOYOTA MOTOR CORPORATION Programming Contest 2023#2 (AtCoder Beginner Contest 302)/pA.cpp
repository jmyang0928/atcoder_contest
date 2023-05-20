// Accepted    6 ms	3544 KB
// Author: Jing-Min, Yang
// Link: https://atcoder.jp/contests/abc302/tasks/abc302_a

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    cin>>a>>b;
    if(a%b==0) cout<<a/b<<endl;
    else cout<<a/b +1 <<endl;
}