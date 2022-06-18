#include <iostream>
#include "adapter.h"


adapter::adapter(adaptee *input) {
    m_adaptee = input;
}

adapter::~adapter() {
    delete m_adaptee;
}

void adapter::dosomething() {
    m_adaptee->dosomething();
}

int main() {

    adaptee *ee = new adaptee();
    target *tar = new adapter(ee);
    tar->dosomething();

    return 0;
}