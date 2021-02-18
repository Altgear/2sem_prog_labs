#include <cstddef>
#include <iostream>
#ifndef VECTOR_H__
#define VECTOR_H__

class Vector
{
private:
    int* data;
    std::size_t length;
    std::size_t capacity;
    void incCapacity(); // ok
   


public:
    Vector(); // ok
    explicit Vector(const Vector& other);// ok
    Vector(const std::size_t& size, const int* initValue); // !! // ok
    ~Vector(); //ok
    Vector& operator=(const Vector& other); // ok

    int& operator[](const std::size_t& index) const; // add const // ok
    std::size_t size() const; // ok
    int find(const int& value) const;// ok
    void push_back(const int& value); // ok
    void replace(const int& oldValue, const int& newValue);// ok
    

    friend std::ostream& operator<<(std::ostream& out, Vector& vector);
    

};
#endif //VECTOR_H__
