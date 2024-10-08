#include <iostream>
#include <cmath>

int main();

int main()
{
    // Declare variables
    double max_exam, max_midterm, max_proj1, max_proj2, max_proj3, max_proj4, max_proj5;
    double exam, midterm, proj1, proj2, proj3, proj4, proj5;
    double f100,m100,p_1_100,p_2_100,p_3_100,p_4_100,p_5_100;
    double e100,p100,final_grade;

    //Final exam
    do{
        std::cout<<"Maximum grade in the final examination: ";
        std::cin>>max_exam;
    } while((max_exam<=0)||(max_exam!=std::round(max_exam+ 1e-12)));
    do{
        std::cout<<"Achieved grade in the final examination: ";
        std::cin>>exam;
    }while((exam<0)||(exam>max_exam));

    //Midterm
    do{
        std::cout<<"Maximum grade in the midterm examination: ";
        std::cin>>max_midterm;
    }
    while((max_midterm<=0)||(max_midterm!=std::round(max_midterm+ 1e-12)));
    do{
        std::cout<<"Achieved grade in the midterm examination: ";
        std::cin>>midterm;
    }while((midterm<0)||(midterm>max_midterm));


    //Project 1
    do{
        std::cout<<"Maximum grade in project 1: ";
        std::cin>>max_proj1;
    }while((max_proj1<=0)||(max_proj1!=std::round(max_proj1+ 1e-12)));
    do{
        std::cout<<"Achieved grade in project 1: ";
        std::cin>>proj1;
    }while((proj1<0)||(proj1>max_proj1));

    //Project 2
    do{
        std::cout<<"Maximum grade in project 2: ";
        std::cin>>max_proj2;
    }while((max_proj2<=0)||(max_proj2!=std::round(max_proj2+ 1e-12)));
    do{
        std::cout<<"Achieved grade in project 2: ";
        std::cin>>proj2;
    }while((proj2<0)||(proj2>max_proj2));

    //Project 3
    do{
        std::cout<<"Maximum grade in project 3: ";
        std::cin>>max_proj3;
    }while((max_proj3<=0)||(max_proj3!=std::round(max_proj3+ 1e-12)));
    do{
        std::cout<<"Achieved grade in project 3: ";
        std::cin>>proj3;
    }while((proj3<0)||(proj3>max_proj3));

    //Project 4
    do{
        std::cout<<"Maximum grade in project 4: ";
        std::cin>>max_proj4;
    }while((max_proj4<=0)||(max_proj4!=std::round(max_proj4+ 1e-12)));
    do{
        std::cout<<"Achieved grade in project 4: ";
        std::cin>>proj4;
    }while((proj4<0)||(proj4>max_proj4));

    //Project 5
    do{
        std::cout<<"Maximum grade in project 5: ";
        std::cin>>max_proj5;
    }while((max_proj5<=0)||(max_proj5!=std::round(max_proj5+ 1e-12)));
    do{
        std::cout<<"Achieved grade in project 5: ";
        std::cin>>proj5;
    }while((proj5<0)||(proj5>max_proj5));

    //Get supremacy of final examination
    f100 = (100.0*exam/max_exam);
    m100 = (100.0*midterm/max_midterm);
    p_1_100 = (100.0*proj1/max_proj1);
    p_2_100 = (100.0*proj2/max_proj2);
    p_3_100 = (100.0*proj3/max_proj3);
    p_4_100 = (100.0*proj4/max_proj4);
    p_5_100 = (100.0*proj5/max_proj5);

    // Replace grades if needed
    if (m100 < f100)
    {
        m100 = f100;
    }
    if (p_1_100 < f100)
    {
        p_1_100 = f100;
    }
    if (p_2_100 < f100)
    {
        p_2_100 = f100;
    }
    if (p_3_100 < f100)
    {
        p_3_100 = f100;
    }
    if (p_4_100 < f100)
    {
        p_4_100 = f100;
    }
    if (p_5_100 < f100)
    {
        p_5_100 = f100;
    }
    
    //Weighted examination average
    e100 = (f100*3/4)+(m100/4);

    //Project grade
    p100 = (p_1_100+p_2_100+p_3_100+p_4_100+p_5_100)/5;

    //Final grade calculation
    if (e100<=40){
        final_grade = e100;
    }

    else if (e100 >= 60)
    {
        final_grade = (e100 * 2 / 3) + (p100 / 3);
    }

    else
    {
        final_grade = (e100 * 5 / 3) - (e100 * e100 / 60) + (p100 * e100 / 60) - (p100 * 2 / 3);
    }

    //Print final grade
    std::cout<<"Final grade: "<<std::round(final_grade+1e-12)<<std::endl;

    return 0;
}