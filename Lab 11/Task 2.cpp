//Program to Print and Array in reverse order
#include <iostream>
using namespace std;
int main()
{
	int n, arr[n];
	cout<<"Enter limit of number you want to enter: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{	
	cin>>arr[i];
	cout<<endl;
	}	
	//reversing the array
	for(int i=n-1 ; i>=0 ; i--)
	{
	cout<<arr[i]<<endl;
	}
	
	return 0;
}
