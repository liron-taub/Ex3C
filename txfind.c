#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "txfind.h"





int Getline(char s[]){
	
	int chars, i;
	for (i = 0; i < LINE - 1 && (chars = getchar()) != EOF && chars != '\n'; ++i){
		s[i] = chars;
	}
	if (chars == '\n') {
		s[i] = chars;
		++i;
	}
	 s[i] = '\0';
	return i;
}

int getword(char w[]){
	
	int chars, i;
	for (i = 0; i < WORD - 1 && (chars = getchar()) != EOF && chars != '\n'&&chars!= ' '&&chars!= '\t'; ++i){
		w[i] = chars;
	}
	if (chars == '\n'||chars==' '||chars=='\t')
	{
		w[i] = chars;
		++i;
	}
	w[i] = '\0';
    
	return i;
}


int substring( char * str1, char * str2){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i = 0;
	int j = 0;
	int count = 0;

	while (i < len1)
	{
		while (str1[i] == str2[j]&&j<len2)
		{
			count++;

			j++;
			i++;
	    }
		if (count > 0)
		{
			if (count == len2)
			{
				return 1;
			}
		}
		j=0;
		i++;
		count=0;
		
	}

	return 0;

}


int similar (char *s, char *t, int n){
	int sL = strlen(s);
	int tL = strlen(t);
	if (substring(s,t)==1){
	if (sL - tL > n || sL - tL < 0) {
		return 0;
	}
	else{
		return 1;
	}

}
return 0;
}

void print_lines(char* str)
{
	char textLine[LINE];

	while (fgets(textLine,LINE, stdin))
	{
		int printLine = substring(textLine, str);
		if (printLine == 1)
		{
			printf("%s", textLine);
		}
	}

}

int substring2( char * str1, char * str2){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i = 0;
	int j = 0;
	int count = 0;

	while (i < len1)
	{
		while (str1[i] == str2[j]&&j<len2)
		{
			count++;

			j++;
			i++;
	    }
		if (count > 0)
		{
			if (count == len2)
			{
				return 1;
			}
		}
		
		i++;
		
	}

	return 0;

}



int similar2 (char *s, char *t, int n){
	int sL = strlen(s);
	int tL = strlen(t);
	if (substring2(s,t)==1){
	if (sL - tL > n || sL - tL < 0) {
		return 0;
	}
	else{
		return 1;
	}

}
return 0;
}






void print_similar_words(char* str)
{
	char textLine[WORD]; 

	while (fscanf(stdin," %s", textLine)==1)
	{
		int printLine = similar2(textLine, str, 1);
		int printLine2 = similar2(textLine, str, 0);
		if (printLine == 1 || printLine2 == 1)
		{
			printf("%s\n", textLine);
		}
	}
}































