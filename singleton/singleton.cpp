#include <iostream>
#include "singleton.h"
#include <mutex>

std::mutex mtx;
singleton *singleton::instance = nullptr;

singleton::singleton() {
    
}

singleton::~singleton() {
    delete instance;
}

// 懒汉式，实例的构造在调用时进行
// 未考虑多线程
/*
singleton* singleton::getInstance() {
    if(instance != nullptr) {
        return instance;
    }
    return new singleton();
}
*/

// 考虑多线程
// 双重检测，为了防止在等待上锁的时候，有其他线程实例化了该对象
singleton* singleton::getInstance() {
    if(instance == nullptr) {
        mtx.lock()
        if(instance == nullptr) {
            return new singleton();
        }
    }
    return instance;
}

void singleton::dosomething() {
    std::cout << "dosomething" << std::endl;
}

int main() {
    auto single = singleton::getInstance();
    single->dosomething();
    return 0;
}