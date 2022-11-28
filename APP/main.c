


char* Get_LargestFiveChars(char* arr , int s)
{
	sint8 Local_s8Counter1=0;
		sint8 Local_s8Counter2=0;
		uint8 Local_u8Temp=0;

		for (Local_s8Counter1=0;Local_s8Counter1<7;Local_s8Counter1++)
		{
			for (Local_s8Counter2=Local_s8Counter1+1;Local_s8Counter2<8;Local_s8Counter2++)
			{
				if (arr[Local_s8Counter1]>arr[Local_s8Counter2])
				{
					Local_u8Temp=arr[Local_s8Counter1];
					arr[Local_s8Counter1]=arr[Local_s8Counter2];
					arr[Local_s8Counter2]=Local_u8Temp;
				}
			}
		}

}


int main()
{
	
	char arr[]={'S','A','P','O','N','B','C','O'};
	
	
	while(1)
	{
	}
	
	return 0;
}
