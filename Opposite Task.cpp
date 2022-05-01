#include <iostream>

using namespace std;

int main()
{
  int T;
  cin>>T;
  int n;
  while(T--){
      cin>>n;
      if(n<=10){
          cout<<"0"<<" "<<n<<endl;
      }
      else{
          //15 a = 20-15 =5 && b = n-a
          int a = n-10;
          int b = n-a;
          cout<<a<<" "<<b<<endl;
      }
  }

    return 0;
}
