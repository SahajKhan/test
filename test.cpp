#include <iostream>
#include <string>

struct myString {
    const char * string;
    int length;

    /*Constructor*/
    myString(const char *newStr) {
        string = newStr;
        length = strlen(string);
    }

    /*Calculate length of string*/
    int strlen(const char* str){
        unsigned int counter = 0;
        while (true) {
            std::cout << str << " Counter: " << counter << std::endl;
            std::cout << str[counter] << std::endl;
            if (string[counter] == '\0') 
                return counter;
            counter++;
        }
        return -1;
    }

    void operator=(const myString& s) {
        // length = s.length;
        std:: cout<< strlen(s.string) << std::endl;
        
        length = strlen(s.string);

        string = s.string;
        // std:: cout<< strlen(s.string) << std::endl;
        // length = strlen(s.string);

        
    }
    

};

int main() {
    myString str = "ewe";
    std::cout << str.string << std::endl;
    std::cout << str.length << std::endl;

    myString str1("test");
    str = str1;
    std::cout << str.string << std::endl << str.length << std::endl;


    
}