#include <stdio.h>

void sorting(int arr[], int n)
{
	int	i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {9, 5, 4, 10, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	sorting(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return (0);
}
