#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    string s;
    int n,m;
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<m;i++){
        cin>>s;
        if(s=="fechou") n++;
        if(s=="clicou") n--;
    }
    printf("%d\n",n);
    return 0;
}
