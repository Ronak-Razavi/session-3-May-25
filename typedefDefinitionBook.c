#include <stdio.h>
#include <string.h>

typedef struct Books {
   char * title;
   char *author;
   char * subject;
   int book_id;
} Book;

int main( ) {

   Book book;


   book.title="C Programming";
   book.author= "Nuha Ali";
   book.subject= "C Programming Tutorial";
   book.book_id = 6495407;

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);

   return 0;
}
