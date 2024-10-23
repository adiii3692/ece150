#include <iostream>

int main();
unsigned int string_length(char str[]);

int main(){
    char phrase_1[7]{' ', 't', 'h', 'e', 'r', 'e'}; 
    char phrase_2[5]{'H', 'e', 'l', 'l', 'o'}; 
    std::cout << string_length(phrase_1) << std::endl; 
    
    return 0;
}

unsigned int string_length(char str[]){
    for(int i{0};true;i++){
        if (str[i] == '\0'){
            return i+1;
        }
    }
}