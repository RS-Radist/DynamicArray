#ifndef hpp_hpp
#define hpp_hpp
#define TEST(testRet, testName) std::cout << testName; \
testRet ? std::cout << "SUCCESS \t" : std::cout << "FAILED \t"

#include <stdio.h>
template <typename T>
void RandomArray(DynamicArray <T> &x, size_t size);
template <typename T>
void ShowArray(DynamicArray <T> &x);
template <typename T>
bool TestPlusFunction (DynamicArray <T> one,DynamicArray <T> two,DynamicArray  <T> exp);
template <typename T>
bool TestPlus_X_Function (DynamicArray <T>one,T x,DynamicArray <T> exp);
template <typename T>
bool TestPlus_X_Equal_Function (DynamicArray <T> one,T x,DynamicArray <T> exp);
template <typename T>
bool TestPlus_X_Equal_Mas_Function (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp);


template <typename T>
bool TestMinusFunction (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp);
template <typename T>
bool TestMinus_X_Function (DynamicArray <T> one,T x,DynamicArray  <T> exp);
template <typename T>
bool TestMinus_X_Equal_Function (DynamicArray <T> one,T x,DynamicArray <T> exp);
template <typename T>
bool TestMinus_X_Equal_Mas_Function (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp);


template <typename T>
bool TestMultFunction (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp);
template <typename T>
bool TestMult_X_Function (DynamicArray <T> one,T x,DynamicArray <T>   exp);
template <typename T>
bool TestMult_X_Eual_Function (DynamicArray <T> one,T x,DynamicArray <T> exp);
template <typename T>
bool TestMult_X_Equal_Mas_Function (DynamicArray <T>one,DynamicArray <T> two,DynamicArray <T> exp);



template <typename T>
bool TestDivFunction (DynamicArray  <T> one,DynamicArray <T> two,DynamicArray <T> exp);
template <typename T>
bool TestDiv_X_Function (DynamicArray <T> one,T x,DynamicArray <T> exp);
template <typename T>
bool TestDiv_X_Eual_Function (DynamicArray <T> one,T x,DynamicArray <T> exp);
template <typename T>
bool TestDiv_X_Eual_Mas_Function (DynamicArray <T> one,DynamicArray <T> two,DynamicArray <T> exp);


#endif /* hpp_hpp */
