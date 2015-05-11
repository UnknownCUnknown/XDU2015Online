/*************************************************************************
	> File Name: h.cpp
	> Author: UnknownCUnknown
	> Mail: jsnjhcb@icloud.com
	> Created Time: 一  5/11 11:13:45 2015
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
map<int,bool> imap;
int a[1010];
int main(){
    int n;
    while(~scanf("%d",&n)){
        imap.clear();
        for(int i=0;i<n;++i){
            scanf("%d",a+i); 
            imap[a[i]] = true;
        }
        sort(a,a+n);
        bool flag = false;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                int tmp = 0-a[i]-a[j];
                if(tmp <= a[j]) {
                    break;
                }
                if(imap[tmp]){
                    flag = true;
                    printf("%d %d %d\n",a[i],a[j],tmp);
                }
            }
        }
        if(!flag){
            printf("Ren Chou Jiu Gai Duo Du Shu!\n");
        }
    }
    return 0;
}
