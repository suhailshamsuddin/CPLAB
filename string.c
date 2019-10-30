#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i,j,lenp,lens,flag,k;
char str[10],pat[10];
printf("enter string ");
scanf("%s",str);
printf("enter pattern");
scanf("%s",pat);
i=0;
j=0;
lens=strlen(str);
lenp=strlen(pat);
while(i<lens&&j<lenp)
	{
	if(j==0)
		{
		k=i;
		}
	if(str[i]==pat[j])
		{
		i++;
		j++;
		flag=1;
		}
	else
		{
		i=k+1;
		j=0;
		flag=0;
		}
	}
if(flag=1)
	{
	printf("pattern is present");
	}
else
	{
	printf("not present");
	}
i=k+lenp;
while(str[i]!='\0')
	{
	str[k]=str[i];
	k++;
	i++;
	}
str[k]='\0';
printf("\n remaining with out pattern==%s",str);
}

