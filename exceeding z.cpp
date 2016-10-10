#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int x=0,z=0,sum=0,c=0;
    scanf("%d\n",&x);
    scanf("%d\n",&z);
    if(z<=x){
        for(int i=0;;i++){
            scanf("%d\n",&z);
            if(z>x)
                break;
        }
    }
    for(int i=x;;i++){
            sum=sum+i;
            c++;
            if(sum>=z){
                printf("%d\n",c);
                break;
            }
    }
    return 0;
}
