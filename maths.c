/*************************************************************************
*   <math.h>
*   Copyright (C) 2017  Nagesh D. kamble kamblend15.it@coep.ac.in
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>
**************************************************************************/
#include<stdio.h>
#include "maths.h"
#define PI 3.14159265
#define MAX 100



/*_______0_______Mod function____________________________________________________________
__________________________________________________________________________________________*/
double mfmod(double x, double y) {		//checked
	double temp;
	temp = (x / y);
	while(temp >= 1) {
		x = x - y;
		temp--;
	}
	return x;
}

float mfmodf(float x, float y) {		//checked
	float temp;
	temp = (x / y);
	while(temp >= 1) {
		x = x - y;
		temp--;
	}
	return x;
}

long double mfmodl(long double x, long double y) {		//checked
	long double temp;
	temp = (x / y);
	while(temp >= 1) {
		x = x - y;
		temp--;
	}
	return x;
}

/*_______1________min function___________________________________________________________
__________________________________________________________________________________________*/

double min(double x, double y) {
	if (x < y)
		return x;
	else	
		return y;
}

float minf(float x, float y) {
	if (x < y)
		return x;
	else	
		return y;
}

long double minl(long double x, long double y) {
	if (x < y)
		return x;
	else	
		return y;
}
/*_______2_______max function_____________________________________________________________
__________________________________________________________________________________________*/

double max(double x, double y) {
	if(x > y)
		return x;
	else	
		return y;
}

float maxf(float x, float y) {
	if(x > y)
		return x;
	else	
		return y;
}

long double maxl(long double x, long double y) {
	if(x > y)
		return x;
	else	
		return y;
}

/*_______3_______________________________________________________________________________
__________________________________________________________________________________________*/

double mfloor(double x) {			//checked
	if (x > 0)
		return (int)x;
	else 
		return (int)(x-0.9999999999999999);
}

float mfloorf(float x) {			//checked
	if (x > 0)
		return (int)x;
	else 
		return (int)(x-0.9999999999999999);
}

long double mfloorl(long double x) {			//checked
	if (x > 0)
		return (int)x;
	else 
		return (int)(x-0.9999999999999999);
}

/*_______4_______ceil function___________________________________________________________
___________________________________________________________________________________________*/
double mceil(double x) {			//checked
	if (x < 0)
		return (int)x;
	else
		return ((int)x) + 1;
}

float mceilf(float x) {			//checked
	if (x < 0)
		return (int)x;
	else
		return ((int)x) + 1;
}

long double mceill(long double x) {			//checked
	if (x < 0)
		return (int)x;
	else
		return ((int)x) + 1;
}

/* ________5_____Power function to calculate power of number____________ 
   ________________________________________________________________________ */
double power(double x, int y) {			//checked
	double power = 1, number = x;
	int sign = (y > 0 ? 1 : -1);
	if(sign == -1) { 
		y = -y;
	}
	if(x == 0 && y == 0) {
		return 1;
	}
	while(y > 0) {
		if( (y % 3) == 1) {
			power *= number;
		}
		else if((y % 3) == 2) {
			power *= number * number;
		}
		number = number * number * number;
		y = (y / 3);
	}
	if(sign == -1)
	return power = (double) (1.0/(power));
	return (double)power;
}

float powerf(float x, int y) {			//checked
	float power = 1, number = x;
	int sign = (y > 0 ? 1 : -1);
	if(sign == -1) { 
		y = -y;
	}
	if(x == 0 && y == 0) {
		return 1;
	}
	while(y > 0) {
		if( (y % 3) == 1) {
			power *= number;
		}
		else if((y % 3) == 2) {
			power *= number * number;
		}
		number = number * number * number;
		y = (y / 3);
	}
	if(sign == -1)
	return power = (float) (1.0/(power));
	return (float)power;
}

long double powerl(long double x, int y) {			//checked
	long double power = 1, number = x;
	int sign = (y > 0 ? 1 : -1);
	if(sign == -1) { 
		y = -y;
	}
	if(x == 0 && y == 0) {
		return 1;
	}
	while(y > 0) {
		if( (y % 3) == 1) {
			power *= number;
		}
		else if((y % 3) == 2) {
			power *= number * number;
		}
		number = number * number * number;
		y = (y / 3);
	}
	if(sign == -1)
	return power = (long double) (1.0/(power));
	return (long double)power;
}

/*_________6______Exponential function______________________________________________
_____________________________________________________________________________________*/
double exponent(double x) {			//checked
	double exponent = 1;
	double temp = 1;
	int j = 1;
	do {
		temp = (temp * x) / j;
		exponent = exponent + temp;
		j++;
	}while (!(temp >= -0.0001 && temp <= 0.0001));	
	return exponent;
}

float exponentf(float x) {			//checked
	float exponent = 1;
	float temp = 1;
	int j = 1;
	do {
		temp = (temp * x) / j;
		exponent = exponent + temp;
		j++;
	}while (!(temp >= -0.0001 && temp <= 0.0001));	
	return exponent;
}

long double exponentl(long double x) {			//checked
	long double exponent = 1;
	long double temp = 1;
	int j = 1;
	do {
		temp = (temp * x) / j;
		exponent = exponent + temp;
		j++;
	}while (!(temp >= -0.0001 && temp <= 0.0001));	
	return exponent;
}




/*_______7______idexp Function___________________________________________________________
___________________________________________________________________________________________*/
double idexp(double x,int exponent) {		//checked
	double value;
	value = x * power(2,exponent);  //returns the result of multiplying x with raised to the power of exponent (x * 2 ^ exponent)
	return value;
	
}

float idexpf(float x,int exponent) {		//checked
	float value;
	value = x * power(2,exponent);  //returns the result of multiplying x with raised to the power of exponent (x * 2 ^ exponent)
	return value;
	
}	

long double idexpl(long double x,int exponent) {		//checked
	long double value;
	value = x * power(2,exponent);  //returns the result of multiplying x with raised to the power of exponent (x * 2 ^ exponent)
	return value;
	
}		

/*_________8______Sin function by Taylor Series____________________________________
____________________________________________________________________________________*/

double sin(double x) {				//checked
	int j = 2;
	double sin, temp, a = 0;
	if(x < (- 2 * PI)) {
		x = - x;
		a = 1;
	}
	while (x >  2 * PI)
		x = x - ( 2 *PI);
	sin = temp =x;
	do {      
		temp = (-temp) * (x * x) / ((j + 1) * (j));
		sin = sin + temp;	
		j = j + 2;
	}while (!(temp >= -0.000000000000000001 && temp <= 0.000000000000000001));
	if(a == 0)
		return sin;
	else
		return (- sin);
		
	
}

float sinf(float x) {				//checked
	int j = 2;
	float sin, temp, a = 0;
	if(x < (- 2 * PI)) {
		x = - x;
		a = 1;
	}
	while (x >  2 * PI)
		x = x - ( 2 *PI);
	sin = temp =x;
	do {      
		temp = (-temp) * (x * x) / ((j + 1) * (j));
		sin = sin + temp;	
		j = j + 2;
	}while (!(temp >= -0.000000000000000001 && temp <= 0.000000000000000001));
	if(a == 0)
		return sin;
	else
		return (- sin);
		
	
}

long double sinl(long double x) {				//checked
	int j = 2;
	long double sin, temp, a = 0;
	if(x < (- 2 * PI)) {
		x = - x;
		a = 1;
	}
	while (x >  2 * PI)
		x = x - ( 2 *PI);
	sin = temp =x;
	do {      
		temp = (-temp) * (x * x) / ((j + 1) * (j));
		sin = sin + temp;	
		j = j + 2;
	}while (!(temp >= -0.000000000000000001 && temp <= 0.000000000000000001));
	if(a == 0)
		return sin;
	else
		return (- sin);
		
	
}

//_________________Trigonometric Functions__________________//


/*______9________Cos function by Taylor Series______________________________________
_____________________________________________________________________________________*/

double cos(double x) {				//checked
	int j = 1;
	double cos = 1, temp = 1, a = 0;
	if(x < (- 2 * PI)) {
		x = - x;
		a = 1;
	}
	while (x >  2 * PI)
		x = x - ( 2 *PI);
	do {
		temp = (-temp) * (x * x) / ((j + 1) * (j));    
		cos = cos + temp;	
		j = j + 2;
	}while (!(temp >= -0.000000000001 && temp <= 0.000000000001));
	return cos;
		
}

float cosf(float x) {				//checked
	int j = 1;
	float cos = 1, temp = 1, a = 0;
	if(x < (- 2 * PI)) {
		x = - x;
		a = 1;
	}
	while (x >  2 * PI)
		x = x - ( 2 *PI);
	do {
		temp = (-temp) * (x * x) / ((j + 1) * (j));    
		cos = cos + temp;	
		j = j + 2;
	}while (!(temp >= -0.000000000001 && temp <= 0.000000000001));
	return cos;
		
}

long double cosl(long double x) {				//checked
	int j = 1;
	long double cos = 1, temp = 1, a = 0;
	if(x < (- 2 * PI)) {
		x = - x;
		a = 1;
	}
	while (x >  2 * PI)
		x = x - ( 2 *PI);
	do {
		temp = (-temp) * (x * x) / ((j + 1) * (j));    
		cos = cos + temp;	
		j = j + 2;
	}while (!(temp >= -0.000000000001 && temp <= 0.000000000001));
	return cos;
		
}
/*______10_________tan function by Taylor Series_______________________________________
______________________________________________________________________________________*/

double tan(double x) {				//checked
	double tan;
	tan = sin(x) / cos(x);
	return tan;
}

float tanf(float x) {				//checked
	float tan;
	tan = sin(x) / cos(x);
	return tan;
}

long double tanl(long double x) {				//checked
	long double tan;
	tan = sin(x) / cos(x);
	return tan;
}
//---------------------inverse functions--------------------
/*______11________asin using Taylor Series______________________________________________
_______________________________________________________________________________________*/

double asin(double x) {				//checked
	double asin = x, temp = x;
	int j = 1,n = 0;
	while (!(temp >= -0.0000001 && temp <= 0.0000001)) {
		temp = ((temp) * (x * x) * (2 * j - 1) * (2 * j - 1)) / ((2 * j + 1) * (2 * j));
		asin = asin + temp;	
		j++;
	}
	return asin;
}

float asinf(float x) {				//checked
	float asin = x, temp = x;
	int j = 1,n = 0;
	while (!(temp >= -0.0000001 && temp <= 0.0000001)) {
		temp = ((temp) * (x * x) * (2 * j - 1) * (2 * j - 1)) / ((2 * j + 1) * (2 * j));
		asin = asin + temp;	
		j++;
	}
	return asin;
}

long double asinl(long double x) {				//checked
	long double asin = x, temp = x;
	int j = 1,n = 0;
	while (!(temp >= -0.0000001 && temp <= 0.0000001)) {
		temp = ((temp) * (x * x) * (2 * j - 1) * (2 * j - 1)) / ((2 * j + 1) * (2 * j));
		asin = asin + temp;	
		j++;
	}
	return asin;
}

/*______12_______acos using Taylor Series____________________________________________
_____________________________________________________________________________________*/

double acos(double x) {				//checked
	
	double acos;
	acos = (PI / 2) - asin(x);
	return acos;
}

float acosf(float x) {				//checked
	
	float acos;
	acos = (PI / 2) - asin(x);
	return acos;
}

long double acosl(long double x) {				//checked
	
	long double acos;
	acos = (PI / 2) - asin(x);
	return acos;
}

//_________________Hyperbolic Functions______________________//

/*______13________sinh using Taylor Series___________________________________________
_____________________________________________________________________________________*/

double sinh(double x) {				//checked
	int j = 1;
	double sinh = x, temp = x;
	do {
		temp = (temp) * (x * x) / ((2 * j + 1) * (2 * j));           // multiply each term by x^2/((2 * j + 1) * (2 * j))
		sinh = sinh + temp;	
		j++;
	} while (!(temp >= -0.0000000001 && temp <= 0.000000001));
	return sinh;
}

float sinhf(float x) {				//checked
	int j = 1;
	float sinh = x, temp = x;
	do {
		temp = (temp) * (x * x) / ((2 * j + 1) * (2 * j));           // multiply each term by x^2/((2 * j + 1) * (2 * j))
		sinh = sinh + temp;	
		j++;
	} while (!(temp >= -0.0000000001 && temp <= 0.000000001));
	return sinh;
}

long double sinhl(long double x) {				//checked
	int j = 1;
	long double sinh = x, temp = x;
	do {
		temp = (temp) * (x * x) / ((2 * j + 1) * (2 * j));           // multiply each term by x^2/((2 * j + 1) * (2 * j))
		sinh = sinh + temp;	
		j++;
	} while (!(temp >= -0.0000000001 && temp <= 0.000000001));
	return sinh;
}

/*______14_________cosh using Taylor Series___________________________________________
_____________________________________________________________________________________*/

double cosh(double x) {				//checked
	int j = 1;
	double cosh = 1, temp = 1;
	do {
		temp = (temp) * (x * x) / ((2 * j - 1) * (2 * j));                // multiply each term by x^2/ ((2 * j - 1) * (2 * j))
		cosh = cosh + temp;	
		j++;
	} while (!(temp >= -1.00000000001 && temp <= 1.0000000001));
	return cosh;
}

float coshf(float x) {				//checked
	int j = 1;
	float cosh = 1, temp = 1;
	do {
		temp = (temp) * (x * x) / ((2 * j - 1) * (2 * j));                // multiply each term by x^2/ ((2 * j - 1) * (2 * j))
		cosh = cosh + temp;	
		j++;
	} while (!(temp >= -1.00000000001 && temp <= 1.0000000001));
	return cosh;
}

long double coshl(long double x) {				//checked
	int j = 1;
	long double cosh = 1, temp = 1;
	do {
		temp = (temp) * (x * x) / ((2 * j - 1) * (2 * j));                // multiply each term by x^2/ ((2 * j - 1) * (2 * j))
		cosh = cosh + temp;	
		j++;
	} while (!(temp >= -1.00000000001 && temp <= 1.0000000001));
	return cosh;
}

/*______15_________tanh using Taylor Series____________________________________________
______________________________________________________________________________________*/

double tanh(double x) {				//checked
	double tanh;
	tanh =	sinh(x) / cosh(x);
	return tanh;
}

float tanhf(float x) {				//checked
	float tanh;
	tanh =	sinh(x) / cosh(x);
	return tanh;
}

long double tanhl(long double x) {				//checked
	long double tanh;
	tanh =	sinh(x) / cosh(x);
	return tanh;
}

//________________Inverse Functions_________________________//


/*______16_______absolute return value______________________________________________
____________________________________________________________________________________*/

double fabs(double x) {
	if(x < 0)
		return (-x);
	else
		return x;
}

float fabsf(float x) {
	if(x < 0)
		return (-x);
	else
		return x;
}

long double fabsl(long double x) {
	if(x < 0)
		return (-x);
	else
		return x;
}



/*______17_______square root of a number using Newton Raphson Method____________________
________________________________________________________________________________________*/
    
double sqrt(double x) {			//checked
	double x1 = (x * 1.0) / 2;
      	double x2= (x1 + (x / x1)) / 2;
      	do {
        	x1 = x2;
        	x2 = (x1 + (x / x1)) / 2;
      	} while(fabs(x1 - x2) >= 0.0000001);
      	return x2;
}

float sqrtf(float x) {			//checked
	float x1 = (x * 1.0) / 2;
      	float x2= (x1 + (x / x1)) / 2;
      	do {
        	x1 = x2;
        	x2 = (x1 + (x / x1)) / 2;
      	} while(fabs(x1 - x2) >= 0.0000001);
      	return x2;
}

long double sqrtl(long double x) {			//checked
	long double x1 = (x * 1.0) / 2;
      	long double x2= (x1 + (x / x1)) / 2;
      	do {
        	x1 = x2;
        	x2 = (x1 + (x / x1)) / 2;
      	} while(fabs(x1 - x2) >= 0.0000001);
      	return x2;
}

/*_______18________truncate function______________________________________________________
_________________________________________________________________________________________*/

int mtrunc(double x) {				//checked
	return (int)x;							//returns decimal part of the number
}
/*_______19______Factorial using Recursion_______________________________________________
_________________________________________________________________________________________*/

unsigned int mfact(int x) {			//checked
	int a = 1;
	if (x == 0)
		return 1;
	a = x * mfact(x - 1);
	return a;
}

/*_______20_______Round function_________________________________________________________
__________________________________________________________________________________________*/

int mround(double x) {			//checked
    if (x < 0.0)
        return (x - 0.5);
    else
        return (x + 0.5);
}




