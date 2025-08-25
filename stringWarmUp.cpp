// stringWarmUp.cpp
// JV 8/25/25

//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout <<"\n\n Welcome to my String Warm UP Program\n\n";
    cout <<"\n Created in class on August 25. 2025\n";

    // Tets do some string stuff
    // Create a string object named myStrObject
    string myStrObject = "abcdefghi";
    // Output my string object
    cout << myStrObject << endl;

    // Use a handy dandy method from the string library to find its length
    cout << "The length of myStrObject is: " << myStrObject.length() << endl;

    // Create anew variable that hold the length of our string
    int lengthOfMyStrObject = 0;

    lengthOfMyStrObject = myStrObject.length();

    cout <<"myStrObject[1]: " << myStrObject[1] << endl;
    cout << "myStrObject.at(3); " << myStrObject.at(3) << endl;

    myStrObject[2] = 'C';
    cout << myStrObject << endl;

    myStrObject = myStrObject + "jklmnop";
    myStrObject += "qrstu";
    myStrObject.append("vwxyz");
    cout << myStrObject << endl;

    cout << "length: " << myStrObject.length() << endl;
    string test2 = "123";
    string test3;

    test3 = myStrObject + test2;
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    test3.clear();
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    string test4 = to_string(-10.5);
    cout << test4 << endl;

    double number = stod(test4);
    cout << "number: " << number << endl;

    string test5 = "A test string";
    string sub = test5.substr(2,4);
    cout << "sub: " << sub << endl;

    string name;
    cout << "Enter name: ";
    //cin >> name;
    getline(cin, name);
    cout << "Name: " << name << endl;

    return 0;
}