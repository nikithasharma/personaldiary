#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<string.h>
#include "diaryh.h"
#define BUFFER_SIZE 1000
void delrecord()
{

                system("cls");

                FILE *fp,*fptr ;

                

                char filename[15],another = 'Y' ,time[10];;
		char fname[60];
                int choice,check;
		printf("\t\t* WELCOME TO DELETE MENU*\n");

                
		
		fp=fopen("dat.txt","r");
		if ( fp == NULL )

                            {

                                printf("\nTHE FILE DOES NOT EXISTS");

                                printf("\nPRESS ANY KEY TO GO BACK.");

                                getch();

               

                            }

		char ch;
		int i=1;
		
		
		while((ch=fgetc(fp))!=EOF)
		{
			
			if (ch=='\n')
			{
				printf("\n %d.",i);
				i++;
			}
			printf("%c",ch);	
		}
		int sl;

                while ( another == 'Y'||another== 'y')

                {

                

                            printf("\n\tENTER THE SL.NO AND DATE OF RECORD TO BE DELETED :[dd-mm-yyyy]:");
							

							scanf("%d %s",sl,filename);
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
			
			    //to remove date from dat.txt
				
			    

			   
			   
                           

                          
                             FILE *srcFile;
                             FILE *tempFile;  

                            srcFile  = fopen("dat.txt", "r");
                            tempFile = fopen("delete-line.tmp", "w");


                           /* Exit if file not opened successfully */
                           if (srcFile == NULL || tempFile == NULL)
                           {
                                    printf("Unable to open file. file does not exist \n");
                                    
                           }




 
                                // Move src file pointer to beginning
                                rewind(srcFile);

                               // Delete given line from file.
                               deleteline(srcFile, tempFile, sl);


                                /* Close all open files */
                                fclose(srcFile);
                                fclose(tempFile);


                               /* Delete src file and rename temp file as src */
                               remove("dat.txt");
                               rename("delete-line.tmp", "dat.txt");


   
  
                               fclose(srcFile);

                               
                             


 

void deleteline(FILE *srcFile, FILE *tempFile,int sl)
{
    char buffer[BUFFER_SIZE];
    int count = 1;

    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        /* If current line is not the line user wanted to remove */
        if (sl != count)
            fputs(buffer, tempFile);

        count++;
    }
}
							

                            printf("\nDELETED SUCCESFULLY...");

                            printf("\n\tDO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):");

                            fflush(stdin);

                            scanf("%c",&another);



                          }                 
   

        

                printf("\n\n\tPRESS ANY KEY TO EXIT...");

                getch();

}