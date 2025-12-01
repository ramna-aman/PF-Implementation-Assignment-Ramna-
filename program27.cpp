#include <iostream>
using namespace std;
int main(){
    int hoursTime,minutesTime,secondsTime;
    cout<<"enter time in hours:";
    cin>>hoursTime;
    cout<<"enter time in minutes:";
    cin>>minutesTime;
    cout<<"enter time in seconds:";
    cin>>secondsTime;
    int total=(hoursTime*3600)+(minutesTime*60)+secondsTime;
    cout<<"total seconds is:"<<total<<endl;
     return 0;
}