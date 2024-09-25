#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CSTR_MAX_LEN 100

int main();

int main(){
    int *age = (int *)malloc(sizeof(int)*2);
    *age = 18;
    char name[CSTR_MAX_LEN] = "Adi";
    printf("Hello there %s! I know you are %d years old\n",name,*age);
    free(age);
};