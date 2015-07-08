#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int child=0;
    int boy=0;
    int girl=0;
    int i;
    srand(time(0));
    int randomnr;
    for(i=0;i<=10000000;i++)
    {
        randomnr=rand() % 2;
        if((randomnr)==0)
        {
            child=child+1;
            girl=girl+1;
        }
        else {
            child=child+1;
            boy=boy+1;
            break;
        }
    }
    cout << "Number of children:"<<child<<endl;
    cout << "Number of girls:"<<girl<<endl;
    cout << "Number of boys:"<<boy<<endl;
}   