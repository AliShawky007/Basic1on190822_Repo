


char* Get_LargestFiveChars(char* arr , int s)
{
	//todo
	int i=0;
	int j=0
    int temp=0;

		for (i=0;i<7;i++)
		{
			for (j=i+1;j<8;j++)
			{
				if (arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;

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