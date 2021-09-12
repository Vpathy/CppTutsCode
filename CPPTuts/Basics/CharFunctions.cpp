#include <iostream>
#include <cctype>// Char functions

using namespace std;

int main() {

	char  str[80] = "";
	int getlettersCount{0};
	int getdigitsCount{0};
	int getwhitespaceCount{0};
	
	cout << "Enter a sentence with letters digits and puntuations"<<endl;
	cin.get(str,80);
	cout << str;

	for (char c : str)
	{
		if (isalpha(c))
		{
			getlettersCount++;
		}
		else if (isdigit(c))
		{
			getdigitsCount++;
		}
		else if (isspace(c))
		{
			getwhitespaceCount++;
		}
	}

	cout << " Letter count is : " << getlettersCount << endl;
	cout << " Digit count is : " << getdigitsCount << endl;
	cout << " Space count is : " << getwhitespaceCount << endl;	
	return 0;
}

