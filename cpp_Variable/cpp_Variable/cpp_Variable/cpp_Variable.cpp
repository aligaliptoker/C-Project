
// Author : AGT
// Created on : 18/09/2024


// C++ variables are used in this file

// int			: stores integers without decimals, such as 123 or -123 == -123 ve 123 gibi tam say�lar� depolar
// double		: stores floating point numbers, with decimals, such as 19.99 or -19.99 == -19.99 veya 19.99 gibi ondal�kl� say�larla birlikte kayan nokta say�lar�n� depolar
// char			: stores singles characters, such as "a" "b" == a b gibi tekli karakterleri depolar
// string		: stores text, such as hello world == merhaba d�nya gibi metinleri depolar
//bool			: true or false == do�ru ya da yanl��


// --------- MAKING ----------

// type variableName = value;

#include <iostream>

using namespace std; //  cout cannot be used without obtaining std
int main()
{
	// ------ int ---------
	int myNum = 15;
	cout << myNum ;
	int myNum1;
	myNum1 = 10;
	cout << "\n"; // endline pointer
	cout << myNum1; // new variable for myNum

	int sum;
	sum = myNum + myNum1;
	cout << "\n"; // endline pointer
	cout << "sum:" << sum;

	// ------ int ---------

	// ------ double -------

	double myFloatNum;
	myFloatNum = 5.99;
	cout << "\n"; // endline pointer
	cout << "my float number :" << myFloatNum;

	// ------ double -------

	// ------- char ---------

	char myCharCharacter;
	myCharCharacter = 'D';
	cout << "\n";
	cout << "my character is:" << myCharCharacter;

	// ------- char ---------

	// ------- string --------

	string myString = "Hello World";
	cout << "\n";
	cout << "myString:" << myString;

	// ------- string --------

	// ------ bool ---------

	bool myBool = true;
	cout << "\n";
	cout << "my boolean:" << myBool;

	// ------ bool ---------



}

