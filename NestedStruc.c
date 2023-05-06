#include <stdio.h>  
struct store  
{  
    double price;  
    union  
    {  
        struct{  
        char *title;  
        char *author;  
        int number_pages;  
        } book;        
        struct {  
        int color;  
        int size;  
        char *design;  
        } shirt;  
    }item;  
};  
  int main()  
{  
    struct store s;  
    s.item.book.title = "C programming";   
    s.item.book.author = "John";  
    s.item.book.number_pages = 10;  
    s.price=205;
    printf("Size is %ld", sizeof(s.item.shirt.color));
    printf("Size is %ld", sizeof(s.item.shirt.design)); 
    printf("Size is %ld", sizeof(s.item.shirt.size));

    return 0;  
}  