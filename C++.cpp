#include <iostream>
#include <string.h>
using namespace std;

class tree{

    friend void seed(tree &branch);

    private:
    int a;
    int b;
    int c;
    static double num;
    public:
    tree():a(1),b(9),c(8){

    }
    public:
    void test1 (){
        
       
        cout<<"yes"<<endl;
    }
};

void seed(tree &branch){
    cout<<branch.a<<" "<<branch.b<<""<<endl;
}


int main(){
    tree branch;
    seed(branch);
    
}