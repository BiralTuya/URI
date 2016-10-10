#include<iostream>
using namespace std;

int main(){
    int X=0,Y=0,sum=0;

    cin>>X;
    cin>>Y;

    for(int i=Y+1;i<X;i++){
        if(i%2==1 ||i%2==-1)
            sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}
