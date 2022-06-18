#ifndef __ADAPTER_H
#define __ADAPTER_H

#include "adaptee.h"
#include "target.h"
class adapter : public target
{
private:
    adaptee *m_adaptee;
public:
    adapter(adaptee *input);
    virtual ~adapter();
    virtual void dosomething();
};

#endif