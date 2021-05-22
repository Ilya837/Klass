#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include "Sklad.h"


using namespace std;

class Klas
{
private:
	int64_t sum;
	vector<int16_t > Check;

public:
	void Scan(const string& shtrih);
	string Inf(const string& name);
	string Chek();
	int64_t Sum();
	void del(const string& name, int16_t col);
private:
	void Add(const string& name);
	int16_t Convert(string shtrih);
};

