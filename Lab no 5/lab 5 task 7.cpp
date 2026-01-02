#include <iostream>
using namespace std;
int main(){
	int salary,experience;
	cout<<"Enter your salary";
	cin>>salary;
	cout<<"Enter your experience";
	cin>>experience;
	if(salary==25000){
		cout<<"Eligible for loan";}
	else if(salary==20000)&&(experience==5yrs){
		cout<<"Eligible for loan";}
	else
	{cout<<"Not Eligible"}
	return 0;
}
