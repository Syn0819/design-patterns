#ifndef __PROXY_H
#define __PROXY_H
#include "realSubject.h"
#include "subject.h"

class proxy : public subject {
public:
	proxy();
	virtual ~proxy();

	void request();

private:
	void afterRequest();
	void preRequest();	
	realSubject *m_pRealSubject;

};

#endif