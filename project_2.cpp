#include <iostream>
#include <cassert>

void pattern(unsigned int n);
unsigned int log10(unsigned int n);
unsigned int count(unsigned int n, unsigned int bit);
unsigned int swap_bytes(unsigned int n, unsigned int b0, unsigned int b1);
int main();

/**
 * @brief Prints out a pattern based on an integer paramater
 * 
 * @param n - The integer parameter which defines the pattern.
 * @return Returns nothing.
 */
void pattern(unsigned int n){

    //Check the edge case of n=0
    if (n==0){
        std::cout<<"*"<<std::endl;
        return;
    }
    else{
        //Find the number of rows and columns based on the parameter n
        int outer = (2*n)+1;

        //Print the top-down pattern
        for(int rows=outer;rows>=1;rows -= 2){
            int split = (outer-rows)/2;
            int stars = split + rows;

            for(int column{1};column<=outer;column++){
                if (column<=split){
                    std::cout<<" ";
                }
                else if ((column>split)&&(column<=stars)){
                    std::cout<<"*";
                }
                else{
                    std::cout<<" ";
                }
            }

            std::cout<<std::endl;
        }

        //Print the bottom-up pattern now
        for(int rows{3};rows<=outer;rows+=2)
        {
            int split = (outer-rows)/2;
            int stars = split + rows;

            for(int column{1};column<=outer;column++){
                if (column<=split){
                    std::cout<<" ";
                }
                else if ((column>split)&&(column<=stars)){
                    std::cout<<"*";
                }
                else{
                    std::cout<<" ";
                }
            }

            std::cout<<std::endl;
        }
    }
}



int main(){
    pattern(7);
}
// g++ -o project_2 project_2.cpp