//LongLong.h
#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "BadException.h"

using namespace std;

class LongLong {
	long x, y;
public:
	long GetX() const;
	long GetY() const;
	void SetX(long value);
	void SetY(long value);

	LongLong();
	LongLong(long, long);
	LongLong(const LongLong&);
	LongLong& operator = (const LongLong&);

	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);

	operator string() const;

	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);

	void CompareHigh(LongLong& A, LongLong& B);
	void CompareLow(LongLong& A, LongLong& B);

	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);
};
