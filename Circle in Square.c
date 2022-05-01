//Md.Injamul Haque
//BSc in CSE,DIU

#include <stdio.h>
#include <math.h>
int main(){
    double pi = 3.14159265359;
    double r;
    int T,i;
    scanf("%d",&T);
    int count = 0;
    for(i=1;i<=T;i++){
        scanf("%lf",&r);
        double rad = 2*r;
        double br =  pow(rad,2);
        double circle = pi*r*r;
        double ans = br-circle;
        count++;
        printf("Case %d: %.2lf\n",count,ans);
    }

    return 0;
}
