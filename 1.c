#include<stdio.h>
#include<conio.h>
main()
{ 
  int a,b,c,d;
  clrscr();
     
     printf("enter value A:");
     scanf("%d",&a);
	 printf("enter value B:");
     scanf("%d",&b);
     printf("enter value C:");
     scanf("%d",&c);
     printf("enter value D:");
     scanf("%d",&d);
     
     
	 (a>b)?	(a>c)?(a>d)?
	                   :printf("a is big") 
				 :printf("c is big")
          :(b>c)?(b>d)?printf("b is big")
			          :printf("d is big")
				:(c>d)?printf("c is big")
				      :printf("d is big");   	
				      
	getch();			      
}
