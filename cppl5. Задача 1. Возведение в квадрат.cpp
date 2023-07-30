#include <iostream>
#include <vector>
#include <string>

template <class T>
T square(T num)
{
    return num * num;
};


template <>
std::string square(std::string num)
{
	return num;
};



template <class T>
std::vector<T> square(std::vector<T> a)
{
    for (int i = 0; i < a.size();i++)
    {
        a.at(i) *= a.at(i);
    };
    return a;
}   

void print(std::vector<int>* b)
{
    for (int i = 0; i < b->size(); i++)
    {
        std::cout << b->at(i)<<"\t";
    };
};



int main()
{
    setlocale(LC_ALL, "RUS");

    int a = 5;
    int v = square(a);

    std::cout << "[IN]:" << " " << a << std::endl;
    std::cout << "[IN]:" << " " << v << std::endl;

	std::vector<int> b = { -7, 5, 18, 0, -9, 22 };

    std::cout << "[IN]:"<<" ";
	print(&b);
	std::cout << std::endl;

	std::vector<int> y = square(b);

    std::cout << "[OUT]:" << " ";
	print(&y);

}


