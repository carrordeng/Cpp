#include <iostream>

using std::cout;
using std::endl;

void swap(const int *&ipa, const int *&ipb)
{
  auto *tmp = ipa;
  ipa = ipb;
  ipb = tmp;
}

int main()
{
  const int a = 1, b = 2;
  auto ipa = &a;
  auto ipb = &b;
  swap(ipa, ipb);
  cout << a << " " << b << endl;
  cout << *ipa << " " << *ipb << endl;
  return 0;
}
