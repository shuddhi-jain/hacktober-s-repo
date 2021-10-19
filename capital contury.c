#include<stdio.h>
#include<string.h>
int compare(char a[10],char b[10])
{
	int f=0,k=0;
	while(a[k]!='\0'&&b[k]!='\0')
	{
		if(a[k]!=b[k])
		{
		f=1;
		break;}
		k++;
	}
	return f;
}
int main()
{
	int i,j,c=0;
	char s[10],d[10];
	printf("To end the program enter END\n");
	for(i=0;i<10;i++)
	{
		puts("enter country\n");
		gets(s);
		for(j=0;j<strlen(s);j++)
		s[j]=toupper(s[j]);
		if(s[0]=='E')
		break;
				if(compare(s,"INDIA")==0)
			printf("capital=New Delhi\n");
			 else if(compare(s,"BANGLADESH")==0)
		    printf("capital=Dhaka\n");
			else	if(compare(s,"SRI LNAKA")==0)
			printf("capital=Colombo\n");
			else if(compare(s,"ENGLAND")==0)
			printf("capital=London\n");
		
			else if(compare(s,"GERMANY")==0)
			printf("capital=Berlin\n");
	
			else
			printf("Don't Know");
		}
	}

