#include <iostream>

int main(){

    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    bool unprime = false;

    for(int i=2;i<n;i++){
        if (n%i==0){
            unprime = true;
        }
    }

    if (unprime){
        std::cout<<"The number is not prime!"<<std::endl;
    }
    else{
        std::cout<<"The number is prime!"<<std::endl;
    }
    
    return 0;
};