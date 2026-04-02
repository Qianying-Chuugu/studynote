#include <iostream>
#include <string.h>
using namespace std;

class tree{
    public:
    tree(int num){
        cout<< num <<endl;
        cout<<"你好"<<endl;
    }
    public:
    int a;
};

int main(){
    int a=1;
    tree branch1(a);
    tree branch2 = tree(1);
    
}