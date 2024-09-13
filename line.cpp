#include <iostream>
#include <string.h>
using namespace std;

string equation(double x1,double y1,double x2,double y2);
int main();

int main(){
    double x1,y1,x2,y2;
    std::cout<<"x1,y1,x2,y2: ";
    std::cin>>x1;
    std::cin>>y1;
    std::cin>>x2;
    std::cin>>y2;

    std::cout<<"The equation is: "<<equation(x1,y1,x2,y2)<<std::endl; 

    return 0;   
}

string equation(double x1,double y1,double x2,double y2){
    string answer;
    double slope = (y2-y1)/(x2-x1);
    double b = y1-(slope*x1);
    answer = "y="+to_string(slope)+"x"+to_string(b);
    return answer;
}