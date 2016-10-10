#include<iostream>
#include<cstdio>
using namespace std;

int a[1002];

int main(){
    int n,p=0,q=0,r=0,s=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0) p++;
        if(a[i]%3==0) q++;
        if(a[i]%4==0) r++;
        if(a[i]%5==0) s++;
    }
    printf("%d Multiplo(s) de 2\n",p);
    printf("%d Multiplo(s) de 3\n",q);
    printf("%d Multiplo(s) de 4\n",r);
    printf("%d Multiplo(s) de 5\n",s);
    p=0;q=0;r=0;s=0;
    return 0;
}
