#include<iostream>
#include<cstdio>
using namespace std;

int main(){

    double sal,result,result1,ans;

    scanf("%lf",&sal);

    if(sal<=2000.00)
        cout<<"Isento"<<endl;
    else if(sal>2000.00 && sal<=3000){
        result=sal-2000.00;
        ans=result*0.08;
        printf("R$ %.2lf\n",ans);
    }
    else if(sal>3000.00 && sal<=4500){
          result=(sal-3000.00)*0.18;
          result1=1000*0.08;
          ans=result+result1;
          printf("R$ %.2lf\n",ans);
    }
    else if(sal>4500.00){
        result=(sal-4500)*0.28;
        result1=(1500*0.18)+(1000*0.08);
        ans=result+result1;
        printf("R$ %.2lf\n",ans);
    }
    return 0;

}
