/*************************************************************************
	> file name: f.cpp
	> author: unknowncunknown
	> mail: jsnjhcb@icloud.com
	> created time: 一  5/11 11:33:58 2015
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <string>
#include <cstdlib>
#include <queue>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
const int maxn = 1000000;
struct num{
    int v,cnt;
    num(){}
    num(int a,int b){
        v=a;
        cnt = b;
    }
};
bool isprime[maxn+10];
int prime[maxn];
int pricnt;
void init(){
    memset(isprime,true,sizeof isprime);
    isprime[0]=isprime[1]=false;
    for(int i=2;i<=maxn;++i){
        if(isprime[i]){
            for(int j=i+i;j<=maxn;j+=i){
                if(isprime[j]){
                    isprime[j]=false;
                }
            }
        }
    }
    pricnt=0;
    for(int i=2;i<=maxn;++i){
        if(isprime[i]){
            prime[pricnt]=i;
            ++pricnt;
        }
    }
}
bool vis[maxn+10];
queue<num> q;
int bfs(int n){
    memset(vis,false,sizeof vis);
    while(!q.empty()) q.pop();
    num now(n,0);
    q.push(now);
    while(!q.empty()){
        now = q.front();
        q.pop();
        int k = now.v;
        if(k==1) break;
        vis[k]=true;
        for(int i=0;prime[i]<=k&&i<pricnt;++i){
            if(k%prime[i]==0){
                if(!vis[k/prime[i]]){
                    q.push(num(k/prime[i],now.cnt+1));
                    vis[k/prime[i]]=true; 
                }
            }
        }
        if(!vis[k-1]){
            q.push(num(k-1,now.cnt+1));
            vis[k-1]=true;
        }   
    } 
    return now.cnt;
}
int main(){
    init();
    int n;
    while(~scanf("%d",&n)){
        printf("%d\n",bfs(n));
    }
    return 0;
}
