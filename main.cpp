#include <iostream>
#include <conio.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
void ClrScr() { system("cls"); }
#else
void ClrScr() { system("clear"); }
#endif

using namespace std;

void greet(string name)
{
  ClrScr();
  cout << "Hello " << name << ", you may start making the program!" << endl;
  cout << "(Press any key to continue)";
}

int main(void)
{
  string name;

  cout << "What is your name?" << endl;
  cin >> name;

  greet(name);

  getch();
  return 0;
}