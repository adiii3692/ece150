#include <iostream>

int main(){

    //Get the numbers for the matrix
    int row, column;
    std::cout<<"Enter the row numbers: ";
    std::cin>>row;
    column = row+1;

    //Make the matrix
    for (int i=1;i<=row;i++){
        for (int n=1;n<=column;n++){
            if ((n<=(i-1))&&((i-1)>0)){
                std::cout<<0<<"  ";
                continue;
            }
            std::cout<<i<<n<<" ";
        }
        std::cout<<""<<std::endl;
    }

    
    return 0;
};