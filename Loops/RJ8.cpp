#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ryanjeric="";

	cout<<"Enter a message: ";
	getline(cin,ryanjeric);
	for(int i=0;i<=ryanjeric.length();i++)
	{
		cout<<ryanjeric.substr(i,1)<<endl;
	}
	return 0;
}