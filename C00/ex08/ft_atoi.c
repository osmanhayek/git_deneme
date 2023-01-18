#include<unistd.h>
int	ft_atoi(char *str)
{
	int n;
	int i;

	i = 0;
	n = 0;
	if (str)
	{
		if (str[0] == '-' && str[1] >= '0' && str[1] <= '9')
		{
			n = ft_atoi(++str);
			return (n * -1);
		}
		else if (str[0] != '-')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				n = (n * 10) + (str[i] - '0');
				++i;
			}
		}
	}
	return (n);
}	

