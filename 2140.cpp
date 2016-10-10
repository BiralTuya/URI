#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a[]={2,5,10,20,50,100};
    int n,m,c=0,r=0;
    int i;
    for(i=0;;i++){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0) break;
        r=m-n;
        int j;
        for(j=0;j<6;j++){
            if(r%a[j]==0) c++;
        }
        cout<<r<<" "<<c;
        if(c==2) printf("possible\n");
        else printf("impossible\n");
        c=0;r=0;
    }
    return 0;
}
