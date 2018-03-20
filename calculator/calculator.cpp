#include "stdafx.h"
using namespace std;

float First, Second, Result;
char Sign;
int main()
{
		cout << "First number: ";
		cin >> First;
		cout << "Action:  ";
		cin >> Sign;
		cout << "Second number: ";
		cin >> Second;
		if (Sign == '+')
			Result = First + Second;
		if (Sign == '-')
			Result = First - Second;
		if (Sign == '*')
			Result = First * Second;
		if (Sign == '/')
			Result = First / Second;
		cout << "Result = " << Result << endl;
	 system("Pause");
	 return 0;
}


.










