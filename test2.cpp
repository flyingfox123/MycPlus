#include <string>
#include<iostream>
typedef double money;
using namespace std;
class nod{
public:
	nod(string &);
	nod();
};

struct A{
	nod n;
	A(){};
};

A a;
struct B{
	B(){};
	nod nn;
};
void main(){
}