#include<iostream>
using namespace std;
int main(){
	int base,height,hypotenuse,perimeter,area;
	base=10;
	height=7;
	hypotenuse=12;
	perimeter=base+height+hypotenuse;
	area=0.5*base*height;
	cout<<"The perimeter of the right angled triangle is:"<<perimeter<<endl;
    cout<<"The area of the right angled triangle is:"<<area<<endl;
	return 0;
}