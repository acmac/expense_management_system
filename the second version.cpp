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
	float income;  //收入金额
}person;

person per[80];		

//输入收入和支出的信息
int inputData(person sum[],int n)  
{
	int i=0;
	char sign='y',x[10];

	while(sign!='n'&&sign!='N')
	{
		cout<<"\t"<<"支出的种类"<<endl;
		cin>>sum[n+i].type;  
		cout<<"\t"<<"支出的金额(大于0)"<<endl;
		cin>>sum[n+i].getSum;

	//	gets(x);
		cout<<"还需要再次输入吗？（y/n）";
		cin>>sign;
		i++;
	}

	cout<<"请输入收入的金额"<<endl;
	cin>>sum[n+i].income;

	return (n+i);
}

//储存数据
void saveData(person sum[],int n)
{
	int i,month;
	FILE *fp;
	cout<<"\t"<<"请输入当前信息所属的月份:"<<endl;
	cin>>month;
	switch(month)
	{
	case 1:{
			fp=fopen("D:\\一月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }


	case 2:{
			fp=fopen("D:\\二月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }
			
	case 3:{
			fp=fopen("D:\\三月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;
		   }
		
	case 4:{
			fp=fopen("D:\\四月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }
			
	case 5:{
			fp=fopen("D:\\五月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }
			
	case 6:{
			fp=fopen("D:\\六月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }
			
	case 7:{
			fp=fopen("D:\\七月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }
			
	case 8:{
			fp=fopen("D:\\八月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }
			
	case 9:{
			fp=fopen("D:\\九月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
		   }
			
	case 10:{
			fp=fopen("D:\\十月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
			}
			
	case 11:{
			fp=fopen("D:\\十一月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
			break;	
			}

	case 12:{
			fp=fopen("D:\\十二月份的支出信息.txt","a+"); //用append的方式写入文件
			if(fp==NULL)
			{
				cout<<"\t\t"<<"the file can not be opened"<<endl;
				exit(1);
			}
			fseek(fp,-1,SEEK_END);
			for(i=0;i<n;i++)
				fprintf(fp,"%-8s %-8f\n",sum[i].type,sum[i].getSum);
			
			char ss[20]="本月收入";
			fprintf(fp,"%-8s %-8f\n",ss,sum[n].income);

			fclose(fp);
			cout<<"\t"<<"保存成功"<<endl;
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
/*strcmp(a,b)，如果a>b返回值大于0...
第一次排序按照字符的起始位置来排序，第二次排序按照消费金额的大小排序*/
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

//输出某个月的消费信息
void showItems(person sum[],int n)
{ 
	int i=0,month;
	FILE *fp;
	cout<<"请输入月份（1-12）"<<endl;
	cin>>month;
	
	cout<<"-------------------------------"<<endl;
	cout<<"种类"<<"\t "<<"支出"<<endl;
	cout<<"-------------------------------"<<endl;
	switch(month)
	{
	case 1:{
		fp=fopen("D:\\一月份的支出信息.txt","r");
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
		fp=fopen("D:\\二月份的支出信息.txt","r");
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
		fp=fopen("D:\\三月份的支出信息.txt","r");
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
		fp=fopen("D:\\四月份的支出信息.txt","r");
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
		fp=fopen("D:\\五月份的支出信息.txt","r");
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
		fp=fopen("D:\\六月份的支出信息.txt","r");
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
		fp=fopen("D:\\七月份的支出信息.txt","r");
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
		fp=fopen("D:\\八月份的支出信息.txt","r");
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
		fp=fopen("D:\\九月份的支出信息.txt","r");
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
		fp=fopen("D:\\十月份的支出信息.txt","r");
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
		fp=fopen("D:\\十一月份的支出信息.txt","r");
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
		fp=fopen("D:\\十二月份的支出信息.txt","r");
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
	system("cls");  //清屏
	  
    for(;;) 
	{  
		switch(menu_select()) //选择菜单序号 
		{  
		case 1:  
			cout<<"\t"<<"请输入相应的收支情况"<<endl;

			n=inputData(per,n);   //输入消费信息的类别，n是用来储存消费的种类个数
			

			cout<<"\t"<<"需要保存数据吗？ (y,n)"<<endl;
			getchar();
			cin>>c;
			if(c=='y'||c=='Y')
			saveData(per,n);  //保存数据
			cout<<"\t";
			system("pause");
			break;
		case 2:
			cout<<"\t"<<"显示收支状况"<<endl;
			showItems(per,n);	//显示数据
			break;

		case 3:
			cout<<"\t"<<"开支排序"<<endl;
//			sortItems(per,n);	//可以输入和修改某月的收支情况，可以对每月的开支从小到大进行排序
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
			