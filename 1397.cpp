#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c=0,d=0;
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        int i;
        for(i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            if(a>b) c++;
            if(b>a) d++;
        }
        printf("%d %d\n",c,d);c=0;d=0;
    }
    return 0;
}
