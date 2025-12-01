#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    double sum=a+b+c;
    double s= sum/2;
    double area;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<"area of triangle is:"<<area<<endl;
    return 0;
}