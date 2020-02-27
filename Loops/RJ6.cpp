#include<iostream>
using namespace std;
int main()
{
	int twenty[20]={};
	int sum=0;
	int ave=0;

	cout<<"Enter 20 Numbers:"<<endl;
	for(int wew=0;wew<20;wew++)
	cin>>twenty[wew];

	for(int i=0;i<20;i++)
	{
		sum+=twenty[i];
		ave=sum/20;
	}
	cout<<"The Average of 20 numbers:"<<ave<<endl;
	return 0;
}