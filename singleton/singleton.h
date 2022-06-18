#ifndef __SINGLETON_H
#define __SINGLETON_H

class singleton {
private:
    static singleton *instance;
    singleton();

public:
    virtual ~singleton();
    static singleton* getInstance();
    void dosomething();
};

#endif