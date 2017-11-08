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
#ifndef __MATHS_H
#define __MATHS_H


double mfmod(double x, double y);
float mfmodf(float x, float y);
long double mfmodl(long double x, long double y);
double min(double a, double b);
float minf(float x, float y);
long double minl(long double x, long double y);
double max(double a, double b);
float maxf(float x, float y);
long double maxl(long double x, long double y);
double mfloor(double x);
float mfloorf(float x);
long double mfloorl(long double x);
double mceil(double x);
float mceilf(float x);
long double mceill(long double x);
double power(double x, int y);
float powerf(float x, int y);
long double powerl(long double x, int y);
double exponent(double x);
float exponentf(float x);
long double exponentl(long double x);
double sin(double x);
float sinf(float x);
long double sinl(long double x);
double idexp(double x,int exponent);
float idexpf(float x,int exponent);
long double idexpl(long double x,int exponent);
double cos(double x);
float cosf(float x);
long double cosl(long double x);
double tan(double x);
float tanf(float x);
long double tanl(long double x);
double asin(double x);
float asinf(float x);
long double asinl(long double x);
double acos(double x);
float acosf(float x);
long double acosl(long double x);
double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);
double cosh(double x);
float coshf(float x);
long double coshl(long double x);
double tanh(double x);
float tanhf(float x);
long double tanhl(long double x);
double fabs(double x);
float fabsf(float x);
long double fabsl(long double x);
double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);
int mtrunc(double x);
unsigned int mfact(int x);
int mround(double x);
#endif
