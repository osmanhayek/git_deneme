#include<unistd.h>
char *ft_strrev(char *str){
	if(str){
	int j=0;
	while(str[j])j++;
	j--;
	int i=0;
	while(i<j){
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	}
	return str;
}
