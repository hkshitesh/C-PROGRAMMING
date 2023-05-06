#include <stdio.h>  
struct store  
{  
    double price;  
    union  
    {  
        struct
        {  
        char *title;  
        char *author;  
        int number_pages; 
        float gst; 
        } book;  
      
        struct
        {  
        int color;  
        int size;  
        char *design;  
        } shirt;  
    }item;  
};  
  int main()  
{  
    struct store s1;  
    s1.item.book.title = "C programming";   
    s1.item.book.author = "John";  
    s1.item.book.number_pages = 189;
    s1.item.book.gst=400;
    s1.price=200;  
    printf("Size is %ld", sizeof(s1));  
    return 0;  
}  
