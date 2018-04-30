#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
 
int main() {
    int length, encryption;
    string input;
    cin>>length;
    cin>>input;
    cin>>encryption;
    while (encryption >= 26){
        encryption -= 26;
    }
    while (encryption <= -26){
        encryption += 26;
    }
 
    if (length == input.size()){
        for (int index = 0; index < length; index++){
            if (('A' <= input[index] && 'Z' >= input[index])){
                input[index] = input[index] + encryption;
                if ('Z' < input[index]){
                    input[index] = 'A' + input[index] - 'Z' - 1;
                }
                else if ('A' > input[index]){
                    input[index] = 'Z' - ('A' - input[index]) + 1;
                }
            }
            else if ('a' <= input[index] && 'z' >= input[index]){
                /* Check before adding encryption value because if value will be greater than 128, it will start from -127 onwards.*/
                if ('z' < (input[index] + encryption)){
                    input[index] = 'a' + (input[index] + encryption) - 'z' - 1;
                }
                else{
                    input[index] = input[index] + encryption;
                    if ('a' > input[index]){
                        input[index] = 'z' - ('a' - input[index]) + 1;
                    }                       
                }
            }
        }
        cout<<input;
    }
    return 0;
}