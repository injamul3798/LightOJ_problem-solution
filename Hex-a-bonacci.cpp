//Md.injamul Haque
//BSc in CSE,DIU

#include <iostream>
using namespace std;
int main(){
   long long int T;
   cin>>T;
   long long int arr[10001],n,i,count=0;
   while(T--){
       for(i=0;i<6;i++){
           cin>>arr[i];
       }
       cin>>n;
       for(i=6;i<=n;i++){
           arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;
       }
       count++;
       printf("Case %lld: %lld\n",count,arr[n]%10000007);
 
   }
    return 0;
}
