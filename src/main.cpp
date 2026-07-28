#include <memory>

int main() {
    // Ручное управление памятью вместо автоматического
    std::unique_ptr<MyClass> obj = std::make_unique<MyClass>();
    obj->DoSomething();
    
    return 0;
}