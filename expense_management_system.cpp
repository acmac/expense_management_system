#include<iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h> 
#include <string.h>
#include <conio.h> 
#include <malloc.h> 
#include <windows.h>
#include <time.h> 
using namespace std;

typedef struct
{
	char type[20]; //��������
	float getSum;  //���ѽ��
}person;

person per[80];		//����ṹ������

int menu_select()
{
	int c;
	do{
		system("cls"); //����
		cout<<"\t"<<"��ӭ����˽�˾��ù���ϵͳ "<<endl;
		cout<<"\t"<<"** ** ** ** ** *"<<endl;
		cout<<"\t"<<"1.������֧��Ϣ"<<endl;
		cout<<"\t"<<"2.��ʾ��֧״��"<<endl;
		cout<<"\t"<<"3.��֧����"<<endl;
		cout<<"\t"<<"4.�˳�ϵͳ"<<endl;
		cout<<"\t"<<"** ** ** ** ** *"<<endl;
		cout<<"\t"<<"���Ӧ����ѡ��1-4"<<endl;
		cin>>c;
	}while(c<1||c>4);
	return c;
}

void main()//������ 
{
	int n=0,a=0; 
	char c;
	system("cls");
	  
    for(;;) 
	{  
		switch(menu_select()) //ѡ��˵���� 
		{  
		case 1:  
			cout<<"\t"<<"��������Ӧ����֧���"<<endl;

//			n=InputItems(per,n);   //����������Ϣ��ʳƷ���ѣ����⣬��Ů�������ã�ˮ��ѣ�ҽ�Ʒѣ������


			cout<<"\t"<<"��Ҫ���������� (y,n)"<<endl;
			getchar();
			cin>>c;
			if(c=='y'||c=='Y')
//			saveData();  //��������
			cout<<"\t";
			system("pause");
			break;
		case 2:
			cout<<"\t"<<"��ʾ��֧״��"<<endl;
//			showItems();	//��ʾ����
			break;

		case 3:
			cout<<"\t"<<"��֧����"<<endl;
//			sortItems();	//����������޸�ĳ�µ���֧��������Զ�ÿ�µĿ�֧��С�����������
			break;

		case 4:
			cout<<"\t"<<"��ȷ���˳�ϵͳ�� y/n"<<endl;
			getchar();
			cin>>c;
			if(c=='y'||c=='Y')
			{
				cout<<"ϵͳ�Ѿ��˳�"<<endl;
				system("pause");
				exit(0);
				if(c=='n'||c=='N')
				{
				cout<<"�������ؽ���"<<endl;
				system("pause");
				break;
				}
			}
		}
	}
}
			
