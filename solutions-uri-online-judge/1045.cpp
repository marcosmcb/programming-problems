#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	float a,b,c, maior, medio, menor;

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

	if(maior >= (medio+menor) )
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else
	{
		if( pow(maior,2) == ( pow(medio,2) + pow(menor,2) ) )	cout << "TRIANGULO RETANGULO" << endl;

		if( pow(maior,2) > ( pow(medio,2) + pow(menor,2) )) cout << "TRIANGULO OBTUSANGULO" << endl;

		if( pow(maior,2) < ( pow(medio,2) + pow(menor,2) )) cout << "TRIANGULO ACUTANGULO" << endl;

		if( maior == medio && maior == menor)	
		{
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		else if( maior == medio || maior == menor || medio == menor)
		{
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

	return 0;
}