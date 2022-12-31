#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//pop prototype
char popreverse(char *str);
int main(){
    char *word="Rubrics";
    printf("Length of string, %s: %d",word,strlen(word));
    popreverse(word);
    return 0;
}

//implement pop()
char popreverse(char *str){
    int len=strlen(str);
    int i;
    printf("\nWord in reversal: ");
    for(i=len;i>=0;i--){

            printf("%c",tolower(str[i]));

    }
    printf("\n");
}
