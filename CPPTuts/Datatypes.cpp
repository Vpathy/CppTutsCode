/*Datatypes define the type of data variables store. Three types of Datatypes in c++
	1.Primitive Datatypes	: Builtin Datatypes. ex: int, float, char
	2.Derived Datatypes		: Derived from primitive Datatypes. ex: functions, arrays, pointers
	3.User-defined Datatypes: Defined by user. ex: class, structure

	1 byte = 8 bits ex:  0 1 0 1 1 0 1 0 

	ref url: https://www.geeksforgeeks.org/c-data-types/
	
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "Size of char : " << sizeof(char)<< " byte" << endl;
	cout << "Size of int : " << sizeof(int)<< " bytes" << endl;
	cout << "Size of short int : " << sizeof(short int)<< " bytes" << endl;
	cout << "Size of long int : " << sizeof(long int)<< " bytes" << endl;
	cout << "Size of signed long int : " << sizeof(signed long int)<< " bytes" << endl;
	cout << "Size of unsigned long int : " << sizeof(unsigned long int)<< " bytes" << endl;
	cout << "Size of float : " << sizeof(float)<< " bytes" << endl;
	cout << "Size of double : " << sizeof(double)<< " bytes" << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t)<< " bytes" << endl;
}