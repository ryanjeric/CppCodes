#include <iostream>
using namespace std;
int main()
{
    int k,m,n;
   	for(n=1;n<=10;n+=2)
	{
		{
			cout<<" "; 
		}
		for(k=1;k<=n;k+=2)
		{
		cout<<" ";
		}
		for(m=9;m>=k;m-=1)
		{
			cout<<"*";
		}
			cout<<endl;
		
    	}
    	return 0;
}
