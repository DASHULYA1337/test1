#include <iostream>

int main () {
  
  using namespace std;
  
  string str, nospace;
  int line;
  getline (cin, str);
  
  line = str.length();
  
  
  for ( int i = 0; i < line; i++ )
  {
   if ( str[i] == ' ') 
   nospace += "%20";
   else
   nospace += str[i];
  }
  cout << nospace << endl;
  
  cin.get();
  
  return 0;
}
