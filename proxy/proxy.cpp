#include "proxy.h"
#include <iostream>
using namespace std;


proxy::proxy(){
	m_pRealSubject = new realSubject();
}

proxy::~proxy(){
	delete m_pRealSubject;
}

void proxy::afterRequest(){
	cout << "Proxy::afterRequest" << endl;
}


void proxy::preRequest(){
	cout << "Proxy::preRequest" << endl;
}


void proxy::request(){
	preRequest();
	m_pRealSubject->request();
	afterRequest();
}

int main() {
    proxy proxy;
	proxy.request();
	
	return 0;
}