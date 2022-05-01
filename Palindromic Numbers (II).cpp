//Md.Injamul Haque
//BSc in CSE,DIU

#include <iostream>
using namespace std;
int main()
{
    int T;
    //take test case
    cin>>T;
    int count = 0;
    long int sum = 0;
    while(T--)
    {
        sum = 0;
        long int n,temp;
        cin>>n;
        temp = n;
        count++;
        while(n>0)
        {
            int r=n%10;
            sum=(sum*10)+r;
            n=n/10;
        }
        if(temp==sum){
            printf("Case %d: Yes\n",count);
        }
        else{
            printf("Case %d: No\n",count);
        }

    }
    return 0;
}
