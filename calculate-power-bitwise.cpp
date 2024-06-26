#include<iostream>
using namespace std;
int power(int base, int exponent, int extra);

int main() {
    int base , exponent ,result;
    cout<<"Enter the Base"<<endl;
    cin>>base;
    cout<<"Enter the Exponent"<<endl;
    cin>>exponent;
    result = power(base, exponent,1);
    cout <<"Power of "<<base<<" is equal to "<<result<< endl;
    return 0;
}

int power(int base, int exponent, int extra) 
{
    if (exponent == 0) 
	{
        return 1;
    } else if (exponent % 2 == 0) 
	{
        int extra = power(base, exponent/2,extra);
        return extra * extra;
    } else {
        int extra = power(base, (exponent-1)/2,extra);
        return base * extra * extra;
    }
}
