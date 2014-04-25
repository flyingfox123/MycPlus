#include <string>
#include <iostream>
#include <vector>
using namespace std;
#ifndef Screen_h
#define Screen_h
class Screen{
friend class Window_mgr;
friend class win;
public:
	typedef string::size_type pos;
	//Screen()=default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),content(5,c){
		cursor=0;
	}
	char get() const{
		return content[cursor];
	}
	string getString(){
		return content;
	}
	inline char get(pos ht,pos wd) const;
	//Screen &move(pos r,pos c);
private:
	pos cursor;
	pos height,width;
	string content;
	
		  
};
#endif
