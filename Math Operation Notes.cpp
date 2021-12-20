// 1-2 Notes
//   I CAN explain when division doesand does not produce a decimal
//   I CAN format decimal numbers
//   I CAN use C++ math functions to solve problems

#include <iostream>

using namespace std;


int main()
{
    int a = 3, b = 2;
    double c = 3.0, d = 2.0;

    cout << c / d << endl; //double / double
    cout << a / d << endl; //int / double
    cout << c / b << endl; //double / int
    cout << a / b << endl; //int / int

    //Division produces a decimal UNLESS BOTH the numerator
    //and denominator ARE INTs
   
    //Formatting decimal output
    double pi = 3.14159;

   //Math functions
    cout << "Round PI up: " << pi << endl;
    cout << "Round PI down: " << pi << endl;
    cout << "Round PI to nearest integer: " << pi << endl;
    cout << "pi ^ 2: " << pi << endl;
    cout << "Absolute value of pi: " << pi << endl;

    //... There are many more (https://www.w3schools.com/cpp/cpp_math.asp)

    //Rounding
    //2 places
    cout << "PI, 2 places " << pi << endl;
    //3 places
    cout << "PI, 3 places " << pi  << endl;

    system("pause");
}

