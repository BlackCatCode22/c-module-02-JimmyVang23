// funWithFunctions.cpp
// JV 09/03/25

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Create three functions:

// getAnIntFromTheUser()
// input: the user's name
// processing: ask the user from an integer value
// output: the user's number
int getAnIntFromTheUser(string userName) {

    // prompt the user for a number (a whole number aka an int)
    int anIntFromTheUser;

    cout << "\n Hello, " + userName + ", please enter a a whole number: ";
    cin >> anIntFromTheUser;


    return anIntFromTheUser;
}


//
int main() {
    cout << "\nHello and welcome to my Fun With Functions \n ";

    // Variables needed
    string userName;
    // Get an int from the user by calling (invoking) your function
    int aRandomNumber = 0;

    // Get the users name.
    cout << "\n Hello user, what is your name? ";
    cin >> userName;
    cout <<"\n userName is: " << userName << "\n";

    // Call (invoke) the function named getAnIntFromTheUser() with a string argument
    aRandomNumber = getAnIntFromTheUser(userName);
    cout << "\n\n" + userName + " has entered: " << aRandomNumber << endl;


    return 0;
}