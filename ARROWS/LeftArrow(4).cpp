#include<iostream>
using namespace std;
int main()
{
   	int count=0;
   	int k,m,n;
   	for(int width=0; width<=5;width++)
   	{
      	for(int alignLeft=width;alignLeft<=15;alignLeft++)
      	{
         		cout<<" ";
      	}
      	for(int space=1;space<count;space++)
      	{            
         		cout<<"*"; 
      	}         
      	cout<<endl;
	  	count+=1;  
   	}
   	for(n=1;n<=4;n+=1)
	{
		cout<<"           ";
		for(k=1;k<=n;k+=1)
		{
		cout<<" ";
		}
		for(m=4;m>=k;m-=1)
		{
			cout<<"*";
		}
			cout<<endl;
		
    	}
   	return 0;
}

