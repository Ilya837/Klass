#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include "Sklad.h"
#include <string>
#include <locale>
#include <set>


using namespace std;

class Klas
{
private:
	int64_t sum;
	vector<pair<tovar,int>> Check;
	Sklad skl;

public:
	Klas();
	tovar Scan(const int16_t shtrih);
	string Inf(const string& name);
	string Chek();
	int64_t Sum();
	void del(const string& name, int16_t col);
	void Add(const tovar& name);
};

