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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include "maths.h"

int main(int argc, char *argv[]) {
	FILE *fp;
	char  t_fun[128];
	double d, res, x, y, exp;
	int ch; 
	fp = fopen(argv[1], "r");
	if (fp == NULL) { 
		perror ("error opening file");
		exit(errno);
	}
	while(!feof(fp)){
		fscanf(fp,"%d",&ch);
		switch(ch){
			case 0: fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&y);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = min(x,y);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
			
			case 1:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&y);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = mfmod(x,y);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
			case 2:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&y);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = max(x,y);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
			
			case 3: 
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = mfloor(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
			case 4: 
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = mceil(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 5:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&y);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = power(x,y);
				printf("\tExpected %lf \tResult %lf \n",exp, res);					
				ch = -1;				
				break;
				
				
			case 6:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = exponent(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 7:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&y);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = idexp(x,y);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 8:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = sin(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;
				break;
				
				
			case 9:	
			        fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = cos(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 10:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = tan(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
			case 11:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = asin(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 12:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = acos(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 13:	
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = sinh(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				//......................
				
			case 14:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = cosh(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 15:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = tanh(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 16:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = fabs(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 17:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = sqrt(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
			
				
			case 18:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = mtrunc(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 19:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = mfact(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
				
				
			case 20:
				fscanf(fp,"%s",t_fun);
				fscanf(fp,"%lf",&x);
				fscanf(fp,"%lf",&exp);				
				printf("\t%s ",t_fun);
				res = mround(x);
				printf("\tExpected %lf \tResult %lf \n",exp, res);
				ch = -1;				
				break;
			
			
			default:
				exit(0);
		}
	}
return 0;
}
