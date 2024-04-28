// ===========================Assignment 01==============================
/* #include <iostream>

using namespace std;

int main()
{
  int age = 40;
  int points = 800;
  float rate = 8.5f;

  Your Condition Here
  if (age > 18 && points > 500 && rate > 5)
  cout << "Yes Age > 18 & Points > 500 & Rate > 5";

  Output Needed If All Conditions Is True
  "Yes Age > 18 & Points > 500 & Rate > 5"
  system("pause");
  return 0;
}
 */

// ===========================Assignment 02==============================

// #include <iostream>

// using namespace std;

// int main()
// {
  // Test Case 1
  // int age = 18;
  // int points = 450;

  // Output
  // "No Age Is Not Ok"
  // "No Points Is Not Ok"

  // Test Case 2
  // int age = 20;
  // int points = 450;
  
   // Output
  // "Yes Age Is Ok"
  // "No Points Is Not Ok"

  // Test Case 3
  // int age = 20;
  // int points = 650;

  // Output
  // "Yes Age Is Ok"
  // "Yes Points Is Ok"


//   if (age > 18)
//   {
//     cout << "Yes Age Is Ok\n";
//     if (points > 500)
//     {
//       cout << "Yes Points Is Ok\n";
//     }
//     else {
//       cout << "No Points Is Not Ok\n";
//     }
//   }
//   else {
//     cout << "NO Points Is Not Ok\n";
//     if (points > 500)
//     {
//       cout << "Yes Points Is Ok\n";
//     }
//     else {
//       cout << "No Points Is Not Ok\n";
//     }
//   }
//   system("pause");
//   return 0;
// }

// ===========================Assignment 03==============================

/* #include <iostream>

using namespace std;

int main()
{
  int num;
  cout << "Please Type A Number Between 0 And 150\n";
  cin >> num;

  if (num < 10)
    cout << "00" << num << endl;
  else if (num < 100) 
    cout << "0" << num << endl;
  else 
    cout << num << endl;
  If Number Smaller Than 10 "Example 5" Output Will Be => 005
  If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
  If Number Larger Than 100 "Example 115" Output Will Be => 115
  system("pause");
  return 0;
} */

// ===========================Assignment 04==============================

/* #include <iostream>

using namespace std;

int main()
{
  int num1 = 6;
  int num2 = 5;
  int num3 = 6;
  int num4 = 28;

  Do Not Edit Any Condition

  Condition 1
  if (num1 > num2)
    cout << "Condition 1 Is True\n";
  else
    cout << "Condition 1 Is False\n";

  Condition 2
  if (num1 > num2 && num1 < num4)
    cout << "Condition 2 Is True\n";
  else
    cout << "Condition 2 Is False\n";

  Condition 3
  if (num1 > num2 && num1 == num3)
    cout << "Condition 3 Is True\n";
  else
    cout << "Condition 3 Is False\n";

  Condition 4
  if (num1 + num2 < num4)
    cout << "Condition 4 Is True\n";
  else
    cout << "Condition 4 Is False\n";

  Condition 5
  if (num1 + num3 < num4)
    cout << "Condition 5 Is True\n";
  else
    cout << "Condition 5 Is False\n";

  Condition 6
  if (num1 + num2 + num3 < num4)
    cout << "Condition 6 Is True\n";
  else
    cout << "Condition 6 Is False\n";

  Condition 7
  if (num4 - (num1 + num3) + num2 == 21)
    cout << "Condition 7 Is True\n";
  else
    cout << "Condition 7 Is False\n";

Output Needed
"Condition 1 Is True"
"Condition 2 Is True"
"Condition 3 Is True"
"Condition 4 Is True"
"Condition 5 Is True"
"Condition 6 Is True"
"Condition 7 Is True"
  system("pause");
  return 0;
} */

// ===========================Assignment 05==============================
/* #include <iostream>

using namespace std;

int main()
{
  int by = 82; // by => Birth Year
  int s = 500; // s => Salary
  if (by > 80)
  {
    if (s < 600)
      cout << "Ok\n";
    else
      cout << "High\n";
  }
  else
  {
    cout << "Not Ok\n";
  }

  cout << (by > 80 ? (s < 600 ? "Ok\n" : "High\n") : "Not Ok\n");
  system("pause");
  return 0;
} */

// ===========================Assignment 06==============================

// #include <iostream>

// using namespace std;

// int main()
// {
//   int age = 40;
//   int points = 100;

//   if ( age > 18 && points > 50 && sizeof(age) ==4)
//   {
//     cout << "Age Data Is 4 Bytes\n";
//     cout << "Age Is Ok\n";
//     cout << "Points Is Ok\n";
//   }
 // Output Needed
 // "Age Data Is 4 Bytes"
 // "Age Is Ok"
// "Points Is Ok"
//   system("pause");
//   return 0;
// }

// ===========================Assignment 07==============================

/* #include <iostream>

using namespace std;

int main()
{
  int result = 0;
  int num1, num2, num3, num4;
  cout << "Please Type 4 Numbers In A Row\n";
  cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
  cin >> num1 >> num2 >> num3 >> num4;

  if (num1 % 2 == 0 && num1 < 20)
    result = num1;
  if (num2 % 2 == 0 && num2 < 20)
    result += num2;
  if (num3 % 2 == 0 && num3 < 20)
    result += num3;
  if (num4 % 2 == 0 && num4 < 20)
    result += num4;
  cout << result;
  system("pause"); 
  return 0;
}*/