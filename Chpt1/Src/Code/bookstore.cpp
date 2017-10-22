#include <iostream>
#include <string>
#include "../Headers/Sales_item.h"

using namespace std;

int main(){
	cout<<"Enter Some numbers"<<endl;
	int var1 = 0, var2 = 0;
	cin >> var1 >> var2;
	cout << "Sum " << var1+var2 <<endl;
	std::string x = "Hello!";
	cin >> x;
	Sales_Item h = Sales_Item(x);
	Sales_Item y = Sales_Item(x);
	if(h.isbn == y.isbn)
	{
		cout<<"Wahoo"<<endl;
	}
	cout<<h.isbn<<endl;
}