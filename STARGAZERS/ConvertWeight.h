#pragma once
#include <iostream>
#include <iomanip>

#ifdef _WIN32
#include <windows.h>
#define CLEAR_SCREEN() system("cls")
#elif defined(__unix__) || defined(__APPLE__)
#include <cstdlib>
#define CLEAR_SCREEN() system("clear")
#else
#define CLEAR_SCREEN() std::cout << "\033[2J\033[1;1H"
#endif

void convertWeight();