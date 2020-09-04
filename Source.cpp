#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    double a, zr, result_one, result_two;
    cout << "Emput a number - ";
    //Checking input for numbers
    while (!(cin >> a)) 
    {
        cout << "Wrong input";
        return 0;
    }
    //Calculating denoninator
    zr = 1 - sin(3 * a - M_PI);
    if (zr == 0)
    {
        cout << "Wrong input";
    }
    //Calculating for 1st result
    result_one = sin(M_PI / 2 + 3 * a) / zr;
    //Calculating for 2nd result
    result_two = cos(5 / 4 * M_PI + 3 / 2 * a) / sin(5 / 4 * M_PI + 3 / 2 * a);
    //Put the results to console
    cout << "First result = " << result_one << endl
        << "Second result = " << result_two;
    return 0; 
}