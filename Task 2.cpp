//multiplication table of a number
#include <iostream>
using namespace std;
int main()
{
int i,n,limit;
cout<<"Enter the number for which you want multiplication table: ";
cin>>n;
cout<<"Enter limit: ";
cin>>limit;
for(i=1;i<=limit;i++)
{
	cout<<n<<" x "<<i<<" = "<<n*i<<endl;
}
return 0;
}

