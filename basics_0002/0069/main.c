#include <stdio.h>

#define MAX_NUM_CHARS 100  /* maximum number of characters */

void str_cpy( char * original_pointer , char * copy_pointer )
{
   while( *original_pointer != '\0' )
   {
      /* assign an element from original[] to copy[] */
      *copy_pointer = *original_pointer;

      /* move original_pointer to the next element of original[] */
      original_pointer++;

      /* move copy_pointer to the next element of copy[] */
      copy_pointer++;
   }
   if( *original_pointer == '\0' )
      *copy_pointer = '\0';
}

int main()
{
   char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char copy[ MAX_NUM_CHARS ];

   /* copy the contents in original[] to copy[] */
   str_cpy( original , copy );

   printf( "contents in origina[]: %s\n" , original );

   printf( "contents in copy[]   : %s\n" , copy );

   return 0;
}


/*
contents in origina[]: ABCDEFGHIJKLMNOPQRSTUVWXYZ
contents in copy[]   : ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/
