#include <iostream>
using namespace std;
class Calculator
{
public:
	int a, b;

public:
	char ch, ch1;

public:
	void yesno()
	{
		cout << "\nDo you want to Continue (y or n) : ";
		cin >> ch1;

		if (ch1 == 'n')
		{
			exit(0);
		}
	}
public:
	void operations()
	{
		cout << "Enter 2 Numbers : ";
		cin >> a >> b;

		while (1)
		{
			cout << "\n Addition (+) " << endl;
			cout << " Substaction (-) " << endl;
			cout << " Multiplication (*) " << endl;
			cout << " Division (/) " << endl;

			cout << "Enter your choice : ";
			cin >> ch;

			switch (ch)
			{
			case '+':
				cout << "\nAddition of two Numbers : " << a + b;
				yesno();

				break;

			case '-':
				cout << "\nSubtraction of two Numbers : " << a - b;
				yesno();
				break;

			case '*':
				cout << "\nMultiplication of two Numbers : " << a * b;
				yesno();
				break;

			case '/':
				if(b==0)
					cout << "Divide by Zero Error" << endl;
				cout << "\nDivision of two Numbers : " << a / b;
				yesno();
				break;
			}
		}
	}
};
int main()
{
	Calculator c1;
	c1.operations();

	return 0;
}
