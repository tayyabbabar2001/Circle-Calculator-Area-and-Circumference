#include <iostream>

using namespace std;

int main(){
	int r, pi = 3.142, area, circum;
	cout<<"Enter radius:";
	cin >> r;
	area = pi * r * r;
	circum = 2 * pi * r;
	cout<<"Area of the circle is "<<area<<endl;
	cout<<"Circumference of the circle is "<<circum<<endl;
	return 0;
}
