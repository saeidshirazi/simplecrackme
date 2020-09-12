#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_valid(const char* password)
{
    if(strcmp(password,"dark") == 0){
        return 1;
    } else{
        return 0;
    }

}

int main()
{
    char* input = malloc(256);
    printf("Welcome To My Fist Crackme\n");
    printf("what is the password?");
    scanf("%s", input);

    if(is_valid(input)){

        printf("correct horraaaa:)\n");
    }else{
        printf("wrong asnwer failed!!!\n");
    }    
    free(input);
    return 0;
    
}