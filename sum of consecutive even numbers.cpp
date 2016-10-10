#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int x=0,sum=0;
    while(1){
        cin>>x;
        if(x==0) break;
        if(x%2!=0) x++;
        for(int j=0;j<5;j++){
            sum=sum+x;
            x+=2;
        }
        printf("%d\n",sum);
        x=0;sum=0;
    }
    return 0;
}
