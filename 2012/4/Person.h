#ifndef _PERSON_H_
#define _PERSON_H_

#include "Name.h"
#include <iostream>

class Person {
public:
	Person(Name n, std::string nation, std::string s)
		: name(n), nationality(nation), sex(s) {}			// Name����������Ҫ��ʹ��Ĭ�ϸ��ƹ��캯��
	void printName() const {
		name.printName();
	}
	void printNationality() const {
		std::cout << nationality;
	}
private:
	Name name;
	std::string nationality;
	std::string sex;
};

#endif // !_PERSON_H_

