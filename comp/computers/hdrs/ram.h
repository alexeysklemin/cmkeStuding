# pragma once
#ifndef RAM_H
#define RAM_H
#include <iostream>
extern int ram[8];
void write (int address, int value);
int read (int address);
#endif // RAM_H
