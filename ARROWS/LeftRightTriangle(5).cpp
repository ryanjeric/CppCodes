#include<iostream>
using namespace std;
int main()
{
   int count=0;
   
   for (int width=0; width<=8;width++)
   {
      for (int alignLeft=width;alignLeft<=15;alignLeft++)
      {
         cout << " ";
      }
      for (int space = 1; space < count; space++)
      {            
         cout << "*"; 
      }         
      cout << endl;
	  count += 1; 
           
   }
   cout << endl;
   return 0;
}