#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("The very lexical reference");
    string s2(" was very confusing ");
    string s3(s1+s2);
    cout << s3 << endl;
}

/*erase(int) --> erase from given index
  insert(int) --> insert given string from given index
  swap()
  find(string), rfind(string) --> return first instance of inputted strifn from front n back
  replace(starting index, length of string being replaced, string to replace with)
  substr(starting index, length of substring) --> returns consecutive characters as substring
  at(index) -->  
*/

/* Initialisng a variable: string s1("Dnyanesh") or string s1{"Dnyanesh"}
geltine() terminates after a new line, while cin terminates
 after a whitespace
*/