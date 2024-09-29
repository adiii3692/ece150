#include <iostream>
#include <cassert>
using namespace std;

int main();
int factorial(int n);

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"The factorial of the number "<<n<<" is "<<factorial(n);
}

int factorial(int n){
    assert(n>=0);

    int result{1};

    for (int k{1};k<=n;k++){
        result *= k;
    }

    return result;
}