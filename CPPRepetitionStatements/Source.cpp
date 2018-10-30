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





	}







	cin.get();
}