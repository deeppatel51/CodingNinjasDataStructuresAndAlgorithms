#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int countWords(string input) {
    // Write your code here
    int count=1;
    for(int i=0; i<input.length(); i++)
    {
        if(input[i]== ' ' )
        {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}
