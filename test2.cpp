#include <string>
#include<iostream>
typedef double money;
using namespace std;
class acc{
public:
	void calculate(){
		account+=account*interestRate;
		cout<<account<<endl;
	}
	static double rate(){
		cout<<mn<<endl;
		return interestRate;
	}
private:
	string owner;
	double account;
	static double interestRate;
	static double initRate();
	static const int mn=22;
	acc *ac;
	static acc ab;

};
double acc::interestRate=23.11;
const int acc::mn;
void main(){
	acc ac;
	ac.rate();
}