//Md.Injamul Haque
//BSc in CSE,DIU

#include<stdio.h>
int main(){
    int T,a,b,c;
    int i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a*a + b*b == c*c) || (a*a + c*c == b*b ) || (c*c + b*b == a*a) ){
            printf("Case %d: yes\n",i);
        }
        else {
            printf("Case %d: no\n",i);
        }
    }

    return 0;
}
