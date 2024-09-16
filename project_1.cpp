#include <iostream>
using namespace std;

int main();

int main(){
    //Declare variables
    double max_exam, exam, max_midterm, midterm, max_proj1, proj1, max_proj2, proj2, max_proj3, proj3, max_proj4, proj4, max_proj5, proj5;

    //Final exam
    std::cout<<"Maximum grade in the final examination: "<<std::endl;
    std::cin>>max_exam;
    std::cout<<"Achieved grade in the final examination: "<<std::endl;
    std::cin>>exam;

    //Midterm
    std::cout<<"Maximum grade in the midterm: "<<std::endl;
    std::cin>>max_midterm;
    std::cout<<"Achieved grade in the midterm: "<<std::endl;
    std::cin>>midterm;

    //Project 1
    std::cout<<"Maximum grade in project 1: "<<std::endl;
    std::cin>>max_proj1;
    std::cout<<"Achieved grade in project 1: "<<std::endl;
    std::cin>>proj1;

    //Project 2
    std::cout<<"Maximum grade in project 2: "<<std::endl;
    std::cin>>max_proj2;
    std::cout<<"Achieved grade in project 2: "<<std::endl;
    std::cin>>proj2;

    //Project 3
    std::cout<<"Maximum grade in project 3: "<<std::endl;
    std::cin>>max_proj3;
    std::cout<<"Achieved grade in project 3: "<<std::endl;
    std::cin>>proj3;

    //Project 4
    std::cout<<"Maximum grade in project 4: "<<std::endl;
    std::cin>>max_proj4;
    std::cout<<"Achieved grade in project 1: "<<std::endl;
    std::cin>>proj4;

    //Project 5
    std::cout<<"Maximum grade in project 4: "<<std::endl;
    std::cin>>max_proj5;
    std::cout<<"Achieved grade in project 1: "<<std::endl;
    std::cin>>proj5;

    double f100 = (100.0*max_exam/exam);
    double m100 = (100.0*max_midterm/midterm);
    double p_1_100 = (100.0*max_proj1/proj1);
    double p_2_100 = (100.0*max_proj2/proj2);
    double p_3_100 = (100.0*max_proj3/proj3);
    double p_4_100 = (100.0*max_proj4/proj4);
    double p_5_100 = (100.0*max_proj5/proj5);
}