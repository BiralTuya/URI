/*#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a[1000];
    int n=0,i=0;
    scanf("%d",&n);
    while(1){
        if(i==999) break;
        for(int j=0;j<n;j++){
            a[j]=(j+n)-n;
            printf("N[%d] = %d\n",i,a[j]);
            i++;
        }
    }
    return 0;
}*/

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a[10000];
    int n=0,i=0;
    scanf("%d",&n);
    while(i<1000){
        for(int j=0;j<n;j++){
            a[i]=j;
            i++;
        }
    }
    for(int k=0;k<1000;k++){
        printf("N[%d] = %d\n",k,a[k]);
    }
    return 0;
}
