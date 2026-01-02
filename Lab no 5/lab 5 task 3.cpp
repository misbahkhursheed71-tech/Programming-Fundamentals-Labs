#include <iostream>
using namespace std;
int main(){
	int num_1,num_2,num_3;
	cout<<"Enter num_1 : ";
	cout<<"Enter num_2 : ";
	cout<<"Enter num_3 : ";
	cin>>num_1,num_2,num_3;
	if(num_1>num_2&&num_1>num_3){
		cout<<num_1<<"is Largest"<<endl;}
	if(num_2>num_1&&num_2>num_3){
		cout<<num_2<<"is Largest"<<endl;}
			if(num_3>num_1&&num_3>num_2){
		cout<<num_3<<"is Largest"<<endl;}
		if(num_1=num_2=num_3){
			cout<<"All are equal";}
	return 0;
}
