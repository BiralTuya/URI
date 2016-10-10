#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    double a=0,media=0,b=0,c=0;
    int flag=0;

    for(int i=0;;i++){
        cin>>a;
        if(flag==1){
            if(a>0 && a<=10){
                media=(a+c)/2;
                printf("media = %.2lf\n",media);
                break;
            }
            else
                printf("nota invalida\n");
        }
         else if(a<=0 || a>10){
            printf("nota invalida\n");
        }
        else if(a>0 && a<=10){
            c=a;
            flag=1;
            cin>>b;
            if(b>0 && b<=10){
                media=(a+b)/2;
                printf("media = %.2lf\n",media);
                break;
            }
            else{
              printf("nota invalida\n");
            }
        }
    }

    return 0;
}


