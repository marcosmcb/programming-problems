#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> myVector;
    int j=0;
    string aux;
    
    for(int i=0; i < str.size(); i++)
        if(str[i] != ',')
            aux+=str[i];
        else
        {
            myVector.insert(myVector.begin() + j++, stoi(aux) );
            aux.clear();
        }
    myVector.insert(myVector.begin() + j++, stoi(aux) );
    aux.clear();
    return myVector;   
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}