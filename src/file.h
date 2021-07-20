/*
 * file.h
 *
 *  Created on: 2021¦~7¤ë20¤é
 *      Author: herpy
 */

#ifndef FILE_H_
#define FILE_H_
#include <stdio.h>
#include "type.h"
FILE * open_rfile(char *);
FILE * open_wfile(char *);
bool read_data(FILE *, double *, double *, char *);
void write_file(FILE *, char*);
void close_file(FILE *);

#endif /* FILE_H_ */
