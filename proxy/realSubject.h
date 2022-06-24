#ifndef __REALSUBJECT_H
#define __REALSUBJECT_H
#include <stdio.h>
#include "subject.h"

class realSubject : public subject {
public:
    realSubject();
    virtual ~realSubject();
    void request();
};

realSubject::realSubject()
{
}

realSubject::~realSubject() 
{    
}

void realSubject::request() {
    printf("real subject request.\n");
}

#endif