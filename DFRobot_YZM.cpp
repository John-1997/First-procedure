#include <DFRobot_YZM.h>
#include <string.h>
DFRobot_YZM::DFRobot_YZM(){
/*调用父类同名函数*/
	Serial.println("construct DFRobot_YZM!!!");
}
DFRobot_YZM::~DFRobot_YZM(){
	Serial.println("~destruct DFRobot_YZM");	
}
int DFRobot_YZM::setName(const char * name)
{
	if(name==NULL){
		return -1;
	}
	if((strlen(name)==0)||(strlen(name)>20)){
		return -2;
	}
	_name=name;	
}
int DFRobot_YZM::setAge(uint8_t age)
{
	if(age<18||age>100){
		return -1;
	}
	_age=age;	
}
int DFRobot_YZM::setAge(String age)
{
	uint8_t tmp=age.toInt();
	if(tmp<18||tmp>100){
		return -1;
	}
	_age=tmp;	
}
String DFRobot_YZM::getName(void)
{
	return _name;
}
int DFRobot_YZM::getAge(void)
{
	return _age;
}














