#include <iostream>

int main();
double average(double values[], int capacity);

int main(){
    double values[5]{34,6.6257,18,678.9,627.945};

    std::cout<<"The average is: "<<average(values,5)<<std::endl;
}

double average(double values[], int capacity){
    double sum = 0;
    for(int i{0};i<capacity;i++){
        sum += values[i];
    }
    
    double avg = sum/capacity;

    return avg;
}