/*************************************************************************
	> File Name: a.cpp
	> Author: UnknownCUnknown
	> Mail: jsnjhcb@icloud.com
	> Created Time: 一  5/11 10:14:04 2015
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
struct qujian{
    int x,y,v;
};
bool cmp(qujian a,qujian b){
    return a.x < b.x;
}
qujian q[100010];
int T;
int main(){
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;++i){
            scanf("%d%d%d",&q[i].x,&q[i].y,&q[i].v);
        }
        sort(q,q+n,cmp);
        int k;
        scanf("%d",&k);
        for(int i=0;i<k;++i){
            int tmp;
            scanf("%d",&tmp);
            int l=0,r=n-1;
            int ans = -1;
            while(l<=r){
                int mid = (l+r)/2;
                if(q[mid].x>tmp){
                    r=mid-1;
                }
                else if(q[mid].y<tmp){
                    l=mid+1;
                }
                else{
                    ans = q[mid].v;
                    break;
                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
