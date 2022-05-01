//Md.Injamul Haque
//BSc in CSE,DIU

#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int T;
    //take test case
    cin>>T;
    int count = 0;
    while(T--){
      char ch[120];
      cin>>ch;
      count++;
      if(ch[4]=='s'){
          cout<<"Case "<<count<<": "<<ch<<endl;
      }
      else{
          int i;
          cout<<"Case "<<count<<": "<<ch[0]<<ch[1]<<ch[2]<<ch[3]<<'s';
          for(i=4;i<strlen(ch);i++){
              cout<<ch[i];
          }
          printf("\n");
      }
    }
    return 0;
}
