#include<iostream>
    #include<cstdio>
    using namespace std;

    int main()
    {
        int a,sum=0,c=0;
        double ans=0;
        while(1)
        {
            cin>>a;
            if(a>0)
            {

        sum+=a;
        c++;
            }
            else break;


        }
        ans=(double)sum/(double)c;
        printf("%.2lf\n",ans);
        return 0;
    }
