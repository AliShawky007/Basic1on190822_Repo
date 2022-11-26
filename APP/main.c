
#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "PORT_interface.h"

#include "CLCD_interface.h"
/*gfgfg*/
char* Get_LargestFiveChars(char* arr , int s)
{
	
	sint8 Local_s8Counter1=0;
	sint8 Local_s8Counter2=0;
	uint8 Local_u8Temp=0;

	for (Local_s8Counter1=0;Local_s8Counter1<(s-1);Local_s8Counter1++)
	{
		for (Local_s8Counter2=Local_s8Counter1+1;Local_s8Counter2<s;Local_s8Counter2++)
		{
			if (Local_u8Array[Local_s8Counter1]>Local_u8Array[Local_s8Counter2])
			{
				Local_u8Temp=Local_u8Array[Local_s8Counter1];
				Local_u8Array[Local_s8Counter1]=Local_u8Array[Local_s8Counter2];
				Local_u8Array[Local_s8Counter2]=Local_u8Temp;

			}
		}

	}
}


int main()
{
	uint8 Local_u8Array[8]={'S','A','P','O','N','B','C','O'};
	sint8 Local_s8Counter1=0;
	sint8 Local_s8Counter2=0;
	uint8 Local_u8Temp=0;


	char arr[]={'S','A','P','O','N','B','C','O'};
	
	Get_LargestFiveChars(arr,8);
	
	CLCD_voidGoToXY(16,0);
	for(Local_s8Counter1=16;Local_s8Counter1>=11;Local_s8Counter1--)
	{
		CLCD_voidGoToXY(Local_s8Counter1,0);
		CLCD_voidSendData(Local_u8Array[Local_s8Counter1-8]);
	}

	while(1)
	{
	}
	
}
