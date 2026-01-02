//Age classification using ternary operator
#include <iostream>
using namespace std;
int main(){
    int age;
	cout<<"Enter age: ";
	cin>>age;
	string category=(age<=13)? "Child" :(age<=19)?"Teenager" :"Adult";
	cout<<"Age "<<age<<" falls under the category: "<<category<<endl;	
	return 0;
}
