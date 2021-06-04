#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <locale>
#include <set>
#include <assert.h>


using namespace std;

struct tovar
{
	int16_t shtrih;
	string name;
	int32_t cena;
	uint8_t sale;
};

bool operator ==(tovar a, tovar b);


class Sklad
{
private:
	string path = "sklad.txt";
	vector<tovar> skl;
public:
	Sklad();
	tovar search(int16_t shtrih);
	tovar search(const string& name);
};

