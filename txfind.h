#include <stdio.h>
#ifndef txfind
#define txfind
#define WORD 30
#define LINE 256



int Getline(char s[]);

int getword(char w[]);

int substring( char * str1, char * str2);

int similar (char *s, char *t, int n);

void print_lines(char* str);

int substring2( char * str1, char * str2);

int similar2(char *s, char *t, int n);

void print_similar_words(char* str);


#endif