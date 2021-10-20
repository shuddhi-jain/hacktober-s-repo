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
		puts("Enter Country Name\n");
		gets(s);
		for(j=0;j<strlen(s);j++)
		s[j]=toupper(s[j]);
		
		        if(compare(s,"INDIA")==0){
			printf("Capital=New Delhi\n");}
			
			else if(compare(s,"BANGLADESH")==0){
		        printf("Capital=Dhaka\n");}
		    
			else if(compare(s,"SRI LANKA")==0){
			printf("Capital=Colombo\n");}
			
			else if(compare(s,"ENGLAND")==0){
			printf("Capital=London\n");}
		
			else if(compare(s,"UNITED STATES AMERICA")==0){
			printf("Capital=Washington D.C\n");}
	
			else{
			printf("Don't Know\n");}
		}
	}

