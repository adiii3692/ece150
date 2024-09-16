#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main();
string roots(double a, double b, double c);

int main(){
    double a,b,c;
    std::cout<<"Enter a: ";
    std::cin>>a;
    std::cout<<"Enter b: ";
    std::cin>>b;
    std::cout<<"Enter c: ";
    std::cin>>c;
    
    roots(a,b,c);
    return 0;
}

string roots(double a, double b, double c){
    double root1 = floor(100*(-b+(sqrt((b*b)-(4*a*c))))/(2*a)/100);
    double root2 = (int)(((-b-(sqrt((b*b)-(4*a*c))))/(2*a)*1000)/1000.0f);
    std::cout<<"Roots are: (x-"<<to_string(root1)<<") and (x-"<<to_string(root2)<<")"<<std::endl;
    return "";
}