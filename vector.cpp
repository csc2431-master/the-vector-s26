#include "vector.h"

#include <string>
#include <sstream>


Vector::Vector(size_t size): _size(size){
    _elements = new float[_size];
    for (size_t i = 0; i < _size; i++){
            _elements[i] = 0.0;
    }
    
}
Vector::Vector(const Vector& vector):_size(vector._size){
    _elements = new float[_size];
    for (size_t i=0; i<_size; i++)
        _elements[i] = vector._elements[i];
}
Vector Vector::operator=(const Vector& rhs){
    delete[] _elements;
    _size = rhs._size;
    _elements = new float[_size];
    for (size_t i=0; i<_size; i++)
        _elements[i] = rhs._elements[i];
    return *this;
}

Vector::~Vector(){
    delete[] _elements;
}
// Vector(const Vector& vector);
// Vector operator=(const Vector& rhs);
void Vector::SetElement(size_t position, float value){
    if (position >= _size){
        return;
    }
    _elements[position] = value;
}
Vector Vector::Sum(const Vector& rhs)const{
    if (_size != rhs._size){
        return Vector(0);
    }
    Vector retVal(_size);
    for (size_t i=0; i<_size; i++){
        retVal._elements[i] = _elements[i] + rhs._elements[i];
    }
    return retVal;
}
std::string Vector::ToString()const{
    std::stringstream ss;
    ss << "[";
    for (size_t i=0; i<_size; i++){
        if (i != _size - 1){
            ss << _elements[i] << ", ";
        }else{
            ss << _elements[i] << "]";
        }
    }
    return ss.str();
}
bool Vector::IsValid()const{
    return _size == 0;
}
