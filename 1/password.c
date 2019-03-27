    #include <stdio.h>
    #include <conio.h>
    #include <string.h>
    char word[10];
	int i;
	word="password";
	void change()
	{
		char pass[10];
		printf("Enter old password:\n");
		fflush(stdin);
		for(int i=0;i<8;i++)
		{
			pass[i]=getch();
			printf("*");   	
		}
		pass[i]='\0';
		if(!strcmp(pass,word))
		{
			printf("Enter new password:\n");
			fflush(stdin);
			for(int i=0;i<8;i++)
			{
				word[i]=getch();
				printf("*");   	
			}
		}
	}
    int login(char *name, char *pass)
    {
     if(!strcmp(name,"user") && !strcmp(pass,"password"))
     {
		return 0;
     }
	 else
     {
		return 1;
     }
    }
