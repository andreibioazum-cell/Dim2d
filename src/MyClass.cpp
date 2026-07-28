#include "MyClass.h"

MyClass::MyClass() {
    // Выделение памяти вручную
    data = new int[100];
}

MyClass::~MyClass() {
    // Освобождение памяти вручную
    delete[] data;
}

void MyClass::DoSomething() {
    // Использование выделенной памяти
    // ...
}