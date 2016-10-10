#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
        while(n--){
            int a,b;
            scanf("%d %d",&a,&b);
            int ans=(((a/2)*(b/2))/(2))*(4);
            printf("%d cm2\n",ans);
        }
    return 0;
}
