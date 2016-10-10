#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        int i;
        for(i=0;i<k;i++){
            int a;
            scanf("%d",&a);
            if(a==1) printf("Rolien\n");
            else if(a==2) printf("Naej\n");
            else if(a==3) printf("Elehcim\n");
            else if(a==4) printf("Odranoel\n");
        }
    }
    return 0;
}
