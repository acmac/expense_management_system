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

//���������֧������Ϣ
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


void sortItems(person sum[],int n)
{
	int i,j;
	person temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
/*strcmp(a,b)�����a>b����ֵ����0...
��һ���������ַ�����ʼλ�������򣬵ڶ������������ѽ��Ĵ�С����*/
			if(strcmp(sum[i].type,sum[j].type)==1){
				temp=sum[j];
				sum[j]=sum[i];
				sum[i]=temp;
			}
			else
				if(strcmp(sum[i].type,sum[j].type)==0){
					if(sum[i].getSum>sum[j].getSum){
						temp=sum[j];
						sum[j]=sum[i];
						sum[i]=temp;
					}
				}
		}
		for(i=1;i<n+1;i++){
			if(sum[i-1].getSum!=0){
				printf("\t%-8s %-8f-\n",sum[i-1].type,sum[i-1].getSum);
			}
			if(i>1 &&i%10==0){
				cout<<"\t"<<"----------------"<<endl;
				cout<<"\t";
				system("pause");
				cout<<"\t"<<"----------------"<<endl;
			}
		}
		cout<<"\t";
		system("pause");
	}
}

//���ĳ���µ�������Ϣ
void showItems(person sum[],int n)
{ 
	int i=0,month;
	FILE *fp;
	cout<<"�������·ݣ�1-12��"<<endl;
	cin>>month;
	
	cout<<"-------------------------------"<<endl;
	cout<<"����"<<"\t "<<"֧��"<<endl;
	cout<<"-------------------------------"<<endl;
	switch(month)
	{
	case 1:{
		fp=fopen("D:\\һ�·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 2:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 3:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 4:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 5:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 6:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 7:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 8:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 9:{
		fp=fopen("D:\\���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 10:{
		fp=fopen("D:\\ʮ�·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 11:{
		fp=fopen("D:\\ʮһ�·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }

	case 12:{
		fp=fopen("D:\\ʮ���·ݵ�֧����Ϣ.txt","r");
		if(fp==0)
		{
			cout<<"file error"<<endl;
			exit(1);
		}
		fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);

		while(!feof(fp))
		{
			printf("%-8s %-12f\n",sum[i].type,sum[i].getSum);
			fscanf(fp,"%s%f",sum[i].type,&sum[i].getSum);
		}
		fclose(fp);
		break;
		   }
	}
		system("pause");
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

			n=inputData(per,n);   //����������Ϣ�����n�������������ѵ��������
			

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
			showItems(per,n);	//��ʾ����
			break;

		case 3:
			cout<<"\t"<<"��֧����"<<endl;
//			sortItems(per,n);	//����������޸�ĳ�µ���֧��������Զ�ÿ�µĿ�֧��С�����������
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
			