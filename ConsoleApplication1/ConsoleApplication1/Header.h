#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <cassert>
#include<algorithm>
#include <random>

using namespace std;

class MASIV {
private:
	int length;
	int* data;

public:
	MASIV() : length(0), data(nullptr) { };

	MASIV(int length) :length(length)
	{
		mt19937 rng;
		rng.seed(random_device()());
		uniform_int_distribution<std::mt19937::result_type> dist6(1, 28);

		assert(length >= 0);
		if (length > 0)
		{
			data = new int[length];
		}
		for (int i = 0; i < length; i++)
		{
			data[i] = dist6(rng);
		}
		for (int i = 0; i < length; i++)
		{
			cout << data[i] << " ";
		}
	}

	void sorting()
	{

		sort(data, data + length);

		for (int i = 0; i < length; i++)
		{
			cout << data[i] << " ";
		}
	}

	int operator[](int x)
	{
		assert(x >= 0 && x < length);
		return data[x];
	}

	int rasmer()
	{
		cout << length;
		return length;
	}

	int new_rasmer(int new_length)
	{
		length = new_length;
		cout << new_length;
		return length;
	}

	void delet_elem(int position)
	{
		int* data1 = new int[length - 1];
		for (int i = 0; i < position; i++)
		{
			data1[i] = data[i];
		}
		for (int j = position + 1; j < length; j++)
		{
			data1[j - 1] = data[j];
		}
		for (int i = 0; i < length - 1; i++)
		{
			cout << data1[i] << "  ";
		}
	}

	void newelem(int position, int x)
	{
		int* data2 = new int[length + 1];
		for (int i = 0; i < position; i++)
		{
			data2[i] = data[i];
		}

		data2[position] = x;

		for (int j = position; j < length; j++)
		{
			data2[j + 1] = data[j];
		}


		for (int i = 0; i < length + 1; i++)
		{
			cout << data2[i] << "  ";
		}
	}
	void delet()
	{
		delete[] data;
		data = 0;
		length = 0;
	}

	~MASIV() {
		delete[] data;
	}

};
#endif