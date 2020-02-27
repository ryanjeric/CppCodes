#include <iostream>
using namespace std;
int main()
{
    int jeric[10] = {};
    int ryan = 2147483647;//:D
	cout<<"Enter 10 numbers ^^ :"<<endl;
	for(int i=0;i<10;i++)
	cin>>jeric[i];

    for(int f=0;f<10;f++)
    {
        if(jeric[f]<ryan)
        ryan=jeric[f];
    }
    cout << "The Smallest ^^ : "<<ryan<<endl;
    return 0;
}