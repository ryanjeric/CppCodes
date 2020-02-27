#include<iostream>
using namespace std;
int main()
{
	int num[10]={};
	
	cout<<"Enter 10 Numbers: "<<endl;
	for(int q=0;q<10;q++)
	cin>>num[q];
	cout<<"The Odd Numbers are: ";

	for(int x=0;x<10;x++)
	{
		num[x];
		if((num[x]%2)!=0)
			{
				cout<<num[x]<<" ";
			}
	}
	cout<<endl;
	return 0;
}

			