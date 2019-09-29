// Kalama Kiefer
// CS 151 , 11-11:50
// Professor Edwards

#include <iostream>

using namespace std;

bool checkNumber(int n)
{
	int s = 0;
	int t;
	for (t = n; t > 0; t /= 10)
		s += t % 10;
	return (n % s == 0);
}

int main()
{
	int number;
	bool play = false;
	bool harshad = false;
	string terminate;


	while (!play)
	{
		harshad = false;
		cout << "enter a number to find out the closest Harshad number\n";
		cin >> number;

		if (number > 0)
		{
			if (checkNumber(number))
			{
				cout << number << " is a harshad number.\n";
				cout << "press yes to enter another number and no to terminate the application.\n";
				cin >> terminate;
				if (terminate == "yes")
				{

				}
				else if (terminate == "no")
				{
					play = true;

				}
			}
			else {
				
				while (!harshad)
				{
					
					number = number + 1;
					if (checkNumber(number))
					{
						cout << number << " is a harshad number.\n";
						cout << "press yes to enter another number and no to terminate the application.\n";
						cin >> terminate;
						if (terminate == "yes")
						{
							harshad = true;
						}
						else if (terminate == "no")
						{
							harshad = true;
							play = true;

						}


					}
				

				}

			}
		} else
		{
			cout << "please enter a number bigger than 0\n";
		  } 
	} // closes while
} // closes main
