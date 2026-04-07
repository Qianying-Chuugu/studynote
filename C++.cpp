#include <iostream>
#include <string.h>
using namespace std;

class tree{
    friend tree trass(tree &apple,tree &orange);
    friend ostream& operator<<(ostream &cout,tree const &apple);
    private:
    int a;
    double b;
    public:
    tree():a(1),b(7.234){}
    tree& operator++(){
        a=a+1;
        b=b+1;
        return *this;
    }
    tree operator++(int){
        tree linshi = *this;
        a=a+1;
        b=b+1;
        return linshi;
    }
    tree& operator=(const tree& dux){
        this->a=dux.a;
        this->b=dux.b;
        return *this;
    }
    tree& operator()(int a,double b){
        this->a+=a;
        this->b+=b;
        return *this;
    }
};

tree trass(tree &apple,tree &orange){
    tree mamboo;
    mamboo.a=apple.a+orange.a;
    mamboo.b=apple.b+orange.b;
    return mamboo;
}

ostream& operator<<(ostream &cout,tree const &apple){
    cout<<apple.a<<" "<<apple.b;
    return cout;
}

int main(){
    tree apple,orange;
    tree mamboo=trass(apple,orange);
    cout<<mamboo<<endl;
    mamboo(99,23.73663);
    cout<<mamboo<<endl;
}