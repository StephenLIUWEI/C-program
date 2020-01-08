#include<iostream>
using namespace std;

#define MAX_NUMBER  100

//�����ϵ�˽ṹ��
struct Person
{
	string m_Name;

	int m_Sex;

	int m_Age;

	string m_Phone;

	string m_Addr;
};

//ͨѶ¼�ṹ�� 
struct Addressbooks
{
	struct Person personArr[MAX_NUMBER];

	int m_Size;
};

//�����ϵ��
void addPerson(Addressbooks* abs)
{
	if (abs->m_Size == MAX_NUMBER)
	{
		cout << "ͨѶ¼������" << endl;
		return ;
	}
	else
	{
		//�������
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->personArr[abs->m_Size].m_Name = name;

		//����Ա�
		int sex;
		cout << "�������Ա�: " << endl;
		cout << "1----��: " << endl;
		cout << "2----Ů: " << endl;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArr[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������ " << endl;
		}

		//�������
		int age;
		cout << "����������: " << endl;
		cin >> age;
		abs->personArr[abs->m_Size].m_Age = age;

		//��ӵ绰
		string phone;
		cout << "������绰: " << endl;
		cin >> phone;
		abs->personArr[abs->m_Size].m_Phone = phone;

		//���סַ
		string addr;
		cout << "�������ַ: " << endl;
		cin >> addr;
		abs->personArr[abs->m_Size].m_Addr = addr;

		//����ͨѶ¼
		abs->m_Size++;

		cout << "��ӳɹ��� " << endl;

		system("pause"); //������˳�
		system("cls"); //����
	}




}

//menu
void showmenu()
{
	cout << "***************************************" << endl;
	cout << "*************1. �����ϵ��*************" << endl;
	cout << "*************2. ��ʾ��ϵ��*************" << endl;
	cout << "*************3. ɾ����ϵ��*************" << endl;
	cout << "*************4. ������ϵ��*************" << endl;
	cout << "*************5. �޸���ϵ��*************" << endl;
	cout << "*************6. �����ϵ��*************" << endl;
	cout << "*************0. �˳�ͨѶ¼*************" << endl;
	cout << "***************************************" << endl;
}


int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	abs.m_Size = 0;

	int select = 0; //�����û��������

	while (true)
	{
		showmenu();

		cin >> select;

		switch (select)
		{
		case 1: //�����ϵ��
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
			cout << "��ӭ�´�ʹ��" << endl;
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