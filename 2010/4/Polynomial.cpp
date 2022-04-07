#include "Polynomial.h"
using namespace std;

Polynomial::Polynomial(const vector<double>& coe) {
	coeficient = coe;
}
Polynomial::Polynomial(const Polynomial& p) {
	coeficient = p.coeficient;
}
void Polynomial::setCoeficient(size_t pos, double val) {
	if (pos < coeficient.size())			// ���ϵ���ڷ�Χ�����������
		coeficient[pos] = val;
	else
		cerr << "The index is out of range.";
}
double Polynomial::getCoeficient(size_t pos) {
	if (pos < coeficient.size())
		return coeficient[pos];
	else
		cerr << "The index is out of range.";
}
Polynomial& Polynomial::operator=(const Polynomial& p) {
	coeficient = p.coeficient;
	return *this;
}
Polynomial Polynomial::operator+(const Polynomial& p) {
	size_t i, j;
	i = j = 0;
	vector<double> temp;		// �ݴ������
	while (i < coeficient.size() && j < p.coeficient.size()) {	// ϵ��������
		temp.push_back(coeficient[i] + p.coeficient[j]);
		++i;
		++j;
	}
	while (i < coeficient.size()) {		// ��һ��ʽ������ʣ��ϵ��
		temp.push_back(coeficient[i]);
		++i;
	}
	while (j < p.coeficient.size()) {	// �ڶ���ʽ������ʣ��ϵ��
		temp.push_back(p.coeficient[j]);
		++j;
	}
	return Polynomial(temp);
}

ostream& operator<<(ostream& output, const Polynomial& p) {
	output << noshowpos << p.coeficient[0];			// ��һ��ϵ���������
	for (size_t i = 1; i < p.coeficient.size(); ++i) {
		if (p.coeficient[i] == 0)		// ���ϵ��Ϊ0������
			continue;
		output << showpos << p.coeficient[i] << "x";	// ��ʾϵ������
		if (i > 1)						// ����1����ʾָ��
			output << "^" << i;
	}
	return output;
}