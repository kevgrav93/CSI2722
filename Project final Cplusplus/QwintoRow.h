#ifndef QWINTOROW_
#define QWINTOROW_
#include "QwintoRow.cpp"
#include "RollOfDice.h"
#include <iostream>

template<Colour C>

class QwintoRow {

public:
	RollOfDice values[9];
	RollOfDice& operator[] (const int index);
	ostream& operator<< (ostream& os);
};

#endif
