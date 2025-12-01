#include <iostream>
using namespace std;
int main(){
    float sub1Marks,sub2Marks,sub3Marks,sub4Marks,sub5Marks;
    cout<<"enter marks of sub1(out of 100):";
    cin>>sub1Marks;
    cout<<"enter marks of sub2(out of 100):";
    cin>>sub2Marks;
    cout<<"enter marks of sub3(out of 100):";
    cin>>sub3Marks;
    cout<<"enter marks of sub4(out of 100):";
    cin>>sub4Marks;
    cout<<"enter marks of sub5(out of 100):";
    cin>>sub5Marks;
    int total=sub1Marks+sub2Marks+sub3Marks+sub4Marks+sub5Marks;
    float average=total/5;
    cout<<"total marks is:"<<total<<endl;
    cout<<"average:"<<average<<endl;
     return 0;
}