#include <stdio.h>

int *bubblesort(int *arr, int size)
{
	int i = 0;
	int j;
	int temp;

	while(i < size - 1) 
	{
		j = 0;
		while(j < size -1)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}


int main()
{
	int arr[7] = {5, 2, 10, 1, 3, 6, 7};
	bubblesort(arr, 7);

	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;	
}
