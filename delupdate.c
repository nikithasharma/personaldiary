    char ch;
    FILE *fileptr2;
    int delete_line=2, temp = 1;
    ch = getc(fp);
    rewind(fp);
    fileptr2 = fopen("replica.c", "w");
    ch = 'A';
    while (ch != EOF)
    {
        ch = getc(fp);
        //except the line to be deleted
        if (temp != delete_line)
        {
            //copy all lines in file replica.c
            putc(ch, fileptr2);
        }
        if (ch == '\n')
        {
            temp++;
        }
    }
    fclose(fp);
    fclose(fileptr2);
    remove("dat.txt");
    //rename the file replica.c to original name
    rename("replica.c", "dat.txt");
