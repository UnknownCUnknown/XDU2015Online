/*************************************************************************
	> File Name: b.cpp
	> Author: UnknownCUnknown
	> Mail: jsnjhcb@icloud.com
	> Created Time: 一  5/11 10:08:05 2015
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
long long a[10];
long long mod = 1e9+7;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        memset(a,0,sizeof a);
        long long ans = 0;
        for(int i=0;i<n;++i){
            int tmp;
            scanf("%d",&tmp);
            for(int i=tmp+1;i<10;++i){
                ans += a[i];
                ans %= mod;
            }
            ++a[tmp];
        }
        printf("%d\n",(int)ans);
    }
    return 0;
}
