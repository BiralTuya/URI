#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n=0,x=0,y=0,sum=0;
    cin>>n;
    while(n--){
        cin>>x>>y;
        if(x%2==0) x++;
        for(int j=0;j<y;j++){
            sum=sum+x;
            x+=2;
        }
        printf("%d\n",sum);
        x=0;sum=0;y=0;
    }
    return 0;
}
