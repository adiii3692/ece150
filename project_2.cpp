#include <iostream>
#include <cassert>

void pattern(unsigned int n);
unsigned int log10(unsigned int n);
unsigned int count(unsigned int n, unsigned int bit);
unsigned int swap_bytes(unsigned int n, unsigned int b0, unsigned int b1);

//Helper function I made to calculate exponents without cmath
unsigned int exponent(unsigned int base, unsigned int n);

/**
 * @brief Prints out the integer base^n
 * 
 * @param base - The base to which the power needs to be raised.
 * @param n - The power to which the base needs to be raised to.
 * @return Returns the unsigned int base^n.
 */
unsigned int exponent(unsigned int base, unsigned int n){
    unsigned int power = 1;
    unsigned int i;
    for (i=1;i<=n;i++){
        power *= base;
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
    unsigned int value = exponent(10,count);

    //Keep looping until we cross n and then find the exponent
    while(value<=n){
        count += 1;
        //If exponent is greater than 9, it is over the max limit so only 9 works
        if (count>9){
            return 9;
        }
        value = exponent(10,count);
    }

    //If number is less than 10
    if (count==0){
        return 0;
    }
    // Ekse return the power
    return (count-1);
}

/**
 * @brief Prints out how many times a certain bit(0 or 1) apepars in a number
 * 
 * @param n - The integer parameter for which we need to check the number of times a bit occurs
 * @param bit - The bit (0 or 1) we need to check for in the number
 * @return Returns an unsigned int which is the count of how many times a bit appears in a number
 */
unsigned int count(unsigned int n, unsigned int bit){
    //Check if user has entered 0 or 1 for the bit
    assert((bit==0)||(bit==1));

    //Use this variable to check if the nth bit is a 1
    unsigned int MASK_1{1};

    //Keeps track of how many 1 bits there are
    unsigned int oneCount = 0;

    //Loop through all the bits of n to check if the bit is a 1 and if it is, increment the counter
    for(int i{0};i<32;i++){
        if (n & (MASK_1 << i)){
            oneCount += 1;
        }
    }

    //Return the count
    if (bit==1){
        return oneCount;
    }
    return (32-oneCount);
}

/**
 * @brief Swaps two bytes of an unsigned int n
 * 
 * @param n - The unsigned int for which we need to swap bytes
 * @param b0 - The byte we need to swap [0,3]
 * @param b1 - The other byte we need to swap [0,3]
 * @return Returns an unsigned int with the bytes swapped or unswapped if b0 ==  b1
 */
unsigned int swap_bytes(unsigned int n, unsigned int b0, unsigned int b1){
    //Check if b0 and b1 are between 0 and 3
    assert(((b0>=0)&&(b0<=3))&&((b1>=0)&&(b1<=3)));

    //Return unchanged n if b0 and b1 are the same
    if (b1==b0){
        return n;
    }

    unsigned int isolater{255};// 11111111

    //Isolate the bytes to swap
    unsigned int byte0 = isolater & (n>>(8*b0));
    unsigned int byte1 = isolater & (n>>(8*b1));

    std::cout<<"Byte 0: "<<byte0<<std::endl;
    std::cout<<"Byte 1: "<<byte1<<std::endl;

    return n;
}


int main();
int main(){
    // pattern(1);
    // unsigned int n = 4294967295;
    // std::cout<<log10(n)<<std::endl;
    // std::cout<<count(n,1)<<std::endl;
    // unsigned int n = 255;

    // unsigned int check{n << 8};
    // std::cout<<check<<std::endl;

    unsigned int n = 56128356;
    swap_bytes(n,0,3);

    // std::cout<<(255 & (1093>>0))<<std::endl;
    // return 0;
}
// g++ -o project_2 project_2.cpp