## [Problem 1](1/1.cpp)
> 用递归编程。</br>
> 要求如下：</br>

```
ack(0, n) = n + 1
ack(m, 0) = m + 1
ack(m, n) = ack(m - 1, n - 1)
```
> 样例输入：
```
1 2
9 3
6 4
1 49
34 41
```
> 样例输出：
```
2
7
3
49
8
```
## [Problem 2](2/2.cpp)
> 写一个char* intToStr(int a)函数，将一个整型数转换成字符串。
## [Problem 3](3/3.cpp)
> 写一个swap(int a[], int m, int n)将数组的前m项与后n项互换。
## Problem 4
## [main](4/main.cpp)|[Date.h](4/Date.h)|[Date.cpp](4/Date.cpp)|[Employee.h](4/Employee.h)|[Employee.cpp](4/Employee.cpp)
> 写两个类</br>
> （1）写一个日期Date类</br>
> 数据成员有年、月、日，成员函数有无参数构造函数、设置年月日的函数 setDate，还有一个打印函数display。</br>
> （2）写一个员工Employee类</br>
> 数据成员有工号、姓名、身份证号、出生日期、受聘日期、 聘用年限、月薪，成员函数有构造函数、改变出生日期函数、改变聘用年限函数、改变月薪函数、续聘函数 (要求当续聘后的年龄大于 60 时给提示不能续聘)。


题目参考自：https://blog.csdn.net/qq_32925781/article/details/79413824