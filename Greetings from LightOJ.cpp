//Md.Injamul haqe
//BSc in CSE,DIU
#include <iostream>
using namespace std;
int main(){
    int T;
    //take test case
    cin>>T;
    int count = 0;
    while(T--){
      int num1,num2;
    //pritn sum of two number 
    //take input from user
      cin>>num1>>num2;
      count++;
    //print sum 
      //cout<<num1+num2<<endl;
      printf("Case %d: %d\n",count,(num1+num2));
    }

    return 0;
}
