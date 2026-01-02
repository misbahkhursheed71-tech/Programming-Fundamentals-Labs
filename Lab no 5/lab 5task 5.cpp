#include <iostream>
using namespace std;
int main(){
 character signal;
cout<<"Enter the value";
cin>>signal;
if(signal==R||signal==r){
	cout<<"stop";
}
if(signal==Y||signal==y){
	cout<<"slow down";
}
if(signal==G||signal==g){
	cout<<"go";
}
return 0;
}
