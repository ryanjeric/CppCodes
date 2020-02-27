#include<iostream>
using namespace std;
int main()
{
	int rj[10]={};
	int x,sum;
	sum=0;

	cout<<"Enter the value of 10 elements ^^ : "<<endl;
	for(int i=0;i<10;i++)
	cin>>rj[i];

	for(x=0;x<=9;x++)
	{
		rj[x];
		if(rj[x]>80)
		{
			sum+=rj[x];
		}
	}
	cout<<"Sum of all array elements greater than 80 ^^ : "<<sum<<endl<<endl;
	return 0;
}