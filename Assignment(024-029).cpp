// ===========================Assignment 01==============================
/* #include <iostream>
using namespace std;

int main()
{
  int num = 3;
  cout << num + num << "\n";                 // 6
  cout << num * num - num << "\n";           // 6
  cout << (num * num) - num << "\n";         // 6
  cout << (num + num + num) - num << "\n";   // 6
  cout << (num / num) * (num + num) << "\n"; // 6
  cout << (num % num) + (num + num) << "\n"; // 6
  cout << (num + num) + (num - num) << "\n"; // 6
  return 0;
}
*/ 
// ===========================Assignment 02==============================

/* #include <iostream>

using namespace std;

int main()
{
  cout << 10 * 20 * 15 * 3 * 190 * 10  % 400 << "\n"; // 0
  return 0;
} */

// ===========================Assignment 03==============================

/* #include <iostream>

using namespace std;

int main()
{
  // Do Not Edit
  int num = 3;

  num += 3;

// Do Not Edit
cout << num << "\n"; // 6
  return 0;
} */

// ===========================Assignment 04==============================

/* #include <iostream>

using namespace std;

int main()
{
  cout << (int(10.5) * 5) + int(40.5 + 10.1) << "\n"; // 100 
  return 0;
} */

// ===========================Assignment 05==============================
/* #include <iostream>

using namespace std;

int main()
{
  // Assign The Values
  char a = 'd';
  char b = '\n';
  char c = 'Z';

  // Do Not Edit
  cout << b * c + a << "\n"; // 1000  //! important note : you don't need int(b).... no answer
  return 0;
} */

// ===========================Assignment 06==============================
/*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/
/* #include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 25;
  int c = 15;

  cout << (a < b) << "\n";          // True
  cout << (c > a) << "\n";          // True
  cout << (a + c == b) << "\n";     // True
  cout << (c >= a) << "\n";         // True
  cout << (c <= b) << "\n";         // True
  cout << (b > a && b > c) << "\n"; // True
  cout << !(a > b) << "\n";         // True
  cout << (a > b || b > a) << "\n"; // True
  return 0;
} */

// ===========================Assignment 07==============================
/* #include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;

  cout << ( (a + b) * (a + b) + (a * a) ) * a << "\n";       // 10000

  // Hint For Help
  cout << 10 + 5 * 20 << "\n";   // 5 * 20 = 100 + 10 = 110 
  cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300
  return 0;
}
 */
// ===========================Assignment 08==============================
/* #include <iostream>

using namespace std;

int main()
{
  int num = 10;
  cout << --num << " | " << num++ << " | " << ++num << "\n"; // 9 | 9 | 11
  cout << num << " | " << ++num << " | " << num << "\n"; // 11 | 12 | 12
  cout << --num << " | " << --num << " | " << --num << "\n"; // 11 | 10 | 9
  return 0;
} */