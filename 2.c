#include<stdio.h>
#include<conio.h>

main(){

    int choice,english,hindi,gujarati;
    clrscr();
    printf("Press 1 for English...\n");
    printf("Press 2 for Hindi...\n");
    printf("Press 3 for Gujarati...\n");

    printf("enter your choice:-"); 
	scanf("%d",&choice);
    
	switch(choice){
		case 1:
			printf("Press 1 for Internet Recharge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 for Special Recharge\n");
			scanf("%d",&english);
	switch(english){
			case 1:
				printf("You have successfully done Internet Recharge.\n");
				break;
			case 2:
				printf("You have successfully done Top-up Recharge.\n");
				break;
			case 3:
				printf("You have successfully done Special Recharge.\n");
				break;
			}break;
	}
	switch(choice){
		case 2:
			printf("Press 1 for Internet Recharge ke liye 1 dabaiye\n");
			printf("Press 2 for Top-up Recharge ke liye 2 dabaiye\n");
			printf("Press 3 for Special Recharge ke liye 3 dabaiye\n");
			scanf("%d",&hindi);
	switch(hindi){
			case 1:
				printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
				break;
			case 2:
				printf("Aapne safaltapurvak op-up Recharge kar liya he.\n");
				break;
			case 3:
				printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
				break;
			}break;
	}
	switch(choice){
		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");
			scanf("%d",&gujarati);
	switch(gujarati){
			case 1:
				printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
				break;
			case 2:
				printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
				break;
			case 3:
				printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
				break;
			}break;		
	}
	getch();
    }
