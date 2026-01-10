// Basic String Operations in C++
// 1. Size of String/
// 2. Concatenation of Strings,characters using + operator
// 3. Push back and Pop back
// 4.use of Escape Sequences in Strings
// 5. Append operation
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "World";

    // 1. Size of String
    cout << "Size of str1: " << str1.size() << endl;
    cout << "Size of str2: " << str2.size() << endl;

    // 2. Concatenation of Strings using + operator
    string str3 = str1 + " " + str2;
    cout << "Concatenated String: " << str3 << endl;

    // 3. Push back and Pop back
    str1.push_back('!');
    cout << "After Push Back: " << str1 << endl;
    str1.pop_back();
    cout << "After Pop Back: " << str1 << endl;

    // 4. Use of Escape Sequences in Strings
    string str4 = "This is a line.\nThis is another line.\tThis is tabbed.";
    cout << "String with Escape Sequences:\n" << str4 << endl;

    // 5. Append operation
    str2.append("!!!");
    cout << "After Append: " << str2 << endl;

    return 0;
}