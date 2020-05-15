#include <stdio.h>
#include<string.h>


int main()
{
	int i,key;
	char str[100];
	printf("enter the string:\t");
	scanf("%s",str);
	
		for(i=0; i<strlen(str); i++)
		{
		if(str[i]==' ') {	}	
		
		else
		{
			if(str[i]>='x')
			{
				str[i]=str[i]-26;
			}
			str[i]=str[i]+3;
		}
		}
		printf("encrypted string: %s",str);
return 0;	  
}




