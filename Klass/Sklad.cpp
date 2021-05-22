#include "Sklad.h"

Sklad::Sklad(const string& addres)
{
    ifstream file(addres);
    string line;
    if (file.is_open())
    {
        tovar t;
        int16_t i = 0;
        while (getline(file,line))
        {
            switch (i % 4) {
            case 0: t.shtrih = line; break;
            case 1: t.name = line; break;
            case 2: t.cena =  conv(line); break;
            case 3: t.sale = conv(line); skl.push_back(t);
            }
        }
    }
    file.close();    
}

tovar Sklad::search(string shtrih)
{
    return tovar();
}

int conv(const string& str) {
    int num = NULL;
    for (int i = 0; i < str.length(); i++) {
        num = num * 10 + str[i] - '0';
    }
    return num;
}
