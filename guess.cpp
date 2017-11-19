#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int userGuess;

	srand((unsigned)time(NULL)); // seed the generator
	int target = rand() % 100;   // numbers [0..99]

	while (true)
	{
		cout << "Enter a number between 0 and 99: " << endl;
		cin >> userGuess;

		if (userGuess < 0)
		{
			exit(0);
		}
		else if (userGuess > target)
		{
			cout << "To high" << endl;
		}
		else if (userGuess < target)
		{
			cout << "To low" << endl;
		}
		else //if (userGuess == target)
		{
			cout << "YOU WIN!!" << endl;
			//system("pause");
			exit(0);
		}
	}

	//system("pause");
	return 0;
}