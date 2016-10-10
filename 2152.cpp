#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int h,m,t;
        scanf("%d %d %d",&h,&m,&t);
        if(h>=10 && m>=10 && t==1)
            printf("%d:%d - A porta abriu!\n",h,m);
        else if(h>=10 && m>=10 && t==0)
            printf("%d:%d - A porta fechou!\n",h,m);
        else if(h<10 && m<10 && t==1)
            printf("0%d:0%d - A porta abriu!\n",h,m);
        else if(h<10 && m<10 && t==0)
            printf("0%d:0%d - A porta fechou!\n",h,m);
        else if(h<10 && m>=10 && t==1)
            printf("0%d:%d - A porta abriu!\n",h,m);
        else if(h<10 && m>=10 && t==0)
            printf("0%d:%d - A porta fechou!\n",h,m);
        else if(h>=10 && m<10 && t==1)
            printf("%d:0%d - A porta abriu!\n",h,m);
        else if(h>=10 && m<10 && t==0)
            printf("%d:0%d - A porta fechou!\n",h,m);
    }
    return 0;
}
