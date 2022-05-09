//Md.Injamul Haque
//BSc in CSE, DIU

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    double PI = 3.14159265359;
    int T;
    cin>>T;
    int count = 0;
    while(T--){
        double R,n;
        cin>>R>>n;
        double ang = PI/n;
        double r = (R*sin(ang))/(1+sin(ang));
        count++;
        printf("Case %d: %.10lf\n",count,r);
        
    }
    return 0;
}
