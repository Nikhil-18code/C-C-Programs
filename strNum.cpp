#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i_value=50;
    float f_value=9.5;
    cout<<i_value +f_value<<endl;

    string strf=to_string(f_value);
    string stri=to_string(i_value);
    cout<<stri+strf;

    return 0;
}