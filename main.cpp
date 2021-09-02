#include <iostream>
#include <cstdlib>

using namespace std;

void gcd1(int &i, int &j);
void gcd2(int &i, int &j);

int main() 
{
  int i = 12;
  int j = 8;
  gcd2(i, j);

  cout << "GCD:" << i << " [" << j << "]" << endl;
}

void gcd1(int &i, int &j)
{
  while (i != j)
  {
    if (i > j)
      i = i % j;
    else
      j = j % i;

    cout << "i:"<<i<<" j:"<<j<<endl;
    if(i == 0)
      return;
  }
}

void gcd2(int &i, int &j)
{
  while (i != j)
  {
    if (i > j)
      i = i - j;
    else
      j = j - i;

    cout << "i:"<<i<<" j:"<<j<<endl;
  }
}