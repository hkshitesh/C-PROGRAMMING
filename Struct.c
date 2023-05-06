#include <stdio.h> 
struct store  
{  
   double price;  
   char *title;  
   char *author;  
   int number_pages;  
   int color;  
  int size;  
  char *design;  
};   
int main()  
{  
struct store book;  
book.title = "C programming";  
book.author = "Paulo Cohelo";    
book.number_pages = 190;  
book.price = 205;  
printf("Size is : %ld bytes", sizeof(book));  
return 0;  
}   