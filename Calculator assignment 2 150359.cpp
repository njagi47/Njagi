#include <iostream>
using namespace std;
int main(){
    double number1,number2;
	double addition,subtraction,multiplication,division;
	    cout<<"Enter number1"<<endl;
    cin>>number1;
    cout<<"Enter number2"<<endl;
    cin>>number2;
    addition=number1 + number2;
    subtraction=number1 - number2;
    multiplication=number1 * number2;
    if (number1!=0){
		division=number1 / number2;
	cout<<"The division of"<<number1 <<"and" << number2 <<"is:"<<division<<endl;
	}
else{
	cout<<"	Division by zero is not allowed"<<endl;
}
    cout<<"The addition of"<<number1 <<"and" << number2 <<"is:"<<addition<<endl;
    cout<<"The subtraction of"<<number1 <<"and" << number2 <<"is:"<<subtraction<<endl;
	cout<<"The multiplication of"<<number1 <<"and" << number2 <<"is:"<<multiplication<<endl;
	return 0;
}