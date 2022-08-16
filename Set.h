#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Set
{
private:
	string type;
	int n, number;
	vector<int> set_int;
	vector<double> set_double;
	vector<long long> set_long_long;
	void  sort_int()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1 - i; j++)
			{
				if (set_double[j] > set_double[j + 1])
				{
					int temp = set_double[j];
					set_double[j] = set_double[j + 1];
					set_double[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n - 1; j++)
			{
				if (set_double[i] == set_double[j])
					set_double[j] = set_double[j + 1];
			}
		}
	}
	void sort_double()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1 - i; j++)
			{
				if (set_double[j] > set_double[j + 1])
				{
					int temp = set_double[j];
					set_double[j] = set_double[j + 1];
					set_double[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n - 1; j++)
			{
				if (set_double[i] == set_double[j])
					set_double[j] = set_double[j + 1];
			}
		}
	}
	void sort_long_long()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1 - i; j++)
			{
				if (set_long_long[j] > set_long_long[j + 1])
				{
					int temp = set_long_long[j];
					set_long_long[j] = set_long_long[j + 1];
					set_long_long[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n - 1; j++)
			{
				if (set_long_long[i] == set_long_long[j])
					set_long_long[j] = set_long_long[j + 1];
			}
		}
	}
public:
	Set()
	{
		n = 0;
		number = 0;
		for (int i = 0; i < n; i++)
		{
			set_int[i] = i;
			set_double[i] = i;
			set_long_long[i] = i;
		}
	}
	void create()
	{
		cout << "Enter type" << endl;
		cin >> type;
		cout << "Enter quantity" << endl;
		cin >> n;
		if (type == "int")
		{
			cout << "Enter set" << endl;
			for (int i = 0; i < n; i++)
				cin >> set_int[i];
			sort_int();
		}
		if (type == "double")
		{
			cout << "Enter set" << endl;
			for (int i = 0; i < n; i++)
				cin >> set_double[i];
			sort_double();
		}
		if (type == "long long")
		{
			cout << "Enter set" << endl;
			for (int i = 0; i < n; i++)
				cin >> set_long_long[i];
			sort_long_long();
		}
	}
	void add_int(int number)
	{
		this->number = number;
			set_int.push_back(number);
			sort_int();
	}
	void add_double(double number)
	{
		this->number = number;
		set_double.push_back(number);
		sort_double();
	}
	void add_int(long long number)
	{
		this->number = number;
			set_long_long.push_back(number);
			sort_long_long();
	}
	void del(int i)
	{
		if (type == "int")
		{
			for (int j = i; j < sizeof(set_int) / sizeof(int); j++)
				set_int[j] = set_int[j + 1];
		}
		if (type == "double")
		{
			for (int j = i; j < sizeof(set_double) / sizeof(double); j++)
				set_double[j] = set_double[j + 1];
		}
		if (type == "long long")
		{
			for (int j = i; j < sizeof(set_long_long) / sizeof(long long); j++)
				set_long_long[j] = set_long_long[j + 1];
		}
	}
	void show()
	{
		if (type == "int")
		{
			for (int j = 0; j < sizeof(set_int) / sizeof(int); j++)
				cout << set_int[j] << endl;
		}
		if (type == "double")
		{
			for (int j = 0; j < sizeof(set_double) / sizeof(double); j++)
				cout << set_double[j] << endl;
		}
		if (type == "int")
		{
			for (int j = 0; j < sizeof(set_long_long) / sizeof(long long); j++)
				cout << set_long_long[j] << endl;
		}
	}
};