// Accepted    8 ms	3608 KB
// Author: Jing-Min, Yang
// Link: https://atcoder.jp/contests/abc302/tasks/abc302_b

#include<iostream>
#include<vector>
using namespace std;

string goal="snuke";
int moveStep[]={-1,0,1};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h,w;
    cin>>h>>w;
    vector<string> vec(h);
    for(int i=0;i<h;i++) cin>>vec[i];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(vec[i][j]=='s'){
                for(int k=0;k<3;k++) for(int l=0;l<3;l++){
                    if(k==1 && l==1) continue;
                    int tmp;
                    for(tmp=1;( (i+moveStep[k]*tmp)<h && (i+moveStep[k]*tmp)>=0 
                                && (j+moveStep[l]*tmp)<w && (j+moveStep[l]*tmp)>=0 && tmp<5);tmp++ ){
                        if(vec[(i+moveStep[k]*tmp)][(j+moveStep[l]*tmp)]!=goal[tmp]) break;
                    }
                    if(tmp==5){
                        for(tmp=0;tmp<5;tmp++){
                            cout<<(i+moveStep[k]*tmp)+1<<" "<<(j+moveStep[l]*tmp)+1<<endl;
                        }
                        return 0;
                    }
                }

            }
        }
    }
}