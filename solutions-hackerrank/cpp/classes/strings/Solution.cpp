#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a,b;
    char aux;
    
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    
    cout << a+b << endl;
    
    aux = a[0];
    a[0] = b[0];
    b[0] = aux;
    
    cout << a << " " << b << endl;
  
    return 0;
}
