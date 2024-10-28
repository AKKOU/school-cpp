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
void f04();
void f05();
void f06();
void f07();


int main() {
	string menuItem[]= {
		"[1]基本輸入與輸出",
		"[2]運算式與運算子1",
		"[3]運算式與運算子2",
		"[4]陣列",
		"[5]搜尋",
		"[6]排序",
		"[7]函數與結構",
		"[8]遞迴",
		"[9]類別"
	};
	int i,num;
	int selMenu=99;
	while(selMenu!=0) {
		system("chcp 950");
		system("cls");
		cout<<"資訊三乙23陳柏魁\n";
		cout<<"-----------------------------"<<endl;
		int arrLength=sizeof(menuItem)/sizeof(menuItem[0]);
		for(i=0; i<arrLength; i++) {
			cout<<menuItem[i]<<endl;
		}
		cout<<"請輸入：";
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
			case 4:
				f04();
				break;
			case 5:
				f05();
				break;
            case 6:
                f06();
                break;
            case 7:
                f07();
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
    cout << ":hint:%x 16進制 %o 8進制 %d %i 10進制 %c \n";
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
	cout << "-------------------------1-------------------------";
	cout << "輸出格式練習\n";
	int a = 123;
	printf("a=(%%d)%d=(%%f)%f\n",a,a);
	printf("	123456789\n");
	printf("[1]%5d(%%5d)\n");
	printf("[2]%-5d(%%-5d)\n");
	printf("[3]%05d(%%05d)\n");
	//2
	float b=1.563;
	printf("[4]b=1.563=(%%f)%f=(%%d)%d\n",b,b);
	printf("[5]b=1.563=(%%2.1f)%2.1f\n",b);
	printf("[6]b=1.563=(%%6.2f)%6.2f\n",b);
	printf("[6]b=1.563=(%%5.3f)%5.3f\n",b);
	//3
	float c=12345.163;
	printf("[6]b=12345.163=(%%f)%f=(%%d)%d\n",c);
	printf("[6]b=12345.163=(%%2.1f)%2.1f\n",c);
	printf("[6]b=12345.163=(%%6.2f)%6.2f\n",c);
	printf("[6]b=12345.163=(%%.3f)%.3f\n",c);
}
void f03() {
    cout<<"-----------------1------------------\n";
    cout << "整數=整數/整數 浮點數=浮點數/整數\n";
    printf("\t\t%%d\t%%f\n");
    printf("[1]3/2\t\t%d\t%f\n",3/2,3/2);
    printf("[2]3/2.0\t%d\t%f\n", 3/2.0,3/2.0);
    printf("   1/3.0\t%d\t%f\n",1/3.0,1/3.0);
    printf("[3]sizeof(3-1.f)=%d\n",sizeof(3-1.f));
    printf("   sizeof(3-1.)=%d\n",sizeof(3-1.));
    cout<<"[4](cout)3/2="<<3/2<<",(cout)3/2.0="<<3/2.0<<endl;
    cout<<"-----------------1------------------\n";
    cout<<"位元運算 關係運算\n";
    int b1=3,b2=5,b3=-12;
    cout<<"[5]b1|b2="<<(b1|b2)<<endl;
    cout<<"[6]b1&b2="<<(b1&b2)<<endl;
    cout<<"[7]b1<<1="<<(b1<<1)<<endl;
    cout<<"[8]b3>>2="<<(b3>>2)<<endl;
    cout<<"[9]b1>b2 && b2>b3 ="<<(b1>b2 && b2>b3)<<endl;
    cout<<"[a]b1>b2 || b2>b3 ="<<(b1>b2 || b2>b3)<<endl;
    cout<<"[b]~b1+b1^b2="<<(~b1+b1^b2)<<endl;
    cout<<"[c]~b1<<b1^b2="<<(~b1<<b1^b2)<<endl;
    cout<<"[d]1+2*5^4<<3="<<(1+2*5^4<<3)<<endl;
    cout<<"[e]2<<2+4%6-2="<<(2<<2+4%6-2)<<endl;
    cout<<"[f]14%(3^2)+2&-1="<<(14%(3^2)+2&-1)<<endl;
    cout<<"-----------------2------------------\n";
    int x=0x8,y=0,z=012;
    printf("[0]%-10s%6c%6c%6c\n","  ",'x','y','z');
    printf("[0]%-10s%6d%6d%6d\n"," ",x,y,z); 
    x+=y+=z;//x=x+(y+=z)
    printf("[1]%-10s%6d%6d%6d\n","x+=y+=z",x,y,z);
    //判斷?true: false
    x=65;
    if(x>60)
        printf("及格\n");
    else
        printf("不及格\n");
    printf("%s\n",x>60?"及格":"不及格");
    x=8,y=0,z=2;
    y=x<0?y:x>0?1:3;
    printf("[3]%-10s%6d%6d%6d\n", "y=x>0?y:z>0?1:3",x,y,z);
}

void f04(){
    int k =3;
    cout << "k=" << k++ << endl;
    cout << "k=" << k << endl;
    k = 3;
    k++;
    cout << "k=" << k << endl;
    k=3;
    
    cout << "++k=" << ++k << endl;
    cout << "k++=" << k++ << endl;
    cout << "k=" << k << endl;
    float m = 3.2;
    cout << m++ << endl;
    cout << ++m << endl;
    int x =8,y=0,z=2;
    printf("[0]%-10s%4c%4c%4c\n"," ",'x','y','z');
    printf("[0]%-10s%4d%4d%4d\n"," ",x,y,z);
    y=x++;
    printf("[1]%-10s%4d%4d%4d\n","y=x++",x,y,z);
    x=8,y=0,z=2;
    x=x++;
    printf("[2]%-10s%4d%4d%4d\n","x=x++",x,y,z);
    printf("--------------------2 undefinded behavior(--------------------\n");
    x=8,y=0,z=2;
    x=x+++2;
    printf("[3]%-10s%4d%4d%4d\n","x=x+++2",x,y,z);
    x=8,y=0,z=2;
    y=x+++2;
    printf("[4]%-10s%4d%4d%4d\n","y=x+++2",x,y,z);
    x=8,y=0,z=2;
    y=x+++x;
    printf("[5]%-10s%4d%4d%4d\n","y=x+++x",x,y,z);
    x=8,y=0,z=2;
    x=x+++x;
    printf("[6]%-10s%4d%4d%4d\n","x=x+++x",x,y,z);
    x=8,y=0,z=2;
    y=(x++)+x;
    printf("[7]%-10s%4d%4d%4d\n","y=(x++)+x",x,y,z);
    x=8,y=0,z=2;
    y=x+(++x);
    printf("[8]%-10s%4d%4d%4d\n","y=x+(++x)",x,y,z);
    x=8,y=0,z=2;
    y=x+++z++;
    printf("[9]%-10s%4d%4d%4d\n","y=x+++z++",x,y,z);
    x=8,y=0,z=2;
    y=x--+x;
    printf("[A]%-10s%4d%4d%4d\n","y=x--+x",x,y,z);
    printf("\n\n");

    x=3,y=2,z=1;
    printf("[0]%-10s%4d%4d%4d\n"," ",x,y,z);
    printf("a=%s=%d,x=%d,y=%d,z=%d\n","(x*=(++y))%(++z)",(x*=(++y))%(++z),x,y,z);
    x=3,y=2,z=1;
    printf("b=%s=%d,x=%d,y=%d,z=%d\n","(x*=(++y))*(++z)",(x*=(++y))*(++z),x,y,z);
    x=3,y=2,z=1;
    printf("a=%s=%d,x=%d,y=%d,z=%d\n","(x*=(++y)%(++z))",(x*=(++y)%(++z)),x,y,z);
    x=3,y=2,z=1;
    printf("b=%s=%d,x=%d,y=%d,z=%d\n","(x*=(++y)*(++z))",(x*=(++y)*(++z)),x,y,z);
}

#define PI 3.14159;

void f05(){
    enum dir {x,y,z=10};
    const int DAY = 24;
    double area = 3 * 3 * PI;
    enum dir b = x;
    printf("一天有%d小時\n",DAY);
    printf("圓面積為:%.51f\n",area);
    printf("b=%d\ty=%d\tz=%d\n",b,y,z);
    enum Status {Run = 1,Stop,Pause = 3,Exit};
    Status StateMachine = Pause;
    int Command = 0;
    cin >> Command;
    if(Command == 1) StateMachine = Stop;
    if(Command == 2 && StateMachine == Pause)
        StateMachine = Run;
    if(Command == 3 || StateMachine == Stop)
        StateMachine = Exit;
    cout << StateMachine;
}

void f06(){
    int i,j;
    cout << "1.---------------------\n";

    for(int i=0,j=0;i<5;i+=j,j+=2){
        printf("i=%d j=%d\n",i,j);
    }
    printf("變數i=%d\n",i);

    cout << "2.輾轉---------------------\n";
    int a,b,tmp;
    printf("GCD=? please input a b:");
    scanf("%d %d",&a,&b);
    while(b!=0){
        tmp = a%b;
        a=b;
        b=tmp;
    }
    printf("GCD=%d\n",a);
    cout << "3.99乘法表---------------------\n";
    for(int i=1;i<10;i++){
        j=1;
        if(i==5)
            continue;
        do {
            printf("%2dX%2d=%2d",i,j,i*j);
            j++;
            if(j==8)
                break;
        }
        while(j<10);
        cout << "\n";
    }

    printf("變數i=%d\n",i);
    cout << "4.陣列---------------------\n";
    char name1[] = "blocks";
    string name2 = "blocks";
    printf("sizeof(name1)=%d,sizeof(name2)=%d,name2.size()=%d\n",sizeof(name1),sizeof(name2),name2.size());

    int bk1[9] = {1,0,0,1,0,0,1,1,1};
    int bk2[][3] = {
        {1,1,1},
        {0,1,0},
        {0,1,0}
    };
    int bk3[][3] = {1,0,0,1,0,0,1,1,1};
    int k;
    string style[] = {" ","■ ","△ "};

    for(i=0;i<9;i++){
        cout << bk1[i];
        if((i+1)%3 == 0) cout << endl;
    }
    cout << endl;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << style[bk2[i][j]];
        }
        cout << endl;
    }
    cout << endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << style[bk3[i][j]];
        }
        cout << endl;
    }
    cout << endl;
}

void f07(){
	int A[] = {2,0,1,8,11,5};

    int n=sizeof(A)/sizeof(int);
    int i,j,k,tmp,ch=0,c=0;
    for(i=0; i<n; i++)
        printf("\t%d",A[i]);
    cout<<endl;
    cout << "1.氣泡排序---------------------\n";
    for(i=n-2; i>=0; i--) {
        for(j=0; j<=i; j++) {
            if(A[j] > A[j+1] ) {
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
                ch++;
            }
            //輸出比較結果
            cout<<++c<<"\t";    
            for (k=0; k<n; k++)
                printf("%d\t",A[k]);
            cout<<endl;
        }
        cout << "\t---------------------\n";
    }
    cout << "次數 = "<< c << ",交換次數=" << ch << endl;
    cout << "請輸入資料筆數:";
    int N=1;
    cin>>N;
    cout << "泡沫排序法比較次數:" << N*(N-1)/2 << "次\n";
    cout << "2.----------選擇排序法---------------------\n";
    int min;
    int B[] = {41,33,17,80,61,5,55};
    c=0,ch=0;

    n=sizeof(B)/sizeof(int);
    for(i=0;i<n;i++){
        printf("\t%d",B[i]);
    }
    cout<<endl;
    for(i=0; i<n; i++) {
        min=i;
        for(j=i+1; j<n; j++) {
            // 找出最小數
            if(B[min] > B[j] )
                min=j;
            c++;
        }
        tmp=B[min];
        B[min]=B[i];
        B[i]=tmp;
        for(j=0; j<n; j++)
            printf("\t%d",B[j]);
        printf("\n");
    }
    cout<<"次數 = "<<c<<endl;
    cout<<"請輸入資料筆數:";
    cin>>N;
    cout<<"選擇排序法比較次數:"<<N*(N-1)/2<<"次"<<endl;
}