//Md.Injamul Haque
//BSc in CSE,DIU

#include <iostream>
using namespace std;
int main(){
   int T;
   cin>>T;
   int count = 0;
   while(T--){
       int n;
       cin>>n;
       string var;
       int xx,i;
       count++;
       int sum = 0;
       cout<<"Case "<<count<<":\n";
       for(i=1;i<=n;i++){
           cin>>var;
           if(var=="report"){
               cout<<sum<<endl;
               continue;
           }
           if(var=="donate"){
               cin>>xx;
               sum += xx;
               
           }
       }
   }

    return 0;
}
