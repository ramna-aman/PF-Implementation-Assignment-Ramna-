#include <iostream>
#define PI 3.1415
using namespace std;
int main() {
	float radius;
	cout<<"enter radius:";
	cin>>radius;
	float area=PI*radius*radius;
	cout<<"area of circle is:"<<area<<endl;
	return 0;
}