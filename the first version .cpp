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
	float income;  //������
}person;

person per[80];		

//����֧������Ϣ
int inputData(person sum[],int n)  
{
	int i=0;
	char sign='y',x[10];

	while(sign!='n'&&sign!='N')
	{
		cout<<"\t"<<"֧��������"<<endl;
		cin>>sum[n+i].type;  
		cout<<"\t"<<"֧���Ľ��(����0)"<<endl;
		cin>>sum[n+i].getSum;

	//	gets(x);
		cout<<"����Ҫ�ٴ������𣿣�y/n��";
		cin>>sign;
		i++;
	}

	cout<<"����������Ľ��"<<endl;
	cin>>sum[n+i].income;

	return (n+i);
}

//��������
void saveData(person sum[],int n)
{
	int i,month;
	FILE *fp;
	cout<<"\t"<<"�����뵱ǰ��Ϣ�������·�:"<<endl;
	cin>>month;
	switch(month)
	{
	case 1:{
			fp=fopen("D:\\һ�·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }


	case 2:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }
			
	case 3:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;
		   }
		
	case 4:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }
			
	case 5:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }
			
	case 6:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }
			
	case 7:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }
			
	case 8:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }
			
	case 9:{
			fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
		   }
			
	case 10:{
			fp=fopen("D:\\ʮ�·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
			}
			
	case 11:{
			fp=fopen("D:\\ʮһ�·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;	
			}

	case 12:{
			fp=fopen("D:\\ʮ���·ݵ�֧����Ϣ.txt","a+"); //��append�ķ�ʽд���ļ�
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="��������";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"����ɹ�"<<endl;
			break;
			}
	}
}

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
	system("cls");  //����
	  
    for(;;) 
	{  
		switch(menu_select()) //ѡ��˵���� 
		{  
		case 1:  
			cout<<"\t"<<"��������Ӧ����֧���"<<endl;

			n=inputData(per,n);   //����������Ϣ��ʳƷ���ѣ����⣬��Ů�������ã�ˮ��ѣ�ҽ�Ʒѣ������
			

			cout<<"\t"<<"��Ҫ���������� (y,n)"<<endl;
			getchar();
			cin>>c;
			if(c=='y'||c=='Y')
			saveData(per,n);  //��������
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
			