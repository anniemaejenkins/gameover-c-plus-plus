// Beginning C++ Game Programming practice

// #include <iostream>
//
// int main()
// {
//   std::cout << "Game Over!" << std::endl;
//   return 0;
// }


// Demonstrate a using directive

// #include <iostream>
// using namespace std;
//
// int main()
// {
//   cout << "Game Over!" << endl;
//   return 0;
// }
// adding the using namespace std; keeps you from having to type the std:: prefix


//  Demonstrate using declarations

#include <iostream>
using std::cout;
using std::endl;

int main()
{
  cout << "Game Over!" << endl;
  return 0;
}

// Able to access which elements you want from the std namespace and clarifies which elements you plan to use
