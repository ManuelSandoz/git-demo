#include <iostream>
using namespace std;

int main()
{
  cout << "Hello there!\n";
  for (int i = 0; i < 10; i++)
  {
    cout << (i + 1) * (i + 1) << endl;
    cout << (2*i) * (2*i) << endl;
  }
  return 0;
}