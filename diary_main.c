#include <stdio.h>
#include <stdlib.h>
void addrecord();
void viewrecord();
void editrecord();
void delrecord();
void change();
int main()
{
	int a;
	char name[100];
	char pass[100];
	char word[100];
	int b;
	printf("\n\t*************************************\n");
	printf("\tHey....!!!!\nWelcome to personal dairy management\n");
	printf("\n\t*************************************\n");
	printf("Add account\t[1]:\n");
	scanf("%d",&a);
	while(a==1)
	{
		printf("Enter your name:\n");
		scanf("%s",name);
		printf("Enter password:\n");
		scanf("%s",pass);
		//printf("Confirm Password\n");
		//scanf("%s",word);
	
		if (pass==word)
		{
			printf("******MAIN MENU*******\n");
			printf("Add records\t[1]\n");
			printf("View records\t[2]\n");
			printf("Edit record\t[3]\n");
			printf("delete record\t[4]\n");
			printf("Change password\t[5]\n");
			printf("Exit\t[6]");
			printf("Enter your choice:");
			scanf("%d",&b);
		}
		
		switch(b)
		{
			case 1:
				addrecord();
				break;
			case 2:
				viewrecord();
				break;
			case 3:
				editrecord();
				break;
			case 4:
				delrecord();
				break;
			case 5:
				change();
				break;
			case 6:
				printf("\n\n\n\tThankyou for using this software\n\n");
				getchar();
				//exit(0);
			default:
				printf("\nYOU HAVE ENTERED WRONG CHOICE....");
				printf("\nPRESS ANY KEY TO TRY AGAIN");
				getchar();
				break;
		}
	
	}
	
}
		
	
	