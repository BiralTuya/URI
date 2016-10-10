#include<bits/stdc++.h>
using namespace std;

int a[105];

int main(){
    int n,flag=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j;
    for(j=0;j<n-1;j++){
        if(a[j]==a[j+1]){
            flag=1;
            break;
        }
        else flag=0;
    }
    if(flag==1) printf("0\n");
    else if(flag==0) printf("1\n");
    return 0;
}
