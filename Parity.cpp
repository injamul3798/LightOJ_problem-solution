//Md.Injamul Haque
//BSc in CSE,DIU

#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    int num,i,count = 0;
    while(T--){
        int sum = 0;
        cin>>num;
        while(num>0){
            int rem = num % 2;
            sum += rem;
            num = num /2;
        }
        count++;
        if(sum%2==0){
            cout<<"Case "<<count<<":"<<" even"<<endl;
        }
        else{
             cout<<"Case "<<count<<":"<<" odd"<<endl;
        }
    }

    return 0;
}
