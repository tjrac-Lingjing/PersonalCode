#include<iostream>
#include<cstdio>
using namespace std;
bool flag ;
int year,month,day;
int index = -1;
string star[]={"ˮƿ��","˫����","������","��ţ��","˫����","��з��","ʨ����","��Ů��","�����","��Ы��","������","Ħ����"};
void inputDay()
{
	cout<<"��������Ҫ����·ݣ�";cin>>month; 
	cout<<"�����뵱�µ����ڣ�";cin>>day; 
}
bool Error()
{
	
	cout<<"����������������������롣"<<endl;cout<<endl; 
	return false;
}
bool checkError()
{
	if(month>12||month<1) return Error();
	if(month == 2){
		if(day<1||day>29) return Error();
	}
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		if(day<1||day>31)return Error();
	}
    if(month==4||month==6||month==9||month==11){
		if(day<1||day>30)return Error();
	}
    return true;
}
void analseYourbirth()
{
	switch(month)
	{
		case 1:
			if(day>=21) index = 0;
			else index = 11;
			break;
		case 2:
			if(day>=20) index = 1;
			else index = 0;
			break;
		case 3:
			if(day>=21) index = 2;
			else index = 1;
			break;
		case 4:
			if(day>=21) index = 3;
			else index = 2;
			break;
		case 5:
			if(day>=22) index = 4;
			else index = 3;
			break;
		case 6:
			if(day>=22) index = 5;
			else index = 4;
			break;
		case 7:
			if(day>=23) index = 6;
			else index = 5;
			break;
		case 8:
			if(day>=23) index = 7;
			else index = 6;
			break;
		case 9:
			if(day>=24) index = 8;
			else index = 7;
			break;
		case 10:
			if(day>=24) index = 9;
			else index = 8;
			break;
		case 11:
			if(day>=23) index = 10;
			else index = 9;
			break;
		case 12:
			if(day>=22) index = 11;
			else index = 10;
			break;
	}
}
void show()
{
	cout<<"���գ�"<<month<<"��"<<day<<"��"<<",���������"<<star[index]<<endl;
}
int main()
{
	do{
		inputDay();
	}while(!checkError());
	analseYourbirth();show();
	return 0;
}
