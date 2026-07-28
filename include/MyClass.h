#pragma once

class MyClass {
public:
    MyClass();
    ~MyClass();
    
    void DoSomething();
    
private:
    // Добавить ручное управление ресурсами
    int* data;
};