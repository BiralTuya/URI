#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int a[50]={0};
  int n=0;
  scanf("%d",&n);
  a[0]=0;a[1]=1;
  printf("%d %d",a[0],a[1]);
  for(int i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
    printf(" ");
    printf("%d",a[i]);
  }
  printf("\n");
  return 0;
}

