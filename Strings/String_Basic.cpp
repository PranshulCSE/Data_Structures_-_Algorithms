// Understanding Basic Differnece b/w Array of Characters and C++ String
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Array of Characters
    char charArray[] = "Hello, World!";
    cout << "Character Array: " << charArray << endl;

    // C++ String
    string cppString = "Hello, C++ String!";
    cout << "C++ String: " << cppString << endl;

    // Modifying C++ String
    cppString += " How are you?";
    cout << "Modified C++ String: " << cppString << endl;

    // Length of C++ String
    cout << "Length of C++ String: " << cppString.length() << endl;
    
    // Getline to read string with spaces
    string inputString;
    cout << "Enter a string with spaces: ";
    getline(cin, inputString);
    cout << "You entered: " << inputString << endl;

    // Accessing characters in C++ String
    cout << "First character of C++ String: " << cppString[0] <<
    endl;

    // 5 Key Differences b/w Array of Characters and C++ String
    cout << "\nKey Differences between Array of Characters and C++ String:" << endl;
    cout << "1. Size: Character arrays have fixed size, C++ strings are dynamic." << endl;
    cout << "2. Memory Management: Character arrays require manual memory management, C++ strings handle it automatically." << endl;
    cout << "3. Concatenation: Character arrays require manual concatenation, C++ strings support concatenation with + operator." << endl;
    cout << "4. Built-in Functions: C++ strings have built-in functions like length(), substr(), find(), etc., while character arrays do not." << endl;
    cout << "5. Ease of Use: C++ strings are easier to use and less error-prone than character arrays." << endl;

    return 0;
}