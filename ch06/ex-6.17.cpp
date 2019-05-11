#include "cctype"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool hasUppercase(const string s)
{
  for (auto c : s)
  {
    if (isupper(c))
      return true;
  }
  return false;
}

void chtoLowercase(string &s)
{
  for (auto &c : s)
  {
    if (isupper)
      c = tolower(c);
  }
}

int main()
{
  string s;
  cin >> s;
  cout << "The input string "
       << (hasUppercase(s) ? "has" : "hasn\'t")
       << " capital letter(s)" << endl;
  chtoLowercase(s);
  cout << s << endl;
  return 0;
}
