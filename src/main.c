/*
 ============================================================================
 Name        : cal_cav.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "file.h"
#include "cal.h"

int main(void) {
	char *file_path = "./cal_test.csv";
	FILE *f = open_rfile(file_path);

	char write_str[1000] = "";
	char *write_str_ptr = write_str;
	double val1 = 0, val2 = 0;
	char opr = 'a';
	double res = 0;
	char line[100];
	while( read_data(f, &val1, &val2, &opr) == true){
		res = cal(val1, val2, opr );
		sprintf(line, "%.2f,%c,%.2f,=,%.2f\n" ,val1, opr, val2, res);
		strcat(write_str,line);
	}
	close_file(f);

	f = open_wfile(file_path);

	write_file(f, write_str_ptr);

	close_file(f);

	return EXIT_SUCCESS;
}
