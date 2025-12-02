#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"

template <typename T>
void printArray(Array<T> &array);

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        tmp[0] = 42;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (tmp[i] != numbers[i] || tmp[i] != test[i])
            {
                std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
                std::cout << "tmp[" << i << "] = " << tmp[i] << std::endl;
                std::cout << "test[" << i << "] = " << test[i] << std::endl;
            }
        }
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

    std::cout << std::endl;

    Array<std::string> strings;
    std::cout << "strings size: " << strings.size() << std::endl;
    printArray(strings);
    std::cout << std::endl;
    strings = Array<std::string>(5);
    std::cout << "strings size: " << strings.size() << std::endl;
    printArray(strings);
    std::cout << std::endl;
    for (unsigned int i = 0; i < strings.size(); i++)
        strings[i] = numbers[i] % 2 == 0 ? "even" : "odd";
    printArray(strings);

	const Array<int> constNumbers(numbers);
	std::cout << std::endl;
	std::cout << constNumbers[0] << std::endl;
	// constNumbers[0] = 42; // should not compile

    return 0;
}

template <typename T>
void printArray(Array<T> &array)
{
    for (unsigned int i = 0; i < array.size(); i++)
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
}
