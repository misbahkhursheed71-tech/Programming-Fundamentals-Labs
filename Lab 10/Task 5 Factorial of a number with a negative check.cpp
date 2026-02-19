//Factorial of a number with a negative check
#include <iostream>
using namespace std;
int main()
{
	int i,factorial=1;
	int n;
	cout<<"Enter number to calculate its factorial: ";
	cin>>n;
	if(n<0)
	{
	cout<<"Factorial of negaive number is not defined.";
	}
	else if(n==0)
	{
	factorial=1;
	cout<<"factorial is : "<<factorial;
	}
	else
	{
	for(i=1;i<=n;i++)
	{ 
	factorial=i*factorial;
	}
	cout<<"factorial is : "<<factorial;
	}
	return 0;
}

