#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,x=0,c=0;
    scanf("%d\n",&n);
    while(n--){
        cin>>x;
        for(int j=1;j<=x;j++){
            if(x%j==0) c++;
        }
        if(c<=2) printf("%d eh primo\n",x);
        else if(c>2) printf("%d nao eh pimo\n",x);
        c=0;x=0;
    }
    return 0;
}
