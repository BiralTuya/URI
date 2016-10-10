#include<bits/stdc++.h>
using namespace std;

int p[105];

int main(){
    int n,flag=0,a=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    int j;
    for(j=1;j<n;j++){
        if(p[j]>p[j+1]){
            flag=1;
            a=j;
            break;
        }
        else flag=0;
    }
    if(flag==0) printf("0\n");
    else if(flag==1) printf("%d\n",a+1);
    return 0;
}
