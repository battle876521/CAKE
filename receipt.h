#ifndef receipt_h
#define receipt_h
#include <iostream>
#include <cstdlib> 
#include "receipt.h"
using namespace std;

class receipt
{
private:
	int data[9] = {};
	int user[1] = {};
	int time = 0;
public:
	void set(int data[]);
};

#endif 

