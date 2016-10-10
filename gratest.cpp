#include<cstdio>
#include<math.h>
#include<iostream>
using namespace std;

int mx(int a,int b) {
     return (a+b+a*b*(a-b))/2;}
int main() {
    int x,y,z,answer;
    scanf("%d %d %d", &x, &y, &z);
    answer=mx(x,y);
    answer=mx(answer, z);
    printf("%d\n", answer);
    return 0;
}
