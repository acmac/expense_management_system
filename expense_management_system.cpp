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
	char type[20]; //消费类型
	float getSum;  //消费金额
}person;

person per[80];		//定义结构体数组

int menu_select()
{
	int c;
	do{
		system("cls"); //清屏
		cout<<"\t"<<"欢迎进入私人经济管理系统 "<<endl;
		cout<<"\t"<<"** ** ** ** ** *"<<endl;
		cout<<"\t"<<"1.输入收支信息"<<endl;
		cout<<"\t"<<"2.显示收支状况"<<endl;
		cout<<"\t"<<"3.开支排序"<<endl;
		cout<<"\t"<<"4.退出系统"<<endl;
		cout<<"\t"<<"** ** ** ** ** *"<<endl;
		cout<<"\t"<<"请对应所需选项1-4"<<endl;
		cin>>c;
	}while(c<1||c>4);
	return c;
}

void main()//主函数 
{
	int n=0,a=0; 
	char c;
	system("cls");
	  
    for(;;) 
	{  
		switch(menu_select()) //选择菜单序号 
		{  
		case 1:  
			cout<<"\t"<<"请输入相应的收支情况"<<endl;

//			n=InputItems(per,n);   //输入消费信息，食品消费，房租，子女教育费用，水电费，医疗费，储蓄等


			cout<<"\t"<<"需要保存数据吗？ (y,n)"<<endl;
			getchar();
			cin>>c;
			if(c=='y'||c=='Y')
//			saveData();  //保存数据
			cout<<"\t";
			system("pause");
			break;
		case 2:
			cout<<"\t"<<"显示收支状况"<<endl;
//			showItems();	//显示数据
			break;

		case 3:
			cout<<"\t"<<"开支排序"<<endl;
//			sortItems();	//可以输入和修改某月的收支情况，可以对每月的开支从小到大进行排序
			break;

		case 4:
			cout<<"\t"<<"你确定退出系统吗？ y/n"<<endl;
			getchar();
			cin>>c;
			if(c=='y'||c=='Y')
			{
				cout<<"系统已经退出"<<endl;
				system("pause");
				exit(0);
				if(c=='n'||c=='N')
				{
				cout<<"即将返回界面"<<endl;
				system("pause");
				break;
				}
			}
		}
	}
}
			
