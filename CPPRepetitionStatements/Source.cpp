// CPP RepetitionStatements - by Ray


#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::endl;

int main()
{

	// for Loops                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     frgggg

	for (int i = 0; i < 10; i++)
	{
		cout << "basarili_1" << endl;
	}


	// while Loops

	string response1;
	cout << "Enter menu choice 1" << endl << "More 1" << endl << "Quit1" << endl;
	cin >> response1;

	while (response1 != "Quit1")
	{
		cout << "basarili_2" << endl;

		// Prompt user again with menu choices until Quit is entered
		cout << "Enter menu choice 1" << endl << "More 1" << endl << "Quit1" << endl;
		cin >> response1;
	}

	// do...while Loop

	string response2;

	do
	{
		cout << "Enter menu choice 2" << endl << "More 2" << endl << "Quit2" << endl;
		cin >> response2;

		// Process the data.

	} while (response2 != "Quit2");


	//Nesting Loops

	bool alternate = true;

	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (alternate)
			{
				cout << "X ";
				cout << "O ";

			}
			else
			{
				cout << "O ";
				cout << "X ";

			}
		}
		alternate = !alternate;

		cout << endl;


		cin.get();


		// Example

		int BTC{ 2 };
		int LTC{ 0 };

		if (LTC > 3)

		{
			BTC++;
		}

		else
		{
			BTC--;
		}

		for (int NMC{ 0 }; NMC < LTC; NMC++)
		{
			std::cout << NMC << std::endl;
		}

		while (LTC < 4)
		{
			int BCH{ 2 };
			LTC += BCH;
		}

		BTC = LTC++;
		BTC = ++LTC;

		switch (BTC)
		{
		case 4:
			std::cout << "BTC is four" << std::endl;
			break;
		case 5:
			std::cout << "BTC is five" << std::endl;
			break;
		case 6:
			std::cout << "BTC is six" << std::endl;
			break;
		default:
			std::cout << "BTC is less than 4 or more than 6" << std::endl;
			break;

			// Conditional Expression
			BTC = (LTC > 5) ? 5 : 10;


		}



	}



	/* First Example
	 The scenario is that you have been asked to create a library of utility functions that support mathematical functions. You will add this code to functions in the next module but for now, write code to complete the following:

	Using a for loop, write code that will compute the result of an int raised to the power of another int. For example, your for loop should use two variables, one for the base and one for the exponent. It should then calculate the base raised to the exponent. 2 raised to the power of 2 should output 4, 2 raised to 8 should output 256, etc. Ensure your code meets these requirements and then paste it in the response section below:

	Contains a variable for the base
	Contains a variable for the exponent
	Uses a for loop to perform the power function
	Outputs the result to the console window */

	int n = 2;
	int	p = 8;
	int	e = 1;
	int	i = 1;

	for (i = 1; i <= p; i++)
	{
		e = e * n;

		cout << e;
	}


	/* Example 2
	For this second response, you will create a switch statement.The switch statement should include the following :

	A variable of type char for the comparison
	The switch statement should check for the value of 'y' (lowercase) or 'Y' (uppercase) and output the response "You chose y or Y" to the console window
	The switch statement should check for the value 'n' or 'N' and output the response, "You chose n or N" to the console window
	The switch statement should include the correct component that will output "You didn't choose a valid option" if neither of these two previous conditions are true

	Paste your code in the response section below*/



		char option_y = 'y';
		char option_Y = 'Y';
		char option_n = 'n';
		char option_N = 'N';
		switch (option_y)
		{
		case 'y':
			cout << "You chose y" << endl;
			break;
		case 'Y':
			cout << "You chose Y" << endl;
			break;
		case 'n':
			cout << "You chose n" << endl;
			break;
		case 'N':
			cout << "You chose N" << endl;
			break;
		default:
			cout << "You didn't choose a valid option" << endl;
			break;
		}

		switch (option_n)
		{
		case 'y':
			cout << "You chose y" << endl;
			break;
		case 'Y':
			cout << "You chose Y" << endl;
			break;
		case 'n':
			cout << "You chose n" << endl;
			break;
		case 'N':
			cout << "You chose N" << endl;
			break;
		default:
			cout << "You didn't choose a valid option" << endl;
			break;
		}








		cin.get();
	}