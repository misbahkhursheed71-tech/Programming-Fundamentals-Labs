//sum of first n natural numbers
#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int n;
	cout<<"Enter limit: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	sum+=i;
	}
	cout<<"Sum is: "<<sum;
	return 0;
}
