#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
	int c=0,i=0,k,j,n,d=0,x=0;
	char ch,ask[200],file[9999];
	printf("Which word do you want to count in the file?\n");
	gets(ask);
	n=strlen(ask);
	f1=fopen("C:\\Users\\user\\Documents\\ABC.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		file[i]=ch;
		i++;
	}
	for(j=0;j<i;j++)
	{
		if(file[j]==' ' || file[j]=='.' || j==0 || file[j]==',' || file[j]=='!' || file[j]=='"' || file[j]=='\n' || file[j]=='\0')
		{
			for(k=0;k<n;k++)
			{
				if(ask[k]==file[j])
				{
					j++;
					d=1;
				}
				else if(ask[k]==file[j+1])
				{
					j++;
					d=1;
				}
				else
				{
					j=j-k;
					d=0;
					break;
				}
			}
			if(d==1 && (file[j+1]==EOF || file[j+1]=='\n' || file[j+1]==' ' || file[j+1]=='.' || j==n || file[j+1]==',' || file[j+1]=='!' || file[j+1]=='"' || file[j]=='\0'))
			{
				c++;
				d=0;
			}
		}
	}
	fclose(f1);
	if(c==1)
	{
		printf("The word %s in the designated file occurs %d time",ask,c);
	}
	else
	{
		printf("The word %s in the designated file occurs %d times",ask,c);
	}
}
