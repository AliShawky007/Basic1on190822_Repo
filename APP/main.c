
#include "STD_TYPES.h"
#include "util/delay.h"

#include "DIO_interface.h"
#include "PORT_interface.h"

#include "CLCD_interface.h"
void Get_LargestFiveChars(char* arr , int s)
{
	int i;
	int j;
	int temp;
	int sorting_done = 1;
	for (i = 0; i < s-1; ++i)
	{
		sorting_done = 1;
		for (j = 0; j < s - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				sorting_done  = 0;
			}
		}
		if(sorting_done == 1) break;
	}

	return;
}


int main()
{
	
	char arr[]={'S','A','P','O','N','B','C','O'};
	Get_LargestFiveChars(arr, 8);
	PORT_voidInit();
	CLCD_voidInit();
	for (counter = 0; counter < 5; counter++)
	{
		CLCD_voidSendData(Arr[counter]);
	}
	
	while(1)
	{
	}
	
	return 0;
}