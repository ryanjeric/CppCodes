#include<iostream>
using namespace std;
int main()
{
	int num[10]={};
	
	cout<<"Enter 10 Numbers: "<<endl;
	for(int q=0;q<10;q++)
	cin>>num[q];
	cout<<"The Even Numbers are: ";

	for(int x=0;x<10;x++)
	{
		if(num[x]%2==0)
			{
				cout<<num[x]<<" ";
			}
	}
	cout<<endl;
	return 0;
}

			