// ===========================Assignment 01==============================
// Example
// false // bool => Boolean

// 'a' // char => Character
// '9' // char => Character
// 9  // int => Integer
// true  // bool => boolean
// 100  // int => Integer
// -10  // int => Integer
// 0  // int => Integer
// false  // bool => Boolean
// 10.9  // float / double

// ===========================Assignment 02==============================
// #include <iostream>

// using namespace std;

// int main() {
//   double salary = 5000.98;
//   cout << sizeof(salary) << endl;// 8 Bytes
//   cout << sizeof(salary) * 8 <<endl; // 64 Bits //! check the answer
// }

// ===========================Assignment 03==============================

/* #include <iostream>
// #include <limits.h>

using namespace std;

int main ()
{
  cout << "Maximum Integer Number Is => " << INT_MAX << endl;
  cout << "Minimum Integer Number Is => " << INT_MIN << endl;
  cout << "Maximum Short Integer Number Is => " << SHRT_MAX << endl;
  cout << "Minimum Short Integer Number Is => " << SHRT_MIN << endl;
} */
// Output Needed
/* "Maximum Integer Number Is => 2147483647"
"Minimum Integer Number Is => -2147483648"
"Maximum Short Integer Number Is => 32767"
"Minimum Short Integer Number Is => -32768" */

// ===========================Assignment 04==============================

/* #include <iostream>

using namespace std;

int main()
{
  // Edit Line To Make 8 Become
  cout << sizeof(10.5 + 5 + 20.5 + 10) << "\n"; // 8
  cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 4
} */

// ===========================Assignment 05==============================

/* #include <iostream>

using namespace std;

int main()
{
  char a = '~';
  char b = '&';
  char c = '%';
  char d = 'A';

  cout << "ASCII Value of ~ Is " << int(a) << endl;
  cout << "ASCII Value of & Is " << int(b) << endl;
  cout << "ASCII Value of % Is " << int(c) << endl;
  cout << "ASCII Value of A Is " << int(d) << endl;
return 0;
}
 */

// ===========================Assignment 06==============================
/*
#include <iostream>

using namespace std;

int main()
{
  int a = 69;
  int b = 108;
  int c = 122;
  int d = 101;
  int e = 114;
  int f = 111;

  cout << "Character Of This ASCII Value " << a << " Is " << char(a) << endl;
  cout << "Character Of This ASCII Value " << b << " Is " << char(b) << endl;
  cout << "Character Of This ASCII Value " << c << " Is " << char(c) << endl;
  cout << "Character Of This ASCII Value " << d << " Is " << char(d) << endl;
  cout << "Character Of This ASCII Value " << e << " Is " << char(e) << endl;
  cout << "Character Of This ASCII Value " << f << " Is " << char(f) << endl;
  cout << char (a) << char (b) << char (c) << char (d) << char (e) << char (f);
  return 0;
} */

// ===========================Assignment 07==============================
/* #include <iostream>

using namespace std;

int main()
{
  int a = 1;
  int b = 13;
  int c = 17;
  int d = 70;
  cout << char(d - a) << char(d + c) << char(d + b);
  return 0;
} */

// ===========================Assignment 08==============================
/* #include <iostream>

using namespace std;

int main()
{
  // Edit Anything Except Values
  short int a = 100;
  long long int b = 15001500; //* I think long int is int itself(the default)
  long double c = 100.54565746; //! I think we can't have 'long long double'
                                
  // Do Not Edit
  cout << sizeof(a) << " Bytes\n"; // 2 Bytes
  cout << sizeof(b) << " Bytes\n"; // 8 Bytes
  cout << sizeof(c) << " Bytes\n"; // 16 Bytes
  return 0;
} */

// ===========================Assignment 09==============================
/*
#include <iostream>

using namespace std;

int main()
{
  // Edit Anything Except Values
  unsigned int a = 100;
  signed int b = -100;
  short c = 100;
  float d = 500.55;

  // Do Not Edit
  cout << a << "\n"; // 100
  cout << b << "\n"; // -100
  cout << c << "\n"; // 100
  cout << d << "\n"; // 500.55
  return 0;
} */

// ===========================Assignment 10==============================
/* #include <iostream>

using namespace std;

int main()
{
  // Add Type Alias Here
  // using lli = long long int; => first method //
  typedef long long int lli; 
  TODO: There is a 3rd method
  // Do Not Edit
  lli num = 150050005; // This Is Long Long Int
  cout << num << "\n"; // 150050005
  return 0;
}
 */

// ===========================Assignment 11==============================

/* #include <iostream>

using namespace std;

int main()
{
  // Do Not Edit Here
  short int a = 100;
  float b = 98.5f;
  double c = 1.7;

  // Edit This Line And Use Type Casting To Get The Output
  cout << int(a + b +c) << "\n"; // 200
  return 0;
} */

// ===========================Assignment 12==============================

#include <iostream>

using namespace std;

int main()
{
    // Do Not Edit Here
  short a = 1000;
  int b = 10000;
  long double c = 5.560000505012;

  // Change ??? To Something Else To Get The Output
  cout << sizeof(c) - sizeof(b) << "\n"; // 12
  cout << sizeof(c) + sizeof(b) << "\n"; // 20
  cout << sizeof(c) * sizeof(a) << "\n"; // 32
  cout << a * int(c) << "\n"; // 5000
  cout << char(sizeof(c) * int(c)) << "\n"; // P
  return 0;
}