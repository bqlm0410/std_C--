#include <iostream>
#include <string>
using namespace std;

struct person{
	string name;
	int age;
	int sex;
	string num;
	string add;
};
struct addressbook{
	person personarray[1000];
	int size;
};

//1、创建菜单功能
// （1）封装void showMenu()函数
// （2）调用该函数
void showMenu(){
    cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

void addperson(addressbook* abs){
	if(abs->size==1000){
		cout<<"通讯录已满，无法添加";
		return;
	}
	else{
		cout<<"请输入姓名："<<endl;
		cin>>abs->personarray[abs->size].name;

		cout<< "请输入性别：" << endl;
		cout<< "1 -- 男" << endl;
		cout<< "2 -- 女" << endl;
		while(true){
			cin>>abs->personarray[abs->size].sex;
			if(abs->personarray[abs->size].sex==1||abs->personarray[abs->size].sex==2){
				break;
			}
			else{
				cout<<"输入错误，请重新输入";
			}
		}

		cout << "请输入年龄：" << endl;
		cin>>abs->personarray[abs->size].age;

		cout << "请输入联系电话：" << endl;
		cin>>abs->personarray[abs->size].num;

		cout << "请输入家庭住址：" << endl;
		cin>>abs->personarray[abs->size].add;
		
		abs->size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
		
	}
}

void showperson(addressbook* abs){
	if(abs->size!=0){
	for(int i=0;i<abs->size;i++){
		cout<<"姓名："<<abs->personarray[i].name<<"\t"<<
		"性别："<<(abs->personarray[i].sex==1?"男":"女")<<"\t"<<
		"年龄："<<abs->personarray[i].age<<"\t"<<
		"电话："<<abs->personarray[i].num<<"\t"<<
		"住址："<<abs->personarray[i].add<<endl;
		system("pause");
		system("cls");
	}
}
	else{
		cout<<"您的通讯录为空"<<endl;
		system("pause");
		system("cls");
	}
}

int searchperson(addressbook* abs,string name){
	for(int i=0;i<abs->size;i++){
		if(name==abs->personarray[i].name){
			return i;
	}
	}
	return -1;
}

void delperson(addressbook* abs,int i){
	if(i!=-1){
	for(;i<(abs->size-1);i++){
		abs->personarray[i]=abs->personarray[i+1];
	}
	cout<<"删除成功"<<endl;
	system("pause");
	system("cls");
	abs->size--;
}
	else{
		cout<<"查无此人"<<endl;
		system("pause");
		system("cls");
	}
}

void change_person(addressbook* abs,string name){
	int goal=searchperson(abs,name),change;
	Flag:
	if(goal!=-1){
		cout<<"当前联系人的信息为："<<endl;
		cout<<"姓名："<<abs->personarray[goal].name<<"\t"<<
		"性别："<<(abs->personarray[goal].sex==1?"男":"女")<<"\t"<<
		"年龄："<<abs->personarray[goal].age<<"\t"<<
		"电话："<<abs->personarray[goal].num<<"\t"<<
		"住址："<<abs->personarray[goal].add<<endl;
		cout<<"请输入您需要修改的选项："<<"1、姓名："<<"2、性别："<<"3、年龄："<<"4、电话："<<"5、住址："<<"按0返回主页面"<<endl;
		cin>>change;
		switch(change){
			case 0:
			{
				system("cls");
				return;
			}
			case 1:
			{
				cout<<"请输入修改后的姓名："<<endl;
				string ch_name;
				cin>>ch_name;
				abs->personarray[goal].name=ch_name;
				cout<<"修改成功"<<endl;
				system("pause");
				system("cls");
				goto Flag;
			}
			case 2:
			{
				cout<<"请输入修改后的性别："<<endl;
				string ch_sex;
				cin>>ch_sex;
				abs->personarray[goal].sex=(ch_sex=="男"?1:0);
				cout<<"修改成功"<<endl;
				system("pause");
				system("cls");
				goto Flag;
			}
			case 3:
			{
				cout<<"请输入修改后的年龄："<<endl;
				int ch_age;
				cin>>ch_age;
				abs->personarray[goal].age=ch_age;
				cout<<"修改成功"<<endl;
				system("pause");
				system("cls");
				goto Flag;
			}
			case 4:
			{
				cout<<"请输入修改后的电话："<<endl;
				string ch_num;
				cin>>ch_num;
				abs->personarray[goal].num=ch_num;
				cout<<"修改成功"<<endl;
				system("pause");
				system("cls");
				goto Flag;
			}
			case 5:
			{
				cout<<"请输入修改后的住址："<<endl;
				string ch_add;
				cin>>ch_add;
				abs->personarray[goal].num=ch_add;
				cout<<"修改成功"<<endl;
				system("pause");
				system("cls");
				goto Flag;
			}
		}
	}
	else{
			cout<<"查无此人"<<endl;
			system("pause");
			system("cls");
		}
}

void delALL(addressbook* abs){
	for(int i=0;i<abs->size;i++){
		abs->personarray[i]={};
	}
	abs->size=0;
}

int main() {
	int select=0;
	addressbook abs;
	abs.size=0;
	while(true){
		showMenu();
		cin>>select;
		switch(select){
		case 1:
			addperson(&abs);
			break;
		case 2:
			showperson(&abs);
			break;
		case 3:
		{	
			string name;
			cout<<"请输入需要删除联系人的姓名"<<endl;
			cin>>name;
			int del_name=searchperson(&abs,name);
			delperson(&abs,del_name);
			break;
		}
		case 4:{
			string sear_name;
			cout<<"请输入查找用户的姓名"<<endl;
			cin>>sear_name;
			int set=searchperson(&abs,sear_name);
			if(set!=-1){
			cout<<"姓名："<<abs.personarray[set].name<<"\t"<<
		"性别："<<(abs.personarray[set].sex==1?"男":"女")<<"\t"<<
		"年龄："<<abs.personarray[set].age<<"\t"<<
		"电话："<<abs.personarray[set].num<<"\t"<<
		"住址："<<abs.personarray[set].add<<endl;
			}
			else{
				cout<<"查无此人"<<endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			string ch_name;
			cout<<"请输入要修改的联系人姓名："<<endl;
			cin>>ch_name;
			change_person(&abs,ch_name);
			break;
		}
		case 6:{
			system("cls");
			cout<<"确认清空请输入0"<<endl;
			int ok=1;
			cin>>ok;
			if(ok==0){
				delALL(&abs);
				cout<<"删除完毕"<<endl;
				system("pause");
				system("cls");
			}
			else{
				cout<<"取消删除"<<endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case 0:{
			cout<<"感谢您的使用，期待下次再见";
			return 0;
			break;
		}
		default:
			break;
		}
	}
    return 0;
}