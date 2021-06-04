#include "Sklad.h"

Sklad::Sklad()
{
    setlocale(LC_ALL, "Russian");
    ifstream file(path);
    string line;
    if (file.is_open())
    {
        tovar t;
        int16_t i = 0; 
        set<int> l;

        while (getline(file,line))
        {            
             t.shtrih = stoi(line); 
             getline(file, line);
             t.name = line; 
             getline(file, line);
             t.cena =  stoi(line); 
             getline(file, line);
             t.sale = stoi(line); 
             skl.push_back(t);
             assert(l.find(t.shtrih) == l.end());
             l.insert(t.shtrih);
        }
    }
    file.close();    
}

tovar Sklad::search(int16_t _shtrih)
{
    for (tovar x : skl) {
        if (x.shtrih == _shtrih) {
            return x;
        }
    }
    tovar t;
    t.shtrih = 10000;
    return t;
}

tovar Sklad::search(const string& _name)
{
    for (tovar x : skl) {
        if (x.name == _name) {
            return x;
        }
    }
    tovar t;
    t.shtrih = 10000;
    return t;
}

bool operator==(tovar a, tovar b)
{
        return a.shtrih == b.shtrih;
}
