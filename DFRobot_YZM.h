#ifndef __DFRobot_YZM_H
#define __DFRobot_YZM_H
#include<Arduino.h>

class DFRobot_YZM
{
public:
	DFRobot_YZM();
	~DFRobot_YZM();
	
	int setName(const char *name);
/*设定姓名的值为常量*/
	int setAge(uint8_t age);
/*设定年龄的值，通过无符号8位数*/
	int setSalary(uint8_t salary);
/*设定年工资的值，通过无符号8位数*/
	int setAge(String age);
/*设定年龄的值为字符串类型*/
	String getName(void);
/*取得姓名函数的值*/
	int getAge(void);
/*取得年龄函数的值*/
	int getSalary(void);
/*取得工资函数的值*/
private:
	String _name;
	uint8_t _age;
	uint8_t _salary;
};
#endif
