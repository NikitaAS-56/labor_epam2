#pragma once
#include<iostream>
using namespace std;

class STRING
{
private:
    char* data;
    int  size;
public:

    STRING() :data(nullptr), size(0) {
        cout << "конструктор без параметров";
    }
    STRING(const char* p)
    {
        cout << "конструктор с параметром char* ";
        size = strlen(p);
        data = new char[size];
        memcpy(data, p, size);

    }
    STRING(const STRING& cop)
    {
        cout << " конструктор копирования ";
        data = new char[size];
        copy(cop.data, cop.data + cop.size, data);
        size = cop.size;
    }

    STRING& operator=(const STRING& cop)
    {
        cout << "оператор копирования =";


        delete[] data;
        data = new char[cop.size];
        copy(cop.data, cop.data + cop.size, data);
        size = cop.size;
        return *this;
    }

    STRING(STRING&& perem)  noexcept
    {
        cout << "конструктор  перемешения \n";
        data = perem.data;
        size = perem.size;

        perem.size = 0;
        perem.data = nullptr;

    }

    STRING& operator=(STRING&& perem)   noexcept
    {
        cout << "опертор перемещения =";

        delete[] data;
        data = perem.data;
        size = perem.size;
        perem.size = 0;
        perem.data = nullptr;
        return *this;
    }



    ~STRING()
    {
        delete[] data;
    }


};
