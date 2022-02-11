#include <stdio.h>
#include <errno.h>
#include <string.h>

// extern int errno ;
/*
   FILE * pf;
   int errnum;
   pf = fopen ("unexist.txt", "rb");
	
   if (pf == NULL) {
   
      errnum = errno;
      fprintf(stderr, "Value of errno: %d\n", errno);
      perror("Error");
      fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
   } else {
   
      fclose (pf);
   }
*/


int main () {

    FILE *file;
    file=fopen("f:\\C\\file_read.exe", "wt");
    while(file==NULL) {
        perror("Error");
    }
    fclose(file);

   return 0;
}