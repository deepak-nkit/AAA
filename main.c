#include <stdio.h>
#include <conio.h>

void main()
{
   int i = 1;
   FILE *p;
   p = fopen("result.txt", "w");
   if (p == NULL)
   {
      printf("file not found");
   }
   else
   {
      printf("found file");

      while (i <= 3000)
      {
         fprintf(p, "\n hello world");
         i++;
      }
   }
   fclose(p);
   getch();
}
