// pair_vals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


template <class T> 
T getmax(T a, T b);

template <class T1, class T2>
T1 getmin(T1 a, T2 b);


template <class T> 
T getmax(T a, T b)
{
    return (a >= b ? a : b);
}


template <class T1, class T2>
T1 getmin(T1 a, T2 b)
{
    T1 min;
    min = (a <= b ? a: b);
    return min;
}


template <class T>
class PairVals {
private:
    T v1, v2;
public:
    PairVals() : v1(0), v2(0) {};
    PairVals(T a, T b);
    PairVals(const PairVals<T>& other);

    T getv1();
    T getv2();
};


template <class T>
PairVals<T>::PairVals(T a, T b)
{
    v1 = a;
    v2 = b;
}


template <class T>
PairVals<T>::PairVals(const PairVals<T>& other)
{
    v1 = other.v2;
    v2 = other.v1;
}


template <class T>
T PairVals<T>::getv1()
{
    return v1;
}


template <class T>
T PairVals<T>::getv2()
{
    return v2;
}


int main()
{
    std::cout << "max <int> = " << getmax<int>(3U, 2U) << std::endl;
    std::cout << "max <unsigned char> = " << (int) getmax<unsigned char>(255, 266) << std::endl;
    std::cout << "max <double> = " << getmax<double>(2.5, 2.4999) << std::endl;

    std::cout << "min <int, long> = " << getmin<int, long>(3U, 2U) << std::endl;
    std::cout << "min <unsigned char, int> = " << (int)getmin<unsigned char, int>(266, 255) << std::endl;
    std::cout << "min <double, double> = " << getmin<double, double>(2.5, 2.4999) << std::endl;

    PairVals<int> pair0s = PairVals<int>();
    std::cout << "class PairVals<int>, v1 = " << pair0s.getv1() << " v2 = " << pair0s.getv2() << std::endl;
    PairVals<int> pair1_2 = PairVals<int>(1, 2);
    std::cout << "class PairVals<int>, v1 = " << pair1_2.getv1() << " v2 = " << pair1_2.getv2() << std::endl;
    PairVals<int> pairCp = PairVals<int>(pair1_2);
    std::cout << "class PairVals<int>, v1 = " << pairCp.getv1() << " v2 = " << pairCp.getv2() << std::endl;

    std::cin.ignore();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
