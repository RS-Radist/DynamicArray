#include <stdio.h>
#include "ClassDynamicArray.hpp"
#include <iostream>

template <typename T>
void RandomArray(DynamicArray <T> &x, size_t size)
{
    for (int i =0 ; i<size;++i)
    {
        x.Push(arc4random()%9+1);
    }
}
template <typename T>
void ShowArray(DynamicArray <T> &x)
{
    for (int i =0 ; i<x.GetSize();++i)
    {
        std::cout<<x.Get(i) << " " ;
    }
    std::cout << "\n";
}

template <typename T>
bool TestPlusFunction (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one+two;
    return (ret==exp)? true : false;
}
template <typename T>
bool TestPlus_X_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret = one+x;
    return (ret==exp)? true : false;
}
template <typename T>
bool TestPlus_X_Equal_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret(one);
    ret+=x;
    return (ret==exp)? true : false;
}
template <typename T>
bool TestPlus_X_Equal_Mas_Function (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one;
    ret+=two;
    return (ret==exp)? true : false;
}
template <typename T>
bool TestMinusFunction (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one-two;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestMinus_X_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one-x;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestMinus_X_Equal_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret(one);
    ret-=x;
    return (ret==exp)? true : false;
}
template <typename T>
bool TestMinus_X_Equal_Mas_Function (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp)
{
    DynamicArray <T> ret(one);
    ret-=two;
    return (ret==exp)? true : false;
}

template <typename T>
bool TestMultFunction (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one * two;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestMult_X_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one * x;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestMult_X_Eual_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret(one);
    one*= x;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestMult_X_Equal_Mas_Function (DynamicArray <T> one,DynamicArray <T> two,DynamicArray  <T> exp)
{
    DynamicArray <T> ret(one);
    ret*=two;
    return (ret == exp) ? true : false;
}

template <typename T>
bool TestDivFunction (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one / two;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestDiv_X_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one / x;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestDiv_X_Eual_Function (DynamicArray <T> one,T x,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one;
    ret/= x;
    return (ret == exp) ? true : false;
}
template <typename T>
bool TestDiv_X_Eual_Mas_Function (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp)
{
    DynamicArray <T> ret=one;
    ret/= two;
    return (ret == exp) ? true : false;
}
template void RandomArray(DynamicArray<int> &x, size_t size);
template void RandomArray(DynamicArray<double> &x, size_t size);
template void RandomArray(DynamicArray<float> &x, size_t size);
template void RandomArray(DynamicArray<char> &x, size_t size);
template void ShowArray(DynamicArray<int> &x);
template void ShowArray(DynamicArray<double> &x);
template void ShowArray(DynamicArray<float> &x);
template void ShowArray(DynamicArray<char> &x);


template bool TestPlusFunction (DynamicArray <int> one,DynamicArray <int> two,DynamicArray <int> exp);
template bool TestPlusFunction (DynamicArray <double> one,DynamicArray <double> two,DynamicArray <double> exp);
template bool TestPlusFunction (DynamicArray <float> one,DynamicArray <float> two,DynamicArray <float> exp);
template bool TestPlusFunction (DynamicArray <char> one,DynamicArray <char> two,DynamicArray <char> exp);
template bool TestPlus_X_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
template bool TestPlus_X_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);
template bool TestPlus_X_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
template bool TestPlus_X_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);
template bool TestPlus_X_Equal_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
template bool TestPlus_X_Equal_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);
template bool TestPlus_X_Equal_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
template bool TestPlus_X_Equal_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);

template bool TestPlus_X_Equal_Mas_Function (DynamicArray <int> one,DynamicArray <int> two,DynamicArray <int> exp);
template bool TestPlus_X_Equal_Mas_Function (DynamicArray <double> one,DynamicArray <double> two,DynamicArray <double> exp);
template bool TestPlus_X_Equal_Mas_Function (DynamicArray <char> one,DynamicArray <char> two,DynamicArray <char> exp);
template bool TestPlus_X_Equal_Mas_Function (DynamicArray <float> one,DynamicArray <float> two,DynamicArray <float> exp);

bool TestMinusFunction (DynamicArray <int> one,DynamicArray <int> two,DynamicArray <int> exp);
bool TestMinusFunction (DynamicArray <double> one,DynamicArray <double> two,DynamicArray <double> exp);
bool TestMinusFunction (DynamicArray <float> one,DynamicArray <float> two,DynamicArray <float> exp);
bool TestMinusFunction (DynamicArray <char> one,DynamicArray <char> two,DynamicArray <char> exp);

bool TestMinus_X_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
bool TestMinus_X_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
bool TestMinus_X_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);
bool TestMinus_X_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);

bool TestMinus_X_Equal_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
bool TestMinus_X_Equal_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);
bool TestMinus_X_Equal_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
bool TestMinus_X_Equal_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);

bool TestMinus_X_Equal_Mas_Function (DynamicArray <int> one,DynamicArray <int> two,DynamicArray <int> exp);
bool TestMinus_X_Equal_Mas_Function (DynamicArray <float> one,DynamicArray <float> two,DynamicArray <float> exp);
bool TestMinus_X_Equal_Mas_Function (DynamicArray <char> one,DynamicArray <char> two,DynamicArray <char> exp);
bool TestMinus_X_Equal_Mas_Function (DynamicArray <double> one,DynamicArray <double> two,DynamicArray <double> exp);

bool TestMultFunction (DynamicArray <int> one,DynamicArray <int> two,DynamicArray <int> exp);
bool TestMultFunction (DynamicArray <double> one,DynamicArray <double> two,DynamicArray <double> exp);
bool TestMultFunction (DynamicArray <float> one,DynamicArray <float> two,DynamicArray <float> exp);
bool TestMultFunction (DynamicArray <char> one,DynamicArray <char> two,DynamicArray <char> exp);

bool TestMult_X_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
bool TestMult_X_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);
bool TestMult_X_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
bool TestMult_X_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);

bool TestMult_X_Eual_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
bool TestMult_X_Eual_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
bool TestMult_X_Eual_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);
bool TestMult_X_Eual_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);

bool TestMult_X_Equal_Mas_Function (DynamicArray <int> one,DynamicArray <int> two,DynamicArray  <int> exp);
bool TestMult_X_Equal_Mas_Function (DynamicArray <char> one,DynamicArray <char> two,DynamicArray  <char> exp);
bool TestMult_X_Equal_Mas_Function (DynamicArray <double> one,DynamicArray <double> two,DynamicArray  <double> exp);
bool TestMult_X_Equal_Mas_Function (DynamicArray <float> one,DynamicArray <float> two,DynamicArray  <float> exp);


bool TestDivFunction (DynamicArray <int> one,DynamicArray <int> two,DynamicArray <int> exp);
bool TestDivFunction (DynamicArray <char> one,DynamicArray <char> two,DynamicArray <char> exp);
bool TestDivFunction (DynamicArray <double> one,DynamicArray <double> two,DynamicArray <double> exp);
bool TestDivFunction (DynamicArray <float> one,DynamicArray <float> two,DynamicArray <float> exp);

bool TestDiv_X_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
bool TestDiv_X_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);
bool TestDiv_X_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
bool TestDiv_X_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);

bool TestDiv_X_Eual_Function (DynamicArray <int> one,int x,DynamicArray <int> exp);
bool TestDiv_X_Eual_Function (DynamicArray <float> one,float x,DynamicArray <float> exp);
bool TestDiv_X_Eual_Function (DynamicArray <double> one,double x,DynamicArray <double> exp);
bool TestDiv_X_Eual_Function (DynamicArray <char> one,char x,DynamicArray <char> exp);

bool TestDiv_X_Eual_Mas_Function (DynamicArray <int> one,DynamicArray <int> two,DynamicArray <int> exp);
bool TestDiv_X_Eual_Mas_Function (DynamicArray <char> one,DynamicArray <char> two,DynamicArray <char> exp);
bool TestDiv_X_Eual_Mas_Function (DynamicArray <double> one,DynamicArray <double> two,DynamicArray <double> exp);
bool TestDiv_X_Eual_Mas_Function (DynamicArray <float> one,DynamicArray <float> two,DynamicArray <float> exp);
