
char arr[]={'a','t','h','y','r'};


int main()
{
	char i = 0 , j = 0 , temp;

	for(i = 0 ; i < 5-1 ; i++)
	{
		for(j = i+1 ; j<5 ; j++)
		{
			if(arr[j] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	while(1)
	{
	}
	
	return 0;
}