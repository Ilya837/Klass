#include "Klas.h"

Klas::Klas()
{
    sum = 0;
}

tovar Klas::Scan(const int16_t shtrih)
{
   return skl.search(shtrih);
}

string Klas::Inf(const string& name)
{
    string res;
    tovar t = skl.search(name);
    if (t.shtrih != 10000) {
        res = "Название: " + t.name + "\nЦена: " + to_string(t.cena) + "\nСкидка: " + to_string(t.sale);
    }
    else {
        res = "Такого товара нет на складе";
    }
    return res;
}

string Klas::Chek()
{
    string res;
    for (const pair<tovar, int> &x : Check) {
       res += x.first.name + " " + to_string((int)(x.first.cena * (100 - x.first.sale) / 100)) + " р. " + 
           to_string(x.second) + " шт. " + 
           to_string((int)(x.first.cena * (100 - x.first.sale) / 100) * x.second) + " p.\n";
    }
    res += to_string(sum) + " р.";
    return res;
}

int64_t Klas::Sum()
{
    return sum;
}

void Klas::del(const string& name, int16_t col)
{
    int i = 0;
    tovar t = skl.search(name);
    if (t.shtrih != 10000) {
        for (pair<tovar, int> &x : Check) {
            if (x.first == t) {
                if (x.second > col) {
                    x.second -= col;
                    sum -= (int64_t)t.cena * (100 - t.sale) / 100 * col;
                }
                else {
                    sum -= (int64_t)t.cena * (100 - t.sale) / 100 * x.second;
                    Check.erase(Check.begin() + i);
                }                
                
                break;
            }
            i++;
        }
        
    }
}

void Klas::Add(const tovar &t)
{
    bool flag = true;
    if (t.shtrih != 10000) {
        for (pair<tovar, int> &x : Check) {
            if (x.first == t) {
                x.second++;
                flag = false;
                break;
            }
        }
        if (flag) {
            Check.push_back(pair<tovar, int>(t, 1));
        }
        sum += (int64_t)t.cena * (100 - t.sale) / 100;
    }
}
