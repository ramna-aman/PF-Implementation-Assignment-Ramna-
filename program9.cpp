#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    cout<<"enter d:";
    cin>>d;
 int maximum=a;
    if (b>maximum) maximum=b;
    if (c>maximum) maximum=c;
    if (d>maximum) maximum=d;
    
    cout<<"maximum number is="<<maximum<<endl;
    
    return 0;
}
    
