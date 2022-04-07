/***** string�� *****/

// ���캯��
string(const char* s);		// ʹ��c������ʽ���ַ���s��ʼ��string
string(int n, char c);		// ʹ��n���ַ�c��ʼ��string
string s;					// Ĭ�Ϲ��캯��
string s = "Hello World!";	// ���ø��ƹ��캯����ʼ��

// ��������
size_t capacity() const;	// ��ǰ����
size_t max_size() const;	// ��ǰstring�����п��Դ�ŵ�����ַ�������
size_t size() const;		// ��ǰ�ַ�����С
size_t length() const;		// ��ǰ�ַ����ĳ���
bool empty() const;			// ��ǰ�ַ����Ƿ�Ϊ��
void resize(size_t n, char c = '\000');	// �ѵ�ǰ�ַ����Ĵ�С����Ϊn����c��������Ĳ���

// ��ֵ����
string& operator=(const string& s);	// ���ַ���s��ֵ����ǰ�ַ���
string& assign(const char* s);		// ��c������ʽ���ַ���s��ֵ
string& assign(const char* s, size_t n);	// ��c������ʽ���ַ���sǰn���ַ���ֵ
string& assign(const string& s);	// ���ַ���s��ֵ����ǰ�ַ���
string& assign(size_t n, char c);	// ��n���ַ�c��ֵ���ַ���
string& assign(const string& s, int start, int n);	// ���ַ���s�д�start��ʼ��n���ַ���ֵ����ǰ�ַ���
string& assign(const_iterator first, const_iterator last);	// ��first��last������֮��Ĳ��ָ�ֵ����ǰ�ַ���

// �Ƚϲ��� ���ڷ���1��С�ڷ���-1�����ڷ���0
int compare(const string& s) const;	// ��string�Ƚ�
int compare(int pos, int n, const char* s) const;	// ��c������ʽ���ַ���s��pos��ʼ��n���ַ��Ƚ�
int compare(int pos1, int n1, const string& s, int pos2, int n2) const;	
													// ��ǰstring���ַ�����pos1��ʼ��n1���ַ���s��pos2��ʼ��n2���ַ��Ƚ�


// ȡ�Ӵ�
string substr(int pos = 0, int n = npos) const;		// ���ش�pos��ʼ��n���ַ���ɵ��ַ�����Ĭ��ȡ����ǰ�ַ��������

// ����
void swap(string& s2);		// ������ǰ�ַ�����s2��ֵ

// ����
size_t find(char c, int pos = 0) const;			// ��pos��ʼ�����ַ�c�ڵ�ǰ�ַ����е�λ��
size_t find(const char* s, int pos = 0) const;	// ��pos��ʼ�����ַ���s�ڵ�ǰ�ַ����е�λ��
size_t find(const char* s, int pos, int n) const;	// ��pos��ʼ�����ַ���sǰn���ַ��ڵ�ǰ�ַ����е�λ��
size_t find(const string& s, int pos = 0) const;	// ��pos��ʼ�����ַ���s�ڵ�ǰ�ַ����е�λ��

// �滻
string& replace(int p, int n, const char* s);	// ɾ����p��ʼ��n���ַ���Ȼ����p�����봮s
string& replace(int p, int n, const char* s, int n);	// ɾ����p��ʼ��n���ַ���Ȼ����p�������ַ���s��ǰn���ַ�
string& replace(int p, int n, const string& s);	// ɾ����p��ʼ��n���ַ���Ȼ����p�����봮s
string& replace(int p, int n, const string& s, int pos, int n1);	// ɾ��...Ȼ����p�����봮s��pos��ʼ��n1���ַ�
string& replace(int p, int n, int n1, char c);	// ɾ��...Ȼ����p������n1���ַ�c
string& raplace(iterator first0, iterator last0, const char* s);	// ��[first0,last0)֮��Ĳ����滻Ϊs
string& replace(iterator first0, iterator last0, const char* s, int n);	// ...�滻Ϊs��ǰn���ַ�
string& replace(iterator first0, iterator last0, const string& s);	// ...�滻Ϊs
string& replace(iterator first0, iterator last0, int n, char c);	// ...�滻Ϊn���ַ�c
string& replace(iterator first0, iterator last0, const_iterator first1, const_iterator last1);
																	// [first0,last0)�滻Ϊ[first1,last0)
// ɾ��
iterator erase(iterator first, iterator last);	// ɾ��[first,last)����ɾ�����������λ��
iterator erase(iterator it);		// ɾ��itָ����ַ���������ɾ�����������λ��
string& erase(int pos = 0, int n = npos);		//  ��pos��ʼɾ��n���ַ��������޸ĺ���ַ�����Ĭ��ɾ������

// ��c����ַ�����ת��
size_t copy(char* s, size_t count, size_t pos);	// �ڵ�ǰstring�ַ�����posλ�����ิ��count���ַ���s��ָ����ڴ���
												// ע��Ĭ�Ͽ��ܲ��Ḵ��'\0'
/***** string�� *****/


/***** c����cstring�еĲ��ֺ��� *****/
char* strtok(char* str, const char* delim);		// ��str�а���delim�ָ��ַ��������û�п��Էָ���ַ����򷵻�nullptr
// ��������ʹ�øú����ָ���Ҫ��str����Ϊnullptr��ͬʱ��strtok���޸�ԭ�����ַ����������е�delim�滻Ϊ'\0'

/***** c����cstring�еĲ��ֺ��� *****/