#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int l=0,s=-999;
    int v[10000];
    while(scanf("%d",&l)!=EOF){
        for(int i=0;i<l;i++){
            cin>>v[i];
            if(s<v[i]){
                s=v[i];
            }
        }
        if(s<10) printf("1\n");
        else if(s>=10 && s<20) printf("2\n");
        else if(s>=20) printf("3\n");
        s=0;
        l=0;
    }
    return 0;
}
