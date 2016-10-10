#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    scanf("%d",&n);
    while(n--){
        cin>>str;
        int len=str.length();
        double a=(double)len*0.01;
        printf("%.2lf\n",a);
    }
    return 0;
}
