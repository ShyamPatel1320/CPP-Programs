#include<stdio.h>
#include<conio.h>
int main()
{
	int S[5],top=0,ch,val,N,i;
	do
	{
		 printf("STACK OPERATIONS\n");
                printf("1.Push\n");
                printf("2.Pop\n");
                printf("3.Peep\n");
                printf("4.Change\n");
                printf("5.Display\n");
                printf("0.Exit");
                printf("\nEnter your choice:\t");
                scanf("%d",&ch);
                switch(ch)
                {
                	  case 1: 
                                      if(top>=N)
									  { printf("Stack is overloading \n ");
										}  
										else{
											printf("enter value:");
											scanf("%d",&val);
											S[top]=val;
											top=top+1;
										}
                                	    break;
                        case 2:
                                         if(top<0)
									  { printf("Stack is underflow \n ");
										}  
										else{
											printf("delete elements %d:",S[top]);
											top--;
										}
                                        break;
                        case 3:
                        				printf("enter position=");
                        				scanf("%d",&i);
                                         if(top-i+1<0)
									  { printf("Stack is underflow \n ");
										}  
										else{
											val=S[top-i+1];
											printf("value is=%d",val);
										}
                                        break;
                        case 4:
                                        printf("enter position");
                                        scanf("%d",&i);
                                          if(top-i+1<0)
									  { printf("Stack is underflow \n ");
										}  
										else{
											printf("enter value=");
											scanf("%d",&val);
											val=S[top-i+1];
											
										}
                                        break;
                     	case 5:
						 				    if(top<0)
									  { printf("Stack is underflow \n ");
										}  
										else{
											for(i=top;i>=0;i--)
											{
												printf("%d\n",S[i]);
											}
										}		
					 			printf("/n");
					 			break;
					    case 0:
                                        exit(0);
                                        default:
                                        	printf("invalid data/n");
				}
	}while(ch!=0);
	return 0;
}
