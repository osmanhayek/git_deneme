#include<unistd.h>
void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}	
