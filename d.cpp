/*************************************************************************
	> File Name: d.cpp
	> Author: UnknownCUnknown
	> Mail: jsnjhcb@icloud.com
	> Created Time: 一  5/11 10:24:58 2015
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
int qpow(int x,int n,int mod){
    int res = 1;
    while (n){
        if(n&1){
            res = res * x % mod;
        }
        x = x * x % mod;
        n = n >> 1;
    }
    return res;
}
int main(){
    int a,b,c;
    while(~scanf("%d%d%d",&a,&b,&c)){
        printf("%d\n",qpow(a,b,c));
    }
    return 0;
}
