#ifndef myString
#define myString




struct String {
    char * string;
    unsigned int length;
};



/*Calculate length of string*/
unsigned int length(const char* str){
    unsigned int counter = 0;
    while (1) {
        if (str[counter] == '\0')
            return counter;
        counter++;
    }
    return -1;
}
#endif