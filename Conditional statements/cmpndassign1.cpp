#include <iostream>
using namespace std;
int main()
{
    int fact=100, a=12, b=11, c=1;
    
    fact*=a*b*c; //multiplication with the help compound assignment
    
    cout << "Product is: \n"
         << fact;

    return 0;
}