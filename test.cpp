#include"Screen.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;
//Screen sc(24,80,' ');
class win{
public:
	typedef vector<Screen>::size_type index;
	void clear(index);
	//Screen sc(string::size_type,string::size_type,char);
	// vector<Screen> screens{Screen(24,80,' ')};
//private:
	Screen sc2(string::size_type,string::size_type,char);
	//sc(24,80,' ');
	//vector<Screen> screens{Screen(24,80,' ')};
	//vector<Screen> screens;
};
void win::clear(index i){
	Screen sc(24,80,' ');
	cout<<sc.height<<endl;
}
void main(){
	win w;
	w.clear(1);
	
}