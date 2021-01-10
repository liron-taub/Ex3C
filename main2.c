#include <stdio.h>
#include <stdlib.h>
#include "txfind.h"
#include <string.h>

int main()
{
	  char firstLine[LINE]; 
	  char word[LINE]; 
	  int temp=0;
	  char aOrb; 
	  fgets(firstLine, LINE , stdin);//read the first line from the txt 
	for(int i=0;i<LINE;i++) 
	{
		if(firstLine[i]==' ') 
		{
			temp=i; 
			i=LINE; 
		}
	}
	strncpy(word,firstLine,temp);//save the first word that we want to search
	aOrb=firstLine[temp+1];
	
	if(aOrb-97==0)
	{
		print_lines(word);
	}

	if(aOrb-98==0)
	{
		print_similar_words(word);

	}
}