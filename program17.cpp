#include <iostream>
using namespace std;
int main(){
    double number=15.58971;
    int integral=int(number);
    double fractional=number-integral;
    cout<<"integral part is:"<<integral<<endl;
    cout<<"fractional part is:"<<fractional<<endl;
    return 0;
}