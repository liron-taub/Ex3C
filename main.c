// #include <stdio.h>
// #include "isort.h"


// int main(){
// 	int arr[sizearray];
// 	for (int i = 0; i < sizearray; ++i)
// 	{
// 		scanf("%d", &*(arr+i));
// 	}
// 		insertion_sort(arr,sizearray);
// 		for (int i = 0; i < sizearray; ++i)
// 		{
// 			printf("%d,",*(arr+i));
// 		}

// 		return 0;
// }
#include <stdio.h>
#include "isort.h"

int main()
{
	int arr[SIZEARRAY];
	for (int i = 0; i < SIZEARRAY; i++)
	{
		
		scanf("%d", &*(arr+i));
	}
	insertion_sort(arr, SIZEARRAY);
	for (int i = 0; i < SIZEARRAY; i++)
	{
		if (i < SIZEARRAY - 1)
		{
			printf("%d,", *(arr+i));
		}
		else
		{
			printf("%d", *(arr+i));
		}
	}


	return 0;
}













// 	