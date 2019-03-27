#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<string.h>
#include "diaryh.h"
void delrecord()
{

                system("cls");

                FILE *fp,*fptr ;

                

                char filename[15],another = 'Y' ,time[10];;
		char fname[60];
                int choice,check;

                printf("\n\n\t\t*************************\n");

                printf("\t\t* WELCOME TO DELETE MENU*");

                printf("\n\t\t*************************\n\n");
		/*
                check = password();

                    if(check==1)

                    {

                        return ;

                    }
		*/
		fp=fopen("dat.txt","r");
		if ( fp == NULL )

                            {

                                printf("\nTHE FILE DOES NOT EXISTS");

                                printf("\nPRESS ANY KEY TO GO BACK.");

                                getch();

               

                            }

		char ch;
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}


                while ( another == 'Y'||another== 'y')

                {

                

                            printf("\n\tENTER THE DATE OF RECORD TO BE DELETED:[dd-mm-yyyy]:");

							scanf("%s",filename);
							sprintf(fname,"%s.txt",filename);
							fp = fopen (fname,"wb") ;

                            if ( fp == NULL )

                            {

                                printf("\nTHE FILE DOES NOT EXISTS");

                                printf("\nPRESS ANY KEY TO GO BACK.");

                                getch();

                                return ;

                            }


                            fclose(fp);

                            remove(fname);
							

                            printf("\nDELETED SUCCESFULLY...");

                            printf("\n\tDO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):");

                            fflush(stdin);

                            scanf("%c",&another);



                          }                 
   

        

                printf("\n\n\tPRESS ANY KEY TO EXIT...");

                getch();

}