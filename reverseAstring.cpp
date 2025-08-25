// reverseAstring.ccp
// JV 8/25


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    cout << "\n\n Welcome to My Reverse a String program!\n\n";

    /// Part 1
    // Use the reverse() function from the library names algorithm

    // Create a string that we will reverse
    string myStrToReverse = "A Long String to Reverse";

    string myEasyReverseStr;

    cout << "\n The String before reverse is:" << myStrToReverse;

    reverse(myStrToReverse.begin(), myStrToReverse.end());

    cout << "\n My Reverse string is: " << myStrToReverse;

    /// Part 2
    // Use a for loop to swap characters

    for (int i=0; i<10; i++) {
        cout << "\n the value of i is " << i << "\n";
    }


    return 0;
}