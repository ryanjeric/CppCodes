#include<iostream>
#include<string>
using namespace std;
int main()
{
	string mess,newm;
	int wew;

	cout<<"Enter Message:";
	getline(cin,mess);
	wew=mess.length();

	for(int i=0; i<wew; i++)
	{
		if(mess.substr(i,1)!=" ")
		{
			newm=mess.replace(i,1,"G");
		}
		else
		{
			cout<<"";	
		}
	}
	cout<<"Message:"<<newm<<endl;

	return 0;
}