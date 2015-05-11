/*************************************************************************
	> File Name: e.cpp
	> Author: UnknownCUnknown
	> Mail: jsnjhcb@icloud.com
	> Created Time: 一  5/11 10:33:14 2015
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
long long mod = 1e9+7;
struct Matrix{
    long long a[2][2];
};
Matrix matMul(Matrix a,Matrix b){
    Matrix c;
    memset(c.a,0,sizeof c.a);
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            if(a.a[i][j]){
                for(int k=0;k<2;++k){
                    c.a[i][k]=(c.a[i][k]+a.a[i][j]*b.a[j][k])%mod;
                }
            }
        }
    }
    return c;
}
Matrix tmp,mat;
long long powMat(long long n){
    while (n){
        if(n&1) tmp = matMul(tmp,mat);
        n>>=1;
        mat = matMul(mat,mat);
    }
    long long res = (tmp.a[0][0]) % mod;
    return res;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        if(n==0){
            puts("0");
            continue;
        }
        memset(tmp.a,0,sizeof tmp.a);
        for(int i=0;i<2;++i){
            tmp.a[i][i]=1;
        }
        mat.a[0][0] = 2;
        mat.a[0][1] = 1;
        mat.a[1][0] = 1;
        mat.a[1][1] = 0;
        long long ans = powMat(n-1);
        printf("%lld\n",ans);
    }
    return 0;
}
