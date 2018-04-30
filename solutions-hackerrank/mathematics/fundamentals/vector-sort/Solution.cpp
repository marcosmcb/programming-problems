#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int length, el;
    
    cin >> length;
    
    for(int i=0; i < length; i++)
    {
        cin >> el;
        v.push_back(el);
    }
    
    sort(v.begin(), v.end());
    
    for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
        cout << *it << ' ';
    cout << endl;
    
    return 0;
}
