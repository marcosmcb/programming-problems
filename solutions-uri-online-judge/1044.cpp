#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int a,b;
	
	cin >> a >> b;

	if(a%b == 0 || b%a == 0)	cout << "Sao Multiplos" << endl;
	else cout << "Nao sao Multiplos" << endl;

	return 0;
}