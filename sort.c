#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{

	
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(tab[j] > tab[j+1])
			{	
				int temp = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = temp;
			}
		}	
	}
}

int main()
{
	int a[10];
	int size=10;
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("")
	for(int i = 0; i < size; i++)
        {
                printf("%d ", a[i]);
        }
	printf("\n");
	ft_sort_int_tab(a,size);
	for(int i = 0; i < size; i++)
        {
                printf("%d ", a[i]); 
        }

	return 0;
}
