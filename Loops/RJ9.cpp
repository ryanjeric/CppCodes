#include<iostream>
#include<string>
using namespace std;
int main()
{
	string sage;
	cout<<"Enter a message:";
	getline(cin,sage);
	for(int i=1;i<=sage.length();i=1+0)
	{
		cout<<sage.erase(0,i)<<endl;
	}
	return 0;
}