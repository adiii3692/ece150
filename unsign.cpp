#include <iostream>
using namespace std;

int main();

int main(){

    //Comparing sizes
    long long a{5};
    unsigned long b{5};

    cout<<"The size of the long is: "<<sizeof(a)<<endl;
    cout<<"The size of the unsigned long is: "<<sizeof(b)<<endl;

    return 0;
}