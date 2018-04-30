#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{	
	int start, end, total;

	cin >> start >> end;

	if(start > end)
		total = (24-start) + end;
	else if( start == end)
		total = 24;
	else
		total = end - start;

	cout << "O JOGO DUROU " << total << " HORA(S)" << endl;

	return 0;
}