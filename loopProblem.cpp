#include <iostream>

//Function that prints out all the prime numbers <=100000
int main(){

    for(int n=2;n<=100000;n++){
        bool unprime = false;
        if (n==2){
            std::cout<<n<<std::endl;
            continue;
        }

        for(int i=(n-1);i>=2;i--){
            if ((n%i)==0){
                unprime = true;
                continue;
            }
        }

        if (!unprime){
            std::cout<<n<<std::endl;
            continue;
        }
    }

    return 0;
};