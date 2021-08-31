#include <stdio.h>
// #include <string.h>
#include "myString.h"

int main() {
    struct String newString;
    char * testttt = "I am testing";

    // newString.string = testttt;
    newString.string = "I am testing";
    printf("%s\n", newString.string);

    char *ptr1 = newString.string;
    char *ptr2 = testttt;

    char *ptr3 = "I am testin";

    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("%p\n", ptr3);

    
    //  str.string << std::endl;
    // std::cout << str.length << std::endl;

    // myString str1 = "test";
    // str = str1;
    // std::cout << str.string << std::endl << str.length << std::endl;


    
}