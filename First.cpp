#include <iostream>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    double a, result_one, result_two;
    cout << "Emput a number - ";
    //Checking input for numbers
    if (!(cin >> a)) 
    {
        cout << "Wrong input!";
        return 0;
    }
    //Calculating for 1st result
    result_one = cos(a) + sin(a) +
        cos(3 * a) + sin(3 * a);
    //Calculating for 2nd result
    result_two = 2 * sqrt(2) * cos(a) * sin(M_PI / 4 + 2 * a);

    //Check difference between 1st and 2nd result
    if (result_one = result_two) 
    {
        cout << result_one << "=" << result_two << endl;
    }
    else
    {
        cout << "nope";
    }

    return 0;
}
