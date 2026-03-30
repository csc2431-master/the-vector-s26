#pragma once

#include <string>


class Vector{
    float* _elements;
    size_t _size;
public:
    Vector(size_t size);
    ~Vector();
    Vector(const Vector& vector);
    Vector operator=(const Vector& rhs);
    void SetElement(size_t position, float value);
    Vector Sum(const Vector& rhs)const;
    std::string ToString()const;
    bool IsValid()const;
};
