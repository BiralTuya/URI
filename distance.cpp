#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(){
    double x1,y1,x2,y2,distance,v1,v2,v3;

    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);

    v1=x2-x1;
    v2=y2-y1;
    v3=(v1*v1)+(v2*v2);
    distance=sqrt(v3);

    printf("%.4lf\n",distance);
    return 0;
    }
