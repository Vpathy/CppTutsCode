//Control program flow statements: if , if else, nested if else, switch


#include <iostream>
using namespace std;


int main()
{
	int value = 0;
	int min = 0;
	int max = 100;
	cout << "Enter a number" << endl;
	cin >> value;

	// if statement

	cout << "\n-------------------------------if statement" << endl;
	if (value > 0)
	{
		cout << value << "\t" << "is greater than 0" << endl;
	}


	// if else statement

	cout << "\n------------------------------if else statement" << endl;
	if (value % 2 == 0)
	{
		cout << value << "\t" << "is even number" << endl;
	}
	else
	{
		cout << value << "\t" << "is an odd number" << endl;
	}

	// if elseif else statement

	cout << "\n-------------------------------if elseif else statement" << endl;
	if (value < 50)
	{
		cout << value << "\t" << "is near to 0 than 100" << endl;
	}
	else if(value ==  50)
	{
		cout << value << "\t" << "is at mid to 0 and 100" << endl;
	}
	else
	{
		cout << value << "\t" << "is near to 100 than 0" << endl;
	}

	// nested if else statement

	cout << "\n-------------------------------Nested if else statement" << endl;

	if (value >= 50)
	{
		if (value < 75)
		{
			cout << 75-value << "\t" << "is diff between "<< value <<" and 75" << endl;
		}
	}
	else
	{
		cout << value << "\t" << "less than 50" << endl;
	}

	// Switch statement
	cout << "\n-------------------------------Switch statement" << endl;
	switch (value)
	{
	case 10: cout << value << "\t" << "is 10" << endl;break;
	case 20: cout << value << "\t" << "is 20" << endl;break;
	case 30: cout << value << "\t" << "is 30" << endl;break;
	case 40: cout << value << "\t" << "is 40" << endl;break;
	case 50: cout << value << "\t" << "is 50" << endl;break;

	}



}
