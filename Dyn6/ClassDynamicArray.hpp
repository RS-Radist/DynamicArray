#ifndef ClassDynamicArray_hpp
#define ClassDynamicArray_hpp
#include <stdio.h>

template <typename T>
class DynamicArray
{
private:
    size_t size;   // размер массива динам. памяти
    size_t current_idx; // реальный размер массива
    T * ar; // массив
public:
    DynamicArray(size_t size=0);
    DynamicArray(const DynamicArray& obj); // To Do / Конструктор копирования
    DynamicArray& operator=(const DynamicArray& obj); // Оператор копирования
    int Get (size_t index);
    void Push (T a);
    size_t GetSize() const;
    size_t GetCapacity() const;
    
    
    friend DynamicArray operator+(const DynamicArray& l, const DynamicArray& r);//+
    friend DynamicArray operator+(const DynamicArray& l, T x);//+
    friend DynamicArray operator-(const DynamicArray& l,const DynamicArray& r);//+
    friend DynamicArray operator-(const DynamicArray& l,T x);//+
    friend DynamicArray operator*(const DynamicArray& l,T x);//+
    friend DynamicArray operator*(const DynamicArray& l,const DynamicArray& r);//+
    friend DynamicArray operator/(const DynamicArray& l,T x);//+
    friend DynamicArray operator/(const DynamicArray& l,const DynamicArray& r);//+
    friend bool operator==(const DynamicArray& l,const DynamicArray& r);//+  ??
    T& operator[](int idx); // one[0] = 12;   ??
    const T& operator[](int idx) const;     //??
    DynamicArray& operator++(); // Prefix +
    DynamicArray& operator--(); // Prefix +
    DynamicArray operator++(int); // Postfix +
    DynamicArray operator--(int); // Postfix +
    void* operator new[](size_t size);
    void operator delete[](void* ptr);
    
    
    
    //no Friend
    DynamicArray& operator+=(T x);//+
    DynamicArray& operator-=(T x);//+
    DynamicArray& operator/=(T x);//+
    DynamicArray& operator*=(T x);//+
    DynamicArray& operator+=(const DynamicArray& x);
    DynamicArray& operator-=(const DynamicArray& x);//+
    DynamicArray& operator/=(const DynamicArray& x);//+
    DynamicArray& operator*=(const DynamicArray& x);//+
    T * GetR()
    {
        return ar;
    }
private:
    static bool IsArraysEqual(const DynamicArray<T>& one, const DynamicArray<T>& two)
    {
        if(one.GetSize() != two.GetSize())
            return false;
        
        for (int i =0; i<one.GetSize(); ++i)
        {
            if(one[i]!=two[i])
                return false;
        }
        return true;
    }
};


#endif
