#include <iostream>

// Print hello world 10 times using for, while, do while loops
using namespace std;
int main()
{
	//---------------------------------------------For loop------------------------------------------------------
	
	cout << "for loop";
	cout << "----------------------------\n";
	for (int i = 1;i <=10;i++)
	{
		
		cout << i << "\t Hello World \n";
	}

	//-------------------------------------------------------------------------------------------------------------

	//----------------------------------------------while loop-----------------------------------------------------
	cout << "while loop";
	cout << "----------------------------\n";
	int j = 1;
	while (j<=10)
	{
		cout << j<< "\t Hello World \n";
		j++;
	}

	//-------------------------------------------------------------------------------------------------------------

	//----------------------------------------------do while loop---------------------------------------------------

	cout << "do while loop";
	cout << "----------------------------\n";
	int k = 0;
	do
	{
		cout << k << "\t Hello World \n";
		k++;
	} while (k<=10);

	//-------------------------------------------------------------------------------------------------------------

}