#include<iostream>
using namespace std;

#define MAX_NUMBER  100

//设计联系人结构体
struct Person
{
	string m_Name;

	int m_Sex;

	int m_Age;

	string m_Phone;

	string m_Addr;
};

//通讯录结构体 
struct Addressbooks
{
	struct Person personArr[MAX_NUMBER];

	int m_Size;
};

//添加联系人
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX_NUMBER)
	{
		cout << "通讯录已满！" << endl;
		return ;
	}
	else
	{
		//添加姓名
		string name;
		cout << "请输入姓名: " << endl;
		cin >> name;
		abs->personArr[abs->m_Size].m_Name = name;

		//添加性别
		int sex;
		cout << "请输入性别: " << endl;
		cout << "1----男: " << endl;
		cout << "2----女: " << endl;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArr[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入 " << endl;
		}

		//添加年龄
		int age;
		cout << "请输入年龄: " << endl;
		cin >> age;
		abs->personArr[abs->m_Size].m_Age = age;

		//添加电话
		string phone;
		cout << "请输入电话: " << endl;
		cin >> phone;
		abs->personArr[abs->m_Size].m_Phone = phone;

		//添加住址
		string addr;
		cout << "请输入地址: " << endl;
		cin >> addr;
		abs->personArr[abs->m_Size].m_Addr = addr;

		//更新通讯录
		abs->m_Size++;

		cout << "添加成功！ " << endl;

		system("pause"); //任意键退出
		system("cls"); //清屏
	}




}

//menu
void showmenu()
{
	cout << "***************************************" << endl;
	cout << "*************1. 添加联系人*************" << endl;
	cout << "*************2. 显示联系人*************" << endl;
	cout << "*************3. 删除联系人*************" << endl;
	cout << "*************4. 查找联系人*************" << endl;
	cout << "*************5. 修改联系人*************" << endl;
	cout << "*************6. 清空联系人*************" << endl;
	cout << "*************0. 退出通讯录*************" << endl;
	cout << "***************************************" << endl;
}


int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	abs.m_Size = 0;

	int select = 0; //创建用户输入变量

	while (true)
	{
		showmenu();

		cin >> select;

		switch (select)
		{
		case 1: //添加联系人
			addPerson(&abs);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}
	
	system("pause");

	return 0;
}