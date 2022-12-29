#include <iostream>
using namespace std;
int main()
{
	int i,sum=0;
	int arr[10];
	cout<<"enter numbers ="<<endl;
	for(i=0;i<10;i++)
	{
	cin>>arr[i];
}

	for(i=1;i<=10;i++)
{
	if(arr[2]==i||arr[4]==i)
	{
	continue;}
	sum =sum +i;
}
cout<<"sum of arrays is ="<<sum<<endl;
return 0;
}
