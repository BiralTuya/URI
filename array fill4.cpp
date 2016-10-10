#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int input[15]={0};
    int par[5]={0};
    int impar[5]={0};
    int c=0,d=0;

    for(int i=0;i<15;i++){
        scanf("%d",&input[i]);
    }
    for(int j=0;j<15;j++){
        if((input[j])%(2)==0){
            c++;
            par[c]=input[j];
            if(c==5){
                for(int k=0;k<5;k++)
                    printf("par[%d] = %d\n",k,par[c]);
            }
        }
    else if(input[j]%2==1){
        d++;
        impar[d]=input[j];
        if(d==5){
            for(int l=0;l<5;l++){
                printf("impar[%d] = %d\n",l,impar[d]);
            }
        }
    }
}

    return 0;
}
