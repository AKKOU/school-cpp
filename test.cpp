#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <conio.h>
#define mypi 3.14
using namespace std;
void f01();
void f02();
void f03();


int main() {
	string menuItem[]= {
		"[1]�򥻿�J�P��X",
		"[2]�B�⦡�P�B��l1",
		"[3]�B�⦡�P�B��l2",
		"[4]�}�C",
		"[5]�j�M",
		"[6]�Ƨ�",
		"[7]��ƻP���c",
		"[8]���j",
		"[9]���O"
	};
	int i,num;
	int selMenu=99;
	while(selMenu!=0) {
		system("chcp 950");
		system("cls");
		cout<<"��T�T�A 23 ���f��\n";
		cout<<"-----------------------------"<<endl;
		int arrLength=sizeof(menuItem)/sizeof(menuItem[0]);
		for(i=0; i<arrLength; i++) {
			cout<<menuItem[i]<<endl;
		}
		cout<<"�п�J�G";
		cin>>selMenu;
		switch(selMenu) {
			case 1:
				f01();
				break;
			case 2:
				f02();
				break;
			case 3:
				f03();
				break;
		}
		cout<<"\n";
		system("pause");
	}
}
#define maxv 999
void f01() {
    int aa = 5,bb;
    aa*=5+2;
    cout << aa;
    cout << "-------------------------1-------------------------\n";
    cout << ":hint:%x 16�i�� %o 8�i�� %d %i 10�i�� %c �r��\n";
    int x=21;
    int y=021;
    int z=0x0d;
    float qe = 1.62e-19,q;
    float pi = 3.141596;
    char a = 'a',A='A';
    int k = 2147483647;
    char b1 = 0b10011001;
    unsigned char b2 = 0b10011001;
    printf("[1]x=(%%d)%d=(%%o)%o=(%%x)%x\n",x,x,x);
    printf("    y=(%%d)%d=(%%o)%o=(%%x)%x\n",y,y,y);
    printf("    z=(%%d)%d=(%%o)%o=(%%x)%x\n",z,z,z);
    printf("[2]pi=(%%f)%f=(%%5.3f)%5.3f=(%%e)%e\n",pi,pi,pi);
    printf("    qe=(%%f)%f=(%%e)%e=(%%5.3e)%5.2e\n",qe,qe,qe);
    printf("[3]2147483647+1=%d\n",k+1);
    printf("[4]a(ascii)=(%%x)%xH=(%%d)%d=(%%c)%c\n",a,a,a);
    printf("[5]'A'=(%%d)%d,'q'=(%%d)%d,'0'=(%%d)%d\n",'A','q','0');
    printf("    a-A=(%%d)%d,'q'-'A'=(%%d)%d=(%%c)%c\n",a-A,'q'-'A','q'-'A');
    printf("[6](unsigned)0610011001=(%%d)%d=(%%x)%x\n",b1,b1);
    printf("    (char)  0b10011001=(%%d) %d =(%%x)%x\n",b2,b2);
    cout << "-------------------------2-------------------------\n";
    printf("[7]sizeof(x)=%d\n",sizeof(x));
    printf("[8]sizeof(qe)=%d\n",sizeof(qe));
    printf("[9]sizeof('a')=%d\n",sizeof('a'));
    printf("[a]sizeof(\"A\")=%d\n",sizeof("A"));
    printf("[b]sizeof(\"AB\")=%d\n",sizeof("AB"));
}
void f02() {
		
}
void f03() {
		
}

