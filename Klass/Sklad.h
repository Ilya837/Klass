#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>


using namespace std;

struct tovar
{
	string shtrih;
	string name;
	int32_t cena;
	uint8_t sale;
};


class Sklad
{

private:
	vector<tovar> skl;
public:
	Sklad(const string& addres);
	tovar search(string shtrih);


};

