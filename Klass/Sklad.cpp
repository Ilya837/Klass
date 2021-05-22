#include "Sklad.h"

Sklad::Sklad(const string& addres)
{
    ifstream file(addres);
    string line;
    if (file.is_open())
    {
        while (getline(file,line))
        {
            
        }
    }
    file.close();
    
}

tovar Sklad::search(string shtrih)
{
    return tovar();
}
