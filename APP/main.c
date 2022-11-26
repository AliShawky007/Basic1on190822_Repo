


void main (void)
{
   PORT_voidInit();
   CLCD_voidInit();


    uint8 Local_u8Array[8]={'S','A','P','O','N','B','C','O'};
   	sint8 Local_s8Counter1=0;
   	sint8 Local_s8Counter2=0;
   	uint8 Local_u8Temp=0;

   	for (Local_s8Counter1=0;Local_s8Counter1<7;Local_s8Counter1++)
   	{
   		for (Local_s8Counter2=Local_s8Counter1+1;Local_s8Counter2<8;Local_s8Counter2++)
   		{
   			if (Local_u8Array[Local_s8Counter1]>Local_u8Array[Local_s8Counter2])
   			{
   				Local_u8Temp=Local_u8Array[Local_s8Counter1];
   				Local_u8Array[Local_s8Counter1]=Local_u8Array[Local_s8Counter2];
   				Local_u8Array[Local_s8Counter2]=Local_u8Temp;

   			}
   		}

   	}


   	CLCD_voidGoToXY(16,0);
   	for(Local_s8Counter1=16;Local_s8Counter1>=11;Local_s8Counter1--)
   	{
   		CLCD_voidGoToXY(Local_s8Counter1,1);
   		CLCD_voidSendData(Local_u8Array[Local_s8Counter1-8]);
   	}






	while(1)
	{



	}
}
