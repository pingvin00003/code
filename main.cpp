#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	int b;
	int c;
	int z;

	cout << "\t\t\t3x + 1\n" << endl;

	cout << "\nchoose first numer?: ";
	cin >> a;

	cout << "second number?: ";
	cin >> z;

	int result = a % 2;
	b = a;

	while (true)
	{

		if (result == 0)
		{
			b = b / 2;
			cout << b << endl;
		}

		if (result == 1)
		{
			b = (3 * b) + 1;
			cout << b << endl;
		}

		if (b == 1)
		{
			cout << "end is " << a << "\n" << endl;

			if (a == z)
			{
				break;
			}

			a++;
			b = a;
			
		}

		result = b % 2;
	}
}
