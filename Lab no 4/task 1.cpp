//determine even or odd using ternary operator
#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter an integer: ";
	cin>>num;
	string result=(num%2==0)?"even":"odd";
	cout<<"The number "<<num<<" is "<<result<<endl;
	return 0;
}
