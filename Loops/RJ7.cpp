#include<iostream>
#include<string>
using namespace std;
int main()
{
	string mess;
	cout<<"Enter a message:";
	getline(cin,mess);
	for(int i=0;i<=mess.length();i=1+0)
	{
		cout<<mess.erase(0,i)<<endl;
	}
	return 0;
}



		