/*
 * cal.c
 *
 *  Created on: 2021¦~7¤ë20¤é
 *      Author: herpy
 */


double cal(double val1 ,double val2 , char operator){
	switch(operator){
		case '+':
			return val1+val2;
			break;
		case '-':
			return val1-val2;
			break;
		case '*':
			return val1*val2;
			break;
		case '/':
			return val1/val2;
			break;
	}
	return 0;
}
