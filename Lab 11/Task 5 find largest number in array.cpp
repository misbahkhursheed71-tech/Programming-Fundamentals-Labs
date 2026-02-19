//Program to find largest number in array
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
int largest=arr[0];
for(int i=1;i<n;i++)
{
	if(arr[i]>largest)
	{
	largest=arr[i];
	}
}
cout<<"largest number is: "<<largest;
return 0;
}
