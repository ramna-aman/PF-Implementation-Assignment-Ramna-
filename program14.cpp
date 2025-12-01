#include <iostream>
using namespace std;
int main(){
    float millimeters;
    cout<<"enter millimeters:";
    cin>>millimeters;
    //1 inch=25.4 
    float inches=millimeters/25.4;
    cout<<"lenght in inches is:"<<inches<<endl;
    return 0;
}