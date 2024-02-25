#include<stdio.h>
#include<string.h>
int main()
{
    int i,hrs=0;
    char a[100];
    gets(a);
    if(a[8]=='P')
    {
       if(a[0]=='1' && a[1]=='2')
       {

       }
       else
       {
           hrs=((a[0]-48)*10 + a[1]-48); // Playing with ASCII values..
           hrs=hrs+12;
           a[0]=(hrs / 10)+48;
           a[1]=(hrs % 10)+48;
       }
    }
    else
    {
        if(a[0]=='1' && a[1]=='2')
       {
           hrs=((a[0]-48)*10 + a[1]-48);
           hrs=hrs-12;
           a[0]=(hrs / 10) +48;
           a[1]=(hrs % 10)+48;
       }
       
    }
    for(i=0;i<8;i++)
    {
        printf("%c",a[i]);
    }
}
