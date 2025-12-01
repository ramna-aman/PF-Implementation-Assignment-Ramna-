#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"before interchange:";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after interchange:";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}