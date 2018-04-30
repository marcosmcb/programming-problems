#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string tipo1, tipo2, tipo3;


	cin >> tipo1 >> tipo2 >> tipo3;


	if(!tipo1.compare("vertebrado"))
	{
		if(!tipo2.compare("ave"))
		{
			if(!tipo3.compare("carnivoro"))
			{
				cout << "aguia" << endl;
			}
			else
			{
				cout << "pomba" << endl;
			}
		}
		else
		{
			if(!tipo3.compare("onivoro"))
			{
				cout << "homem" << endl;
			}
			else
			{
				cout << "vaca" << endl;	
			}
		}
	}
	else
	{
		if(!tipo2.compare("inseto"))
		{
			if(!tipo3.compare("hematofago"))
			{
				cout << "pulga" << endl;
			}
			else
				cout << "lagarta" << endl;
		}
		else
		{
			if(!tipo3.compare("hematofago"))
			{
				cout << "sanguessuga" << endl;
			}
			else
			{
				cout << "minhoca" << endl;	
			}
		}	
	}

	return 0;
}