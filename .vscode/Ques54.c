// check if the given character is
//present in a string or not.
#include <stdio.h>
#include <string.h>

void checkchar(char str[],char ch);

int main() {
    char str[] = "PriyanshuGarg";
    char ch = 'P' ;
    checkchar(str,ch);
    return 0;
}
void checkchar(char str[],char ch){
    for (int i=0; str[i] != '\0' ; i++){
        if (str[i] == ch){
            printf("char is present");
            return;
        }
    }
    printf("char is not present");
}
