// ===========================Assignment 01==============================
/* #include <iostream>

using namespace std;

int main()
{
  int year;
  cout << "Please enter a year:";
  cin >> year;

  switch (year)
  {
    case 1982:
      cout << "My Birth Day\n";
      break;
    case 1989:
      cout << "My First Work\n";
      break;
    case 1995:
      cout << "Windows 95\n";
      break;
    case 2000:
      cout << "Windows Millennium\n";
      break;
    case 2002:
      cout << "Created My vBulletin Forum\n";
      break;
    default:
      cout << "No Events in This Year\n";
      break;
  }


  /*
  1982 => "My Birth Day"
  1989 => "My First Work"
  1995 => "Windows 95"
  2000 => "Windows Millennium"
  2002 => "Created My vBulletin Forum"
  Any Other Year => "No Events in This Year"

  system("pause");
  return 0;
} */

// ===========================Assignment 02==============================

/* #include <iostream>
using namespace std;

int main()
{
  int day;
  cout << "Enter Day: ";
  cin >> day;

  switch (day)
  {
  case 1:
  case 2:
  case 3:
    cout << day << " Shop Is Open\n";
    break;
  case 4:
  case 5:
    cout << day << " Shop Is Closed\n";
    break;
  default:
    cout << "Day Is Not Valid\n";
  return 0;
  }
  system("pause");
  return 0;
} */

// ===========================Assignment 03==============================

/* #include <iostream>

using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (num == 10)
  {
    cout << "Case 1";
  }
  else if (num > 19 && num < 21)
  {
    cout << "Case 2";
  }
  else if (num > 29 && num < 33)
  {
    cout << "Case 3";
  }
  else
  {
    cout << "Invalid Number";
  }

  switch (num)
  {
    case 10:
      cout << "Case 1\n";
      break;
    case 20:
      cout << "Case 2\n";
      break;
    case 30:
    case 31:
    case 32:
      cout << "Case 3\n";
      break;
    default:
      cout << "Invalid Number\n";
  }
  system("pause");
  return 0;
} */

