#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "Screen.h"
#ifndef Window_mgr_H
#define Window_mgr_H
class Window_mgr{
public:
	//using ScreenIndex = vector<Screen>::size_type;
	typedef vector<Screen>::size_type index;
	void clear(index);
	//Screen sc(24,80,' ');
	vector<Screen> screens();
};
#endif