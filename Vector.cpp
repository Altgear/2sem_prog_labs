#include "Vector.h"
#include <iostream>

Vector::Vector() : length(0), capacity(defaultCapacity) {
    data = new int[defaultCapacity];
}

Vector::Vector(const std::size_t& size, const int* initValue) {
    if (size != 0 && initValue != nullptr) {
        capacity = length = size;
        data = new int[capacity];
        for (std::size_t i = 0; i < length; i++) {
            data[i] = initValue[i];
        }
    } else {
        length = 0;
        capacity = defaultCapacity;
        data = new int[capacity];
        std::cerr << "Param constructor error: vector size = 0 or data is invalid\n"
        << "empty vector has been created\n";  
    }
}

Vector::Vector(const Vector& other) {
    if (other.length != 0 && other.data != nullptr) {
        length = other.length;
        capacity = other.capacity;
        data = new int[capacity];
        for (std::size_t i = 0; i < length; i++) {
            data[i] = other.data[i];
        }
    } else {
        length = 0;
        capacity = defaultCapacity;
        data = new int[capacity];
        std::cerr << "Copy constructor error: vector size = 0 or data is invalid\n"
        << "empty vector has been created\n";  
    }
}

Vector::~Vector() {
    if (data != nullptr){
        delete [] data;
    }
}

const int& Vector::operator[](const std::size_t& index) const {
  return data[index];
}

std::size_t Vector::size() const {
    return length;
}

void Vector::push_back(const int& value) {
    if (length != capacity) {
        data[length] = value;
        length++;
    } else {
        incCapacity();  
        data[length] = value;
        length++;
    }
}

 void Vector::incCapacity() {
        capacity += defaultCapacity;
        int* tmpData = new int[capacity];
        for (std::size_t i = 0; i < length; i++) {
            tmpData[i] = data[i];
        }
        delete[] data;
        data = tmpData;
        tmpData = nullptr;
    }

int Vector::find(const int& value) const {
    for (std::size_t i = 0; i < length; i++) {
        if (data[i] == value) {
            return i;
        }
    }
    return -1;
}

void Vector::replace(const int& oldValue, const int& newValue) {
    int result = find(oldValue);
    if (result >= 0) {
        data[result] = newValue;
    } else {
        std::cout << "No such element:"<< oldValue << std::endl;
    }
}

Vector& Vector::operator=(const Vector& other) {
    if (this != &other) {
        if (data != nullptr) {
            delete[] data;
        }
        length = other.length;
        capacity = other.capacity;
        if (other.data == nullptr) {
            data = nullptr;
        } else {
            data = new int[capacity];
            for (std::size_t i = 0; i < length; i++) {
                data[i] = other.data[i];
            }
        }
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, Vector& vector) {
    for (std::size_t i = 0; i < vector.size(); i++) {
            out.width(4);
            out << vector[i];
        }
    out << std::endl ;
    return out;
}

const std::size_t Vector::defaultCapacity = 10;
