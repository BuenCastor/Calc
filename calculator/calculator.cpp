#include "stdafx.h"
using namespace std;

float First, Second, Result;
char Sign;
int p;
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











//#include "stdafx.h"
//using namespace std;
//int main()
//{
//    char string sign;
//	float first, second;
//	cout << "First number: ";
//	cin >> first;
//	cout << "Operation: ";
//	scanf("%s", &sign);
//	cout << "Second number: ";
//	cin >> second;
//	if (sign == 1) {
//		cout << first + second;
//	}
//	
//	
//	getchar();
//	return 0;
//}