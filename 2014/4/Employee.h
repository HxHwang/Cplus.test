#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "Date.h"
#include <string>

class Employee {
public:
	Employee(std::string name, std::string number, std::string idNumber,
		Date birthday, Date hireDay, Date deadline, int salary);
	void setBirthDay(Date d);
	void setDeadline(Date d);
	void setSalary(int s);
	void extentHireDay(int y);
	void display() const;
private:
	std::string name;		// ����
	std::string number;		// ����
	std::string idNumber;	// ���֤��
	Date birthday;		// ��������
	Date hireDay;		// ��Ƹ����
	Date deadline;		// Ƹ������
	int salary;			// ��н
};

#endif // !_EMPLOYEE_H_