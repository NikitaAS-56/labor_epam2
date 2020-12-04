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
        cout << "����������� ��� ����������";
    }
    STRING(const char* p)
    {
        cout << "����������� � ���������� char* ";
        size = strlen(p);
        data = new char[size];
        memcpy(data, p, size);

    }
    STRING(const STRING& cop)
    {
        cout << " ����������� ����������� ";
        data = new char[size];
        copy(cop.data, cop.data + cop.size, data);
        size = cop.size;
    }

    STRING& operator=(const STRING& cop)
    {
        cout << "�������� ����������� =";


        delete[] data;
        data = new char[cop.size];
        copy(cop.data, cop.data + cop.size, data);
        size = cop.size;
        return *this;
    }

    STRING(STRING&& perem)  noexcept
    {
        cout << "�����������  ����������� \n";
        data = perem.data;
        size = perem.size;

        perem.size = 0;
        perem.data = nullptr;

    }

    STRING& operator=(STRING&& perem)   noexcept
    {
        cout << "������� ����������� =";

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
