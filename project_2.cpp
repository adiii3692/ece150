#include <iostream>
#include <cassert>

void pattern(unsigned int n);
unsigned int log10(unsigned int n);
unsigned int count(unsigned int n, unsigned int bit);
unsigned int swap_bytes(unsigned int n, unsigned int b0, unsigned int b1);

//Helper function I made to calculate exponents without cmath
unsigned int exponent(unsigned int n);

/**
 * @brief Prints out the integer 10^n 
 * 
 * @param n - The power to which 10 needs to be raised to.
 * @return Returns the unsigned int 10^n.
 */
unsigned int exponent(unsigned int n){
    unsigned int power = 1;
    for (int i{1};i<=n;i++){
        power *= 10;
    }

    return power;
}

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

/**
 * @brief Prints out the largest integer m such that 10^m <= n 
 * 
 * @param n - The integer parameter which defines the maximum for 10^m.
 * @return Returns the largest unsigned int m such that 10^m <= n.
 */
unsigned int log10(unsigned int n){

    //Check if n is greater than 0 and less than the max value for int
    assert((n!=0)&&(n<=	4294967295));

    //Keeps track of the power 
    unsigned int count = 0;

    //Keeps track of the various powers of 10
    unsigned int value = exponent(count);

    //Keep looping until we cross n and then find the exponent
    while(value<=n){
        count += 1;
        //If exponent is greater than 9, it is over the max limit so only 9 works
        if (count>9){
            return 9;
        }
        value = exponent(count);
    }

    //If number is less than 10
    if (count==0){
        return 0;
    }
    // Ekse return the power
    return (count-1);
}

/**
 * @brief Prints out the largest integer m such that 10^m <= n 
 * 
 * @param n - The integer parameter which defines the maximum for 10^m.
 * @return Returns the largest unsigned int m such that 10^m <= n.
 */
unsigned int count(unsigned int n, unsigned int bit){

}

int main();
int main(){
    // pattern(1);
    unsigned int n = 42949695;
    std::cout<<log10(n)<<std::endl;
}
// g++ -o project_2 project_2.cpp