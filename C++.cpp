# include <string>
# include <iostream>
using namespace std;

int add(int b=10){
    return b;
}

int add(int a)
{
    return a;
}

int main()
{
    int a=1,b=2;
    cout << add(a) << endl;
}