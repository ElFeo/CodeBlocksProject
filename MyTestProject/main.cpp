#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0, sum=0;
    int A[] ={1,2,3,4,5,6};

    a=10;
    b=20;
    c =a+b;

    for (auto x:A)
    {
        sum=sum+x;
    }
    cout << "sum of array: " << sum << endl;
    std::cout << "sum of the a and b: " << c << std::endl;
    cout << "Hello, Hello Kitty" << endl;

    return 0;
}
