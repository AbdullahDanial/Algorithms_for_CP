/*#include<iostream>
#include<string>
using namespace std;

int main()
{
	string lwTxt;
	
	cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
	getline(cin, lwTxt);
	
	for (int i = 0; i < lwTxt.length(); i++)
  	{
  		lwTxt[i] = toupper(lwTxt[i]);
  	}
  	
	cout<< "\nThe Given String in Uppercase = " << lwTxt;
		
 	return 0;
}*/




	for (int i = 0; i < lwTxt.length(); i++)
  	{
  		if(lwTxt[i] >= 'a' && lwTxt[i] <= 'z')
  		{
  			lwTxt[i] = lwTxt[i] - 32;
		}
  	}
  	
	cout<< "\nThe Given String in Uppercase = " << lwTxt;