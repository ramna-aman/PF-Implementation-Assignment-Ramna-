#include <iostream>
using namespace std;
int main(){
 int a=5,b=10;
 cout<<"before interchange"<<endl;
 cout<<"a="<<a<<endl;
 cout<<"b="<<b<<endl;
 int temp;
 temp=a;
 a=b;
 b=temp;
 cout<<"after interchange"<<endl;
 cout<<"a="<<a<<endl;
 cout<<"b="<<b<<endl;
  return 0;
}