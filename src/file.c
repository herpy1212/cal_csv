/*
 * file.c
 *
 *  Created on: 2021¦~7¤ë20¤é
 *      Author: herpy
 */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "type.h"

FILE * open_rfile(char *file_path){
	FILE *f = fopen(file_path, "r");
	if(f)
		return f;
	else
		return NULL;
}

FILE * open_wfile(char *file_path){
	FILE *f = fopen(file_path, "w");
	if(f)
		return f;
	else
		return NULL;
}

bool read_data(FILE *f, double *val1, double *val2, char *operator){
	char tmp[80];
	char * token;
	int i = 0;
	if(fgets(tmp, 80, f)){
		token = strtok(tmp,",");
		while(token)
		{
			switch(i){
				case 0:
					*val1 = atof(token);
					break;
				case 2:
					*val2 = atof(token);
					break;
				case 1:
					*operator = token[0];
					break;
			}
			token = strtok(NULL ,",");
			i++;
		}

		return true;
	}else{
		return false;
	}
}

void write_file(FILE *f, char *write_string){
	fprintf(f, "%s", write_string);
}

void close_file(FILE *f){
	fclose(f);
}
