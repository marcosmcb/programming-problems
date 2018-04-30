#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	double a,b,c, maior, medio, menor;

	cin >> a >> b >> c;

	if(a > b)
	{
		if(a > c)
		{
			maior = a;
			if(b > c)
			{
				medio = b;
				menor = c;
			}
			else
			{
				medio = c;
				menor = b;
			}
		}
		else
		{
			maior = c;
			medio = a;
			menor = b;
		}

	}
	else if(a > c)
	{
		maior = b;
		medio = a;
		menor = c;

	}
	else
	{
		if(b > c)
		{
			maior = b;
			medio = c;
			menor = a;
		}
		else
		{
			maior = c;
			medio = b;
			menor = a;
		}
	}

	cout << menor << endl << medio << endl << maior << endl;
	cout << endl;
	cout << a << endl << b << endl << c << endl;

	return 0;
}