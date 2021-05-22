#pragma once
#include <iostream>
#include <vector>;


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
	Sklad(ifstream file);
	tovar search(string shtrih);


};

