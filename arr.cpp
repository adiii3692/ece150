#include <iostream>

int main();
double average(double values[], int capacity);
void reset(double values[], int capacity);

int main(){
    double values[5]{34,6.6257,18,678.9,627.945};

    std::cout<<"The average is: "<<average(values,5)<<std::endl;
    
    reset(values,5);

    for(int i{0};i<5;i++){
        std::cout<<values[i];
    }
}

double average(double values[], int capacity){
    double sum = 0;
    for(int i{0};i<capacity;i++){
        sum += values[i];
    }
    
    double avg = sum/capacity;

    return avg;
}

void reset(double values[], int capacity){
    for(int i{0};i<capacity;i++){
        values[i] = 0;
    }
}