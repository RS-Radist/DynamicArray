#include <iostream>
#include "ClassDynamicArray.hpp"
#include "hpp.hpp"
#include "UniTest.h"

int main()
{
    /*
    int ar1[3] = {2, 4, 7};
    int ar2[5] = {5, 8, 3, 2, 9};
    
    // ar1 - ar2
    
    int ret[3] = {0};
    
    int k = 0;
    for(int i = 0; i < 3; ++i)
    {
        int j = 0;
        for(; j < 5; ++j)
        {
            if(ar1[i] == ar2[j])
            {
                break;
            }
        }
        if( j == 5 )
        {
            ret[k++] = ar1[i];
        }
    }
    */
    /*
    DynamicArray a1(5);                     // Первый массив
    RandomArray(a1, 5);                     // Случайные цыфры первого массива
    ShowArray(a1);                          // Вывод массива на экран
    DynamicArray a2(2);                     // Второй массив
    RandomArray(a2, 2);                     // Случайные цыфры второго массива
    ShowArray(a2);                          // Вывод второго массива на экран
    DynamicArray z=a1+a2;                   // Создание массива массива при сумировании 1 и 2
    TEST(TestPlusFunction(a1,a2,z), "Test PLUS + ");// Функция для проверки массива.
    ShowArray(z);                           // Вывод третьего массива на экран
    
    std::cout<<"\n";
    std::cout<<"Test Minus\n";
    DynamicArray TestMinus(5);
    RandomArray(TestMinus, 5);
    ShowArray(TestMinus);
    
    DynamicArray TestMinus1(3);
    RandomArray(TestMinus1, 2);
    ShowArray(TestMinus1);
    DynamicArray SumTestminus = TestMinus - TestMinus1;
    TEST(TestMinusFunction(TestMinus,TestMinus1,SumTestminus), "Test MINUS - ");
    ShowArray(SumTestminus);
    std::cout<<"\n";
    ////////////////////////////
    std::cout<<"Test Mult * 2\n";
    DynamicArray TestMultX2(3);
    RandomArray(TestMultX2, 3);
    ShowArray(TestMultX2);
    DynamicArray SumArrayX2=TestMultX2*2;
    TEST(TestMultFunction(TestMultX2,SumArrayX2),"Test Multiplication * ");
    ShowArray(SumArrayX2);
    std::cout<<"\n";
    std::cout<<"Test Div / 2\n";
    DynamicArray TestDivX2(3);
    RandomArray(TestDivX2, 3);
    ShowArray(TestDivX2);
    DynamicArray SumArrayDiv=TestDivX2/2;
    TEST (TestDivFunction (TestDivX2,SumArrayDiv),"Test Division / ");
    ShowArray(SumArrayDiv);
    std::cout<<"\n";
    std::cout<<"Test EUAL ==\n";
    DynamicArray TesEqual(3);
    RandomArray(TesEqual, 3);
    ShowArray(TesEqual);
    DynamicArray TesEqual2(3);
    RandomArray(TesEqual2, 3);
    ShowArray(TesEqual2);
    DynamicArray SumArrayEual;
    TEST (IsArraysEqual(TesEqual,SumArrayEual),"Test Euqal == ");
    ShowArray(SumArrayEual);
     */
    // Реализация коструктора копировния.
    /*
    DynamicArray Mas(5);
    RandomArray(Mas,5);
    ShowArray(Mas);
    std::cout<<std::endl;
    DynamicArray Mas1(5);
    RandomArray(Mas1,5);
    ShowArray(Mas1);
    // Оператор копирования
    DynamicArray  CopyMas(Mas1);
    ShowArray(CopyMas);
    CopyMas.~DynamicArray();
    ShowArray(Mas1);
    
    CopyMas=Mas; // copyMas.operator=(Mas)
    ShowArray(Mas);
    Mas+=5;
    ShowArray(Mas);
    Mas-=2;
    ShowArray(Mas);
     */
    /*
    DynamicArray Mas(5);
    RandomArray(Mas, 5);
    ShowArray(Mas);
    std::cout<<std::endl;
    DynamicArray Mas1(5);
    RandomArray(Mas1, 5);
    Mas*=2;
    ShowArray(Mas);
     */
    /*
    //    Проверка Методов
    DynamicArray Mas(5);
    RandomArray(Mas,5);
    ShowArray(Mas);
    std::cout<<std::endl;
    DynamicArray Mas1(5);
    RandomArray(Mas1,5);
    ShowArray(Mas1);
    std::cout<<" DynamicArray operator+(const DynamicArray& r); ";
    DynamicArray sum=Mas+Mas1;
    ShowArray(sum);
    std::cout<<std::endl;
    std::cout<<" DynamicArray operator+(int x); ";
    DynamicArray sum1=Mas+5;
    ShowArray(sum1);
    std::cout<<std::endl;
    std::cout<<" DynamicArray operator-(const DynamicArray& r); "; // Объяснить как считается минус
    // Создаем новые
    DynamicArray Mass(5);
    RandomArray(Mass,5);
    DynamicArray Mass1(5);
    RandomArray(Mass1,5);
    DynamicArray sum2=Mass-Mass1;
    ShowArray(sum2);
    std::cout<<std::endl;
    std::cout<<" DynamicArray operator-(int x); ";
    DynamicArray MassMinus(5);
    RandomArray(MassMinus,5);
    ShowArray(MassMinus);
    DynamicArray sumMinus2=MassMinus-3;
    std::cout<<"СТАЛ--> ";
    ShowArray(sumMinus2);
      */
    
    
    //TEST 1  +
    /*
    int size=5;
    int dynamycSize;
    DynamicArray Mas(2);
    RandomArray(Mas,2);
    ShowArray(Mas);
    std::cout<<std::endl;
    DynamicArray Mas1(size);
    RandomArray(Mas1,size);
    ShowArray(Mas1);
    DynamicArray MasSum=Mas+Mas1;
    TEST(TestPlusFunction(Mas, Mas1, MasSum), "TEST + (Mas + Mas) ");
    std::cout<<std::endl;
    ShowArray(MasSum);
    */
    
    //TEST 2   +
    
    DynamicArray <int> Mas(2);
    RandomArray(Mas,2);
    ShowArray (Mas);
    std::cout<<std::endl;
    int x=2;
    DynamicArray <int> MasSum=Mas+x;
    TEST(TestPlus_X_Function (Mas, x, MasSum), "TEST + (Mas + X) ");
    std::cout<<std::endl;
    ShowArray<int>(MasSum);
    
    
    //TEST 3   -
    /*
    DynamicArray Mas(5);
    RandomArray(Mas,5);
    ShowArray(Mas);
    std::cout<<std::endl;
    int x=5;
    Mas+=x;
    DynamicArray Massum(Mas);
    TEST(TestPlus_X_Equal_Function(Mas, x, Massum), "TEST + (Mas + X)");
    std::cout<<std::endl;
    ShowArray(Massum);
    */
    
    //TEST 4     -
    /*
    DynamicArray Mas(5);
    RandomArray(Mas,5);
    ShowArray(Mas);
    std::cout<<std::endl;
    DynamicArray Mas1(5);
    RandomArray(Mas1,5);
    ShowArray(Mas1);
    Mas+=Mas1;
    DynamicArray Summas=Mas;
    TEST(TestPlus_X_Equal_Mas_Function(Mas, Mas1, Summas), "TEST + (Mas + Mas1)");
    std::cout<<std::endl;
    ShowArray(Summas);
    */
    
    //TEST 5      -
    /*
     DynamicArray Mas(5);
     RandomArray(Mas,5);
     ShowArray(Mas);
     std::cout<<std::endl;
     DynamicArray Mas1(5);
     RandomArray(Mas1,5);
     ShowArray(Mas1);
     DynamicArray MasSum=Mas-Mas1;
     TEST(TestMinusFunction(Mas, Mas1, MasSum), "TEST + (Mas - Mas1)");
     std::cout<<std::endl;
     ShowArray(MasSum);
    */
    
    //TEST 6     -
    /*
    DynamicArray Mas(5);
    RandomArray(Mas,5);
    ShowArray(Mas);
    std::cout<<std::endl;
    int x=3;
    DynamicArray MasSum=Mas-x;
    TEST(TestMinus_X_Function(Mas, x, MasSum), "TEST + (Mas + Mas)");
    std::cout<<std::endl;
    ShowArray(MasSum);
    */
    
    //TEST 7               //-
    /*
     DynamicArray Mas(10);
     RandomArray(Mas,10);
     ShowArray(Mas);
     std::cout<<std::endl;
     Mas-=6;
     DynamicArray Sum=Mas;
     TEST(TestMinus_X_Equal_Function(Mas, 6, Sum), "TEST + (Mas - X)");
     std::cout<<std::endl;
     ShowArray(Sum);
    */
    
    //TEST 8      +
    /*
     DynamicArray Mas(5);
     RandomArray(Mas,5);
     ShowArray(Mas);
     std::cout<<std::endl;
     DynamicArray Mas1(5);
     RandomArray(Mas1,5);
     ShowArray(Mas1);
     Mas-=Mas1;
     DynamicArray Sum=Mas;
     TEST(TestMinus_X_Equal_Mas_Function(Mas, Mas1, Sum), "TEST + (Mas -= Mas1)");
     std::cout<<std::endl;
     ShowArray(Sum);
     */
     //TEST 9     +
    /*
    DynamicArray Mas(5);
    RandomArray(Mas,5);
    ShowArray(Mas);
    std::cout<<std::endl;
    DynamicArray Mas1(5);
    RandomArray(Mas1,5);
    ShowArray(Mas1);
    DynamicArray Sum=Mas*Mas1;
    TEST(TestMultFunction(Mas, Mas1, Sum), "TEST + (Mas * Mas1)");
    std::cout<<std::endl;
    ShowArray(Sum);
    */
    //TEST 10   +
    /*
     DynamicArray Mas(5);
     RandomArray(Mas,5);
     ShowArray(Mas);
     std::cout<<std::endl;
     int x=2;
     DynamicArray Sum=Mas*x;
     TEST(TestMult_X_Function(Mas, x, Sum), "TEST + (Mas * X)");
     std::cout<<std::endl;
     ShowArray(Sum);
    */
    //TEST 11  +-
    /*
     DynamicArray Mas(5);
     RandomArray(Mas,5);
     ShowArray(Mas);
     std::cout<<std::endl;
     DynamicArray Mas1(5);
     RandomArray(Mas1,5);
     ShowArray(Mas1);
     std::cout<<std::endl;
     Mas*=Mas1;
     DynamicArray Sum(Mas);
     TEST(TestMult_X_Equal_Mas_Function (Mas, Mas1, Sum), "TEST + (Mas * X)");
     std::cout<<std::endl;
     ShowArray(Sum);
    */
}







/*
 + - * /  Арифметические
 < > == <= >= != Логические
 && || Булевые
 [] оператор индексации
 = оператор присваивания
 
 ++ -- унарные
 постфиксные obj++ obj--
 префиксные ++obj --obj
 
 += -= /= *=
 
 int double DynamicArray - операторы преобразования типов
 
 new delete new[] delete[] - операторы выделения динамической памяти
 
 */
