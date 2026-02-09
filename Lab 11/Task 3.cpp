//Program to calculate sum & average of array elements
#include <iostream>
using namespace std;
int main()
{
	int arr[8]= {10,20,30,40,50,60,70,80};
	int sum=0, avg;
	for(int i=0;i<8;i++)
	{
	sum=sum+arr[i];
	}
	cout<<"sum is: "<<sum;
	cout<<"\nAverage is: "<<sum/8;
	
	
	
	return 0;
}
