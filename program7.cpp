#include <iostream>
using namespace std;
int main(){
 int rollNo;
 float pfMarks,itcMarks,cgMarks;
 cout<<"enter Roll No:";
 cin>>rollNo;
 cout<<"enter marks of PF(out of 100):";
 cin>>pfMarks;
 cout<<"enter marks of ITC(out of 100):";
 cin>>itcMarks;
 cout<<"enter marks of CG(out of 100):";
 cin>>cgMarks;
 float total=pfMarks+itcMarks+cgMarks;
 cout<<"total="<<total<<endl;
 float  average=pfMarks+itcMarks+cgMarks/3;
 cout<<"average="<<average<<endl;
  return 0;
}