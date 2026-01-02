#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter the number"<<endl;
	cin>>marks;
	if(marks>=90){
		cout<<"A+";}
	if(marks>=80&&marks<=89){
		cout<<"A";}
	if(marks>=70&&marks<=79){
		cout<<"B";}
	if(marks>=60&&marks<=69){
		cout<<"C";}
	if(marks<=60){
		cout<<"F";}		
	return 0;
}
