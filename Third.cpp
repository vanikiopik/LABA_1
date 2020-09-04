#include <iostream>
#include <stdio.h>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() 
{
	double pr, x = -4.5, y = 0.75 * pow(10, -4), z = 0.845 * pow(10, 2), result, True_result = -55.6848;
	cout << "Counting..." << endl;
	
	//Counting the result
	result = cbrt(8 + pow(fabs(x - y), 2) + 1) /
			 (pow(x, 2) + pow(y, 2) + 2) -
			 exp(fabs(x - y)) *
			 pow(pow(tan(z), 2) + 1, x);

	//Taking the 5 seconds for anwsers
	Sleep(5000);
	cout << result << " = " << True_result;


			
				
	return 0;
}