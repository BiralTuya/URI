#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int x=0,y=0,c=0;
    cin>>x;
    cin>>y;

    if(x<y){
        for(int i=x;i<=y;i++){
            if(i%13!=0){
            c=c+i;
            }
        }
    printf("%d\n",c);
    }
    else if(x>y){
        for(int i=y;i<=x;i++){
            if(i%13!=0){
            c=c+i;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
