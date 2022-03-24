#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{

   char buff[1024];

   memset( buff, '\0', sizeof( buff ));

   fprintf(stdout, "Going to set full buffering seconds");
   setvbuf(stdout, buff, _IOFBF, 1024);

   fprintf(stdout, "This is gitbook.net");
   fprintf(stdout, "This output will go into buff");
   fflush( stdout );

   fprintf(stdout, "and this will appear when programm");
   fprintf(stdout, "will come after sleeping 5 seconds");

   sleep(5);

   return(0);
}
