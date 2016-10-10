#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int bonus;
        scanf("%d",&bonus);
        int a,d,m;
        scanf("%d %d %d",&a,&d,&m);
        int a1,d1,m1;
        scanf("%d %d %d",&a1,&d1,&m1);
        int value=0;
        value=((a+d)/2)+bonus;
        int value1=0;
        value1=((a1+d1)/2)+bonus;
        if(value>value1) printf("Dabriel\n");
        else if(value<value1) printf("Guarte\n");
        else if(value==value1) printf("Empate\n");
    }
    return 0;
}
