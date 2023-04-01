#include <iostream>
#include <fstream>
#include <string>

// Window
#include <curses.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

// Mac OS
/*
#include <ncurses.h>
#include <cstdlib>
#include <thread>
#include <chrono>
*/

#define ppxy prevX, prevY, x, y
#define ippxy int prevX, int prevY, int x, int y
#define iPPXY int &prevX, int &prevY, int &x, int &y

#define heightS 19
#define widthS 79
#define heightM 39
#define widthM 79
#define heightB 39
#define widthB 159

#define passingHeightMenu 12

using namespace std;