#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int t;
        scanf("%d",&t);
        if(t==0) break;
        int i;
        for(i=0;i<t;i++){
            int n;
            scanf("%d",&n);
            if(n%2==0) printf("%d\n",(n*2)-2);
            else if(n%2!=0) printf("%d\n",(n*2)-1);
        }
    }
    return 0;
}

