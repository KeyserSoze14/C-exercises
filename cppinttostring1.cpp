#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
main(){


int Number = 123;       // number to be converted to a string

string Result;          // string which will contain the result

ostringstream convert;   // stream used for the conversion

convert << Number;      // insert the textual representation of 'Number' in the characters in the stream

Result = convert.str();
cout << Result << endl;

Result.append("Hello");
cout << Result;

cout << endl;
cout << Result.length() << endl;
return 0;
}
