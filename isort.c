#include "isort.h"
#include <stdio.h>





 void shift_element(int* arr, int i){
 	
 	while(i>0){
 		*(arr+i)=*(arr+i-1);
 		i--;
 	}
}



void insertion_sort(int* arr, int len){

	for (int i = 1; i < len; i++)
	{
		int temp = *(arr+i);
		int j = i-1;
		if(*(arr+i) < *(arr+j)){
			shift_element(arr+j,1);
				*(arr+j)=temp;
				i=0;
			}
		}

}



























































