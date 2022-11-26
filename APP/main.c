


char* Get_LargestFiveChars(char* arr , int s)
{
	//todo
	uint8 i ,index,j,sort_complet=1,temp=0;
	index=size;
	for (i=0;i<size-1;i++)
	{

		for (j=0;j<index-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				sort_complet=0;
			}
		}
		index--;
		if (sort_complet==1)
		{
			break;
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