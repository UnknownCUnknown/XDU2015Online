/*************************************************************************
	> File Name: g.cpp
	> Author: UnknownCUnknown
	> Mail: jsnjhcb@icloud.com
	> Created Time: 一  5/11 11:05:07 2015
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
long long qpow(long long x,long long n){
    long long res = 1;
    while(n){
        if(n&1){
            res = res * x % 10;
        }
        x = x * x % 10;
        n = n >> 1;
    }
    return res;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        double tmp ;
        tmp = n * log10(2.0);
        tmp = tmp -(long long)tmp;
        double ans = pow(10,tmp) + 1e-8;
        printf("%d %d\n",(int)ans,(int)qpow(2,n));
    }
    return 0;
}
