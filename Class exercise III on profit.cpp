#include<iostream>
using namespace std;
int main(){
	float buyingPrice,sellingPrice,profit;
	cout<<"Enter the buying price"<<endl;
	cin>>buyingPrice;
    cout<<"Enter the selling price"<<endl;
	cin>>sellingPrice;
	profit=sellingPrice-buyingPrice;
	cout<<"The profit is:"<<profit;
	return 0;
}