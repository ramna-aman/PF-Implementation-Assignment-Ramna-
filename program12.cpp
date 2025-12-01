#include <iostream>
using namespace std;
int main() {
	double pi=3.14;
	float radius,height;
	cout<<"enter radius:";
	cin>>radius;
	cout<<"enter height:";
	cin>>height;
	int volume=pi*radius*radius*height;
	cout<<"volume of cylinder is:"<<volume<<endl;
	return 0;
}