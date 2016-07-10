#include <stdio.h>


void scan ()
{
  FILE * pFile;
  int c;
  int n = 0;
  pFile=fopen ("LUL.txt","r");


  if (pFile==NULL) perror ("you're actually so stupid");
  else
  {
    scan:
      c = fgetc (pFile);
      if (c == '7') tokenize();

    if(c!=EOF)
        goto scan;
    
    fclose (pFile);
  }
}
