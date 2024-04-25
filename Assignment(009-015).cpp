//1st assignment
/* #include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
  int age = 40;
  int period = 10;

  // Do Not Edit The Next 2 Lines
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";

  // Add The Third Line Below
  cout << "After " << period <<" Years My Age Will Be: " << age + period;
  return 0;
} */

//2nd assignment
// #include <iostream>
// using namespace std;

// int main()
// {
//   // Write Your One Line Code Here
//   int a, b, c;
//   // Do Not Edit Below
//   a = 10, b = 20, c = 70;
//   cout << "Sum Of All Number Is: " << a + b + c;
//   return 0;
// }

//3rd assignment
/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Invalid ] => u can't start with number
  __name      [ valid ] => Bad Practice]
  name@name   [ invalid ] => contains unallowed symbol
  name10name  [ valid ] => Bad Practice ] 
  name!name   [ invalid ] => contains unallowed symbol
  first_NAME  [ valid ] => Bad Practice ] 
  first_name  [ valid ] => Bad Practice ] 
  firstName   [ valid ] => Good Practice ] 
  first name  [ invalid ] => contains whitespace
  fn          [ valid ] => Bad Practice ] 
  public      [ invalid ] => reserved by cpp
  Public      [ valid ] => Good Practice ] 
*/

//4th assignment
// #include <iostream>
// using namespace std;

// int main()
// {
//   // Write my_text Variable Content Here
//   string my_text = "============\n== Elzero ==\n============";

//   // Do Not Edit Below
//   cout << my_text;
//   return 0;
// }
//! i learned that we can make a string variable with the data type "string"
//5th assignment
// #include <iostream>
// using namespace std;

// int main()
// {
//   // Do Not Edit Below
//   int a, b, c = 100;

//   // Add Your Code Here
//   a = b = 100;

//   // Do Not Edit Below
//   cout << a + b + c; // 300
//   return 0;
// }

//6th assignment 

// #include <iostream>
// using namespace std;

// int main()
// {
//   // Do Not Edit Below
//   int a = 210, b = -50, c = -40;

//   // Write Your cout Code Here
//   cout << a - (b + c);
//   return 0;
// }
//! I learned that why can use bracket and algebra
// 7th assignment

// #include <iostream>
// using namespace std;

// int num = 100;

// int read()
// {
//   int num = 100;
//   cout << num;
//   return 0;
// }

// int play()
// {
//   int num = 200;
//   read();
//   return 0;
// }

// int main()
// {
//   play();
//   return 0;
// }

//! i learned that what cause error of two similar var is if they are global or in the same fun

//8th Assignment
// #include <iostream>
// using namespace std;
// int main()
// {
//   // Edit Here To Fix The Error
//   int current_year;
//   int birth_year;

//   // Do Not Edit Here
//   current_year = 2022;
//   birth_year = 1982;
//   int age_in_years = current_year - birth_year;
//   cout << age_in_years;
//   return 0;
// }


//9th Assignment

// #include <iostream>
// using namespace std;

// int main()
// {
//   // Write Your Code Here
//     int Num;
//     cout << "Enter a number: ";
//     cin >> Num;
//     cout << Num * Num << "\n";
//     system("pause");
//   // Num 10
//   // Needed Output 100 [10 * 10]
//   return 0;
// }

// 10th Assignment
#include <iostream>
using namespace std;

// int main()
// {
//   // Write Your Code Here
//     int firstNumber , secondNumber;
//     cout<< "Enter the first number: ";
//     cin >> firstNumber;
//     cout<< "Enter the second number: ";
//     cin >> secondNumber;
//     cout << "The product is: " << firstNumber * secondNumber <<"\n";
//     system("pause");
//   // Number One => 10
//   // Number Two => 100
//   // Needed Output 1000 [10 * 100]
//   return 0;
// }

// 12th Assignment

#include <iostream>
using namespace std;

int main()
{
  cout << "Bello\rHello Elzeroo\b";
  cout << " Web Schoolll\b\b";
  cout << " I Love Programming";
  cout << " Too Much";
  cout << " Specially C++";
  system("pause");
	return 0;
}

// Needed Output
// "Hello Elzero Web School I Love Programming Too Much Specially C++"