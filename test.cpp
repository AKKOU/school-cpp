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
void f08();
void f09();
void f10();
void f11();
void f12();
void f13();
void f14();

int main()
{
    string menuItem[] = {
        "[1]�򥻿�J�P��X",
        "[2]�B�⦡�P�B��l1",
        "[3]�B�⦡�P�B��l2",
        "[4]�}�C",
        "[5]�j�M",
        "[6]�Ƨ�",
        "[7]��ƻP���c",
        "[8]���j",
        "[9]���O",
        "[10]����",
        "[11]����2",
        "[12]�h���禡",
        "[13]�h���禡2"};
    int i, num;
    int selMenu = 99;
    while (selMenu != 0)
    {
        system("chcp 950");
        system("cls");
        cout << "��T�T�A23���f��\n";
        cout << "-----------------------------" << endl;
        int arrLength = sizeof(menuItem) / sizeof(menuItem[0]);
        for (i = 0; i < arrLength; i++)
        {
            cout << menuItem[i] << endl;
        }
        cout << "�п�J�G";
        cin >> selMenu;
        switch (selMenu)
        {
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
        case 8:
            f08();
            break;
        case 9:
            f09();
            break;
        case 10:
            f10();
            break;
        case 11:
            f11();
            break;
        case 12:
            f12();
            break;
        case 13:
            f13();
            break;
        case 14:
            f14();
            break;
        }
        cout << "\n";
        system("pause");
    }
}
#define maxv 999
void f01()
{
    int aa = 5, bb;
    aa *= 5 + 2;
    cout << aa;
    cout << "-------------------------1-------------------------\n";
    cout << ":hint:%x 16�i�� %o 8�i�� %d %i 10�i�� %c \n";
    int x = 21;
    int y = 021;
    int z = 0x0d;
    float qe = 1.62e-19, q;
    float pi = 3.141596;
    char a = 'a', A = 'A';
    int k = 2147483647;
    char b1 = 0b10011001;
    unsigned char b2 = 0b10011001;
    printf("[1]x=(%%d)%d=(%%o)%o=(%%x)%x\n", x, x, x);
    printf("    y=(%%d)%d=(%%o)%o=(%%x)%x\n", y, y, y);
    printf("    z=(%%d)%d=(%%o)%o=(%%x)%x\n", z, z, z);
    printf("[2]pi=(%%f)%f=(%%5.3f)%5.3f=(%%e)%e\n", pi, pi, pi);
    printf("    qe=(%%f)%f=(%%e)%e=(%%5.3e)%5.2e\n", qe, qe, qe);
    printf("[3]2147483647+1=%d\n", k + 1);
    printf("[4]a(ascii)=(%%x)%xH=(%%d)%d=(%%c)%c\n", a, a, a);
    printf("[5]'A'=(%%d)%d,'q'=(%%d)%d,'0'=(%%d)%d\n", 'A', 'q', '0');
    printf("    a-A=(%%d)%d,'q'-'A'=(%%d)%d=(%%c)%c\n", a - A, 'q' - 'A', 'q' - 'A');
    printf("[6](unsigned)0610011001=(%%d)%d=(%%x)%x\n", b1, b1);
    printf("    (char)  0b10011001=(%%d) %d =(%%x)%x\n", b2, b2);
    cout << "-------------------------2-------------------------\n";
    printf("[7]sizeof(x)=%d\n", sizeof(x));
    printf("[8]sizeof(qe)=%d\n", sizeof(qe));
    printf("[9]sizeof('a')=%d\n", sizeof('a'));
    printf("[a]sizeof(\"A\")=%d\n", sizeof("A"));
    printf("[b]sizeof(\"AB\")=%d\n", sizeof("AB"));
}
void f02()
{
    cout << "-------------------------1-------------------------";
    cout << "��X�榡�m��\n";
    int a = 123;
    printf("a=(%%d)%d=(%%f)%f\n", a, a);
    printf("	123456789\n");
    printf("[1]%5d(%%5d)\n");
    printf("[2]%-5d(%%-5d)\n");
    printf("[3]%05d(%%05d)\n");
    // 2
    float b = 1.563;
    printf("[4]b=1.563=(%%f)%f=(%%d)%d\n", b, b);
    printf("[5]b=1.563=(%%2.1f)%2.1f\n", b);
    printf("[6]b=1.563=(%%6.2f)%6.2f\n", b);
    printf("[6]b=1.563=(%%5.3f)%5.3f\n", b);
    // 3
    float c = 12345.163;
    printf("[6]b=12345.163=(%%f)%f=(%%d)%d\n", c);
    printf("[6]b=12345.163=(%%2.1f)%2.1f\n", c);
    printf("[6]b=12345.163=(%%6.2f)%6.2f\n", c);
    printf("[6]b=12345.163=(%%.3f)%.3f\n", c);
}
void f03()
{
    cout << "-----------------1------------------\n";
    cout << "���=���/��� �B�I��=�B�I��/���\n";
    printf("\t\t%%d\t%%f\n");
    printf("[1]3/2\t\t%d\t%f\n", 3 / 2, 3 / 2);
    printf("[2]3/2.0\t%d\t%f\n", 3 / 2.0, 3 / 2.0);
    printf("   1/3.0\t%d\t%f\n", 1 / 3.0, 1 / 3.0);
    printf("[3]sizeof(3-1.f)=%d\n", sizeof(3 - 1.f));
    printf("   sizeof(3-1.)=%d\n", sizeof(3 - 1.));
    cout << "[4](cout)3/2=" << 3 / 2 << ",(cout)3/2.0=" << 3 / 2.0 << endl;
    cout << "-----------------1------------------\n";
    cout << "�줸�B�� ���Y�B��\n";
    int b1 = 3, b2 = 5, b3 = -12;
    cout << "[5]b1|b2=" << (b1 | b2) << endl;
    cout << "[6]b1&b2=" << (b1 & b2) << endl;
    cout << "[7]b1<<1=" << (b1 << 1) << endl;
    cout << "[8]b3>>2=" << (b3 >> 2) << endl;
    cout << "[9]b1>b2 && b2>b3 =" << (b1 > b2 && b2 > b3) << endl;
    cout << "[a]b1>b2 || b2>b3 =" << (b1 > b2 || b2 > b3) << endl;
    cout << "[b]~b1+b1^b2=" << (~b1 + b1 ^ b2) << endl;
    cout << "[c]~b1<<b1^b2=" << (~b1 << b1 ^ b2) << endl;
    cout << "[d]1+2*5^4<<3=" << (1 + 2 * 5 ^ 4 << 3) << endl;
    cout << "[e]2<<2+4%6-2=" << (2 << 2 + 4 % 6 - 2) << endl;
    cout << "[f]14%(3^2)+2&-1=" << (14 % (3 ^ 2) + 2 & -1) << endl;
    cout << "-----------------2------------------\n";
    int x = 0x8, y = 0, z = 012;
    printf("[0]%-10s%6c%6c%6c\n", "  ", 'x', 'y', 'z');
    printf("[0]%-10s%6d%6d%6d\n", " ", x, y, z);
    x += y += z; // x=x+(y+=z)
    printf("[1]%-10s%6d%6d%6d\n", "x+=y+=z", x, y, z);
    // �P�_?true: false
    x = 65;
    if (x > 60)
        printf("�ή�\n");
    else
        printf("���ή�\n");
    printf("%s\n", x > 60 ? "�ή�" : "���ή�");
    x = 8, y = 0, z = 2;
    y = x < 0 ? y : x > 0 ? 1
                          : 3;
    printf("[3]%-10s%6d%6d%6d\n", "y=x>0?y:z>0?1:3", x, y, z);
}

void f04()
{
    int k = 3;
    cout << "k=" << k++ << endl;
    cout << "k=" << k << endl;
    k = 3;
    k++;
    cout << "k=" << k << endl;
    k = 3;

    cout << "++k=" << ++k << endl;
    cout << "k++=" << k++ << endl;
    cout << "k=" << k << endl;
    float m = 3.2;
    cout << m++ << endl;
    cout << ++m << endl;
    int x = 8, y = 0, z = 2;
    printf("[0]%-10s%4c%4c%4c\n", " ", 'x', 'y', 'z');
    printf("[0]%-10s%4d%4d%4d\n", " ", x, y, z);
    y = x++;
    printf("[1]%-10s%4d%4d%4d\n", "y=x++", x, y, z);
    x = 8, y = 0, z = 2;
    x = x++;
    printf("[2]%-10s%4d%4d%4d\n", "x=x++", x, y, z);
    printf("--------------------2 undefinded behavior(--------------------\n");
    x = 8, y = 0, z = 2;
    x = x++ + 2;
    printf("[3]%-10s%4d%4d%4d\n", "x=x+++2", x, y, z);
    x = 8, y = 0, z = 2;
    y = x++ + 2;
    printf("[4]%-10s%4d%4d%4d\n", "y=x+++2", x, y, z);
    x = 8, y = 0, z = 2;
    y = x++ + x;
    printf("[5]%-10s%4d%4d%4d\n", "y=x+++x", x, y, z);
    x = 8, y = 0, z = 2;
    x = x++ + x;
    printf("[6]%-10s%4d%4d%4d\n", "x=x+++x", x, y, z);
    x = 8, y = 0, z = 2;
    y = (x++) + x;
    printf("[7]%-10s%4d%4d%4d\n", "y=(x++)+x", x, y, z);
    x = 8, y = 0, z = 2;
    y = x + (++x);
    printf("[8]%-10s%4d%4d%4d\n", "y=x+(++x)", x, y, z);
    x = 8, y = 0, z = 2;
    y = x++ + z++;
    printf("[9]%-10s%4d%4d%4d\n", "y=x+++z++", x, y, z);
    x = 8, y = 0, z = 2;
    y = x-- + x;
    printf("[A]%-10s%4d%4d%4d\n", "y=x--+x", x, y, z);
    printf("\n\n");

    x = 3, y = 2, z = 1;
    printf("[0]%-10s%4d%4d%4d\n", " ", x, y, z);
    printf("a=%s=%d,x=%d,y=%d,z=%d\n", "(x*=(++y))%(++z)", (x *= (++y)) % (++z), x, y, z);
    x = 3, y = 2, z = 1;
    printf("b=%s=%d,x=%d,y=%d,z=%d\n", "(x*=(++y))*(++z)", (x *= (++y)) * (++z), x, y, z);
    x = 3, y = 2, z = 1;
    printf("a=%s=%d,x=%d,y=%d,z=%d\n", "(x*=(++y)%(++z))", (x *= (++y) % (++z)), x, y, z);
    x = 3, y = 2, z = 1;
    printf("b=%s=%d,x=%d,y=%d,z=%d\n", "(x*=(++y)*(++z))", (x *= (++y) * (++z)), x, y, z);
}

#define PI 3.14159;

void f05()
{
    enum dir
    {
        x,
        y,
        z = 10
    };
    const int DAY = 24;
    double area = 3 * 3 * PI;
    enum dir b = x;
    printf("�@�Ѧ�%d�p��\n", DAY);
    printf("�ꭱ�n��:%.51f\n", area);
    printf("b=%d\ty=%d\tz=%d\n", b, y, z);
    enum Status
    {
        Run = 1,
        Stop,
        Pause = 3,
        Exit
    };
    Status StateMachine = Pause;
    int Command = 0;
    cin >> Command;
    if (Command == 1)
        StateMachine = Stop;
    if (Command == 2 && StateMachine == Pause)
        StateMachine = Run;
    if (Command == 3 || StateMachine == Stop)
        StateMachine = Exit;
    cout << StateMachine;
}

void f06()
{
    int i, j;
    cout << "1.---------------------\n";

    for (int i = 0, j = 0; i < 5; i += j, j += 2)
    {
        printf("i=%d j=%d\n", i, j);
    }
    printf("�ܼ�i=%d\n", i);

    cout << "2.����---------------------\n";
    int a, b, tmp;
    printf("GCD=? please input a b:");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    printf("GCD=%d\n", a);
    cout << "3.99���k��---------------------\n";
    for (int i = 1; i < 10; i++)
    {
        j = 1;
        if (i == 5)
            continue;
        do
        {
            printf("%2dX%2d=%2d", i, j, i * j);
            j++;
            if (j == 8)
                break;
        } while (j < 10);
        cout << "\n";
    }

    printf("�ܼ�i=%d\n", i);
    cout << "4.�}�C---------------------\n";
    char name1[] = "blocks";
    string name2 = "blocks";
    printf("sizeof(name1)=%d,sizeof(name2)=%d,name2.size()=%d\n", sizeof(name1), sizeof(name2), name2.size());

    int bk1[9] = {1, 0, 0, 1, 0, 0, 1, 1, 1};
    int bk2[][3] = {
        {1, 1, 1},
        {0, 1, 0},
        {0, 1, 0}};
    int bk3[][3] = {1, 0, 0, 1, 0, 0, 1, 1, 1};
    int k;
    string style[] = {" ", "�� ", "�� "};

    for (i = 0; i < 9; i++)
    {
        cout << bk1[i];
        if ((i + 1) % 3 == 0)
            cout << endl;
    }
    cout << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << style[bk2[i][j]];
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << style[bk3[i][j]];
        }
        cout << endl;
    }
    cout << endl;
}

void f07()
{
    int A[] = {2, 0, 1, 8, 11, 5};

    int n = sizeof(A) / sizeof(int);
    int i, j, k, tmp, ch = 0, c = 0;
    for (i = 0; i < n; i++)
        printf("\t%d", A[i]);
    cout << endl;
    cout << "1.��w�Ƨ�---------------------\n";
    for (i = n - 2; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (A[j] > A[j + 1])
            {
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
                ch++;
            }
            // ��X������G
            cout << ++c << "\t";
            for (k = 0; k < n; k++)
                printf("%d\t", A[k]);
            cout << endl;
        }
        cout << "\t---------------------\n";
    }
    cout << "���� = " << c << ",�洫����=" << ch << endl;
    cout << "�п�J��Ƶ���:";
    int N = 1;
    cin >> N;
    cout << "�w�j�ƧǪk�������:" << N * (N - 1) / 2 << "��\n";
    cout << "2.----------��ܱƧǪk---------------------\n";
    int min;
    int B[] = {41, 33, 17, 80, 61, 5, 55};
    c = 0, ch = 0;

    n = sizeof(B) / sizeof(int);
    for (i = 0; i < n; i++)
    {
        printf("\t%d", B[i]);
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            // ��X�̤p��
            if (B[min] > B[j])
                min = j;
            c++;
        }
        tmp = B[min];
        B[min] = B[i];
        B[i] = tmp;
        for (j = 0; j < n; j++)
            printf("\t%d", B[j]);
        printf("\n");
    }
    cout << "���� = " << c << endl;
    cout << "�п�J��Ƶ���:";
    cin >> N;
    cout << "��ܱƧǪk�������:" << N * (N - 1) / 2 << "��" << endl;
}

void f08()
{
    int x = 89, y = 6, z = 4;
    cout << "[1]x y z�ܼưO�����}" << &x << "\t\t" << &y << "\t" << &z << endl;
    cout << "[2]x y z�ܼƦ�} ����\t" << *&x << "\t\t" << *&y << "\t\t" << *&z << endl;
    int *p1;
    p1 = &x;
    y = *p1;
    cout << "[3]p1=" << &*p1 << "\t *p1=" << *p1 << endl;
    cout << "[4]p1=" << p1 << "\t *p1=" << *p1 << endl;
    cout << "[5]x=" << x << "\ty=" << y << "\tz=" << z << endl;
    int *p2;
    p2 = &z;
    *p2 = 3;
    cout << "[4]p2=" << p2 << "\t *p2=" << *p2 << endl;
    cout << "[5]x=" << x << "\ty=" << y << "\tz=" << z << endl;
    int *p3, p4;
    p3 = p1;
    p4 = x;
    printf("[6]p3��}=%p, *p3=%d\n", p3, *p3);
    printf("[7]p4��}=%x,p4=%d\n", &p4, p4);
    printf("[8]sizeof(p1)=%d Bytes,sizeof(*p1)=%d Bytes\n", sizeof(p1), sizeof(*p1));

    cout << "----------------------------------------------------\n";
    int a[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *pa = a;
    int *pb = &a[3];
    printf("[1]pa = %p = &a[0] = %p :*pa=%d=a[0]=%d\n", pa, &a[0], *pa, a[0]);
    printf("[1]pb = %x = &a[3] = %x :*pb=%d=a[3]=%d\n", pb, &a[3], *pb, a[3]);
    printf("[3]*(pb+2)=%d=a[3+2]=%d, *pb+2=a[3]+2=%d\n", *(pb + 2), a[3 + 2], *pb + 2);
    printf("[4]pb-pa=%d, &a[3]-&a[0]=%d\n", pb - pa, &a[3] - &a[0]);
    cout << "[5]�m��: �ХHpb���Ъ��覡�p��a[0]�����G\n";
    cout << "   a[0]=" << "*(pb-3)=" << *(pb - 3) << endl;
    cout << "[6]�m��: �ХHpb���Ъ��覡�p��a[3]+a[7]�����G\n";
    cout << "   a[3]+a[7]=" << "*pb + *(pb+4)" << *pb + *(pb + 4) << endl;
    cout << "[7]�m��:�ХHpa���Ъ��覡�A�H�j��C�Xa�}�C�Ȫ����G\n";

    int n = sizeof(a) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d ", i, *(a + i));
    }
    cout << endl;
    cout << "----------------------------------------------------\n";

    int v;
    v = ++*pa;
    printf("[1]v=++*pa=%d,a[0] = %d, a[1] = %d, *pa = %d\n", v, a[0], a[1], *pa);
    v = *pa++;
    printf("[2]v=*pa++=%d,a[0] = %d, a[1] = %d, *pa = %d\n", v, a[0], a[1], *pa);
    v = *++pa;
    printf("[3]v=*++pa=%d,a[0] = %d, a[1] = %d, *pa = %d\n", v, a[0], a[1], *pa);
}

void f09()
{
    cout << "----------------------------------------------------\n";
    int bk[3][4] = {0, 1, 2, 3, 11, 12, 13, 14, 21, 22, 23, 24};
    cout << "�}�C����\n";
    int(*p)[4] = bk;
    cout << "[1]&bk[0][0]= " << &bk[0][0] << endl;
    cout << "[2]*p" << *p << endl;
    cout << "[3]*(p+2)= " << *(p + 2) << ",&bk[2][0]= " << &bk[2][0] << endl;
    cout << "[4]**(p+1)= " << **(p + 1) << endl;
    cout << "[5]*(*(p+1)+2)= " << *(*(p + 1) + 2) << endl;
    cout << "[6]bk[1][2]= " << bk[1][2] << endl;
    cout << "[7]bk[1][2]= " << bk[1][2] << endl;
    cout << "[7]�m��:�ХH����p���覡�p��}�C�� 3+13+22�����G\n";
    cout << "   *(*(p+0)+3) + *(*(p+1)+2) + *(*(p+2)+1)= " << *(*(p + 0) + 3) + *(*(p + 1) + 2) + *(*(p + 2) + 1) << endl;
    cout << "----------------------------------------------------\n";
    cout << "���а}�C\n";
    int xx = 1, yy[4] = {2, 4, 6, 5}, zz[4] = {3, 7, 9, 5};
    int *pc[3] = {&xx, yy, &zz[1]};
    cout << "[1]xx=" << *pc[0] << endl;
    cout << "[2]yy[1]=" << yy[1] << ",*(pc[1]+1)=" << *(pc[1] + 1) << endl;
    cout << "[3]yy[2]+1=" << yy[2] + 1 << ",*(pc[1]+2)+1=" << *(pc[1] + 2) + 1 << endl;
    cout << "[4]zz[2]*2=" << zz[2] * 2 << ",*(pc[2]+1)*2=" << *(pc[2] + 1) * 2 << endl;
    cout << "[5]�m��:�ХH����pc���覡�p��}�C�� xx+yy[1]+zz[2]�����G\n";
    cout << "   *pc[0] + *(pc[1]+1) + *(pc[2]+1)*2=" << *pc[0] + *(pc[1] + 1) + *(pc[2] + 1) << endl;
    cout << "----------------------------------------------------\n";
    int aa[] = {1, 2, 3, 4, 5};
    int *ptr = aa;
    cout << "[6]�m��:�ХH����ptr�A��ܰ}�Ca�Ҧ���\n";
    for (int i = 0; i < 5; i++)
    {
        printf("aa[%d]=%3d ", i, ptr[i]);
    }
    printf("\n");
    *(ptr++) += 100;
    *(++ptr) += 100;
    for (int i = 0; i < 5; i++)
        printf("aa[%d]=%3d ", i, aa[i]);
    cout << endl;
}

void f10()
{
    // string A = "A";
    // printf("[1]'A'=%d,\"A\"=%d,\"ABC\"= %d A=%d\n", sizeof('A'), sizeof("A"), sizeof("ABC"), sizeof(A));
    // char s1[] = "Hello";
    // printf("[2]sizeof(%s)=%d != strlen(%S)=%d\n", s1, sizeof(s1), s1, strlen(s1));
    // A = "macdonald";
    // printf("[3]sizeof(\"macdonlad\")=%d,sizeof(A)=%d\n", sizeof("macdonald"), sizeof(A));

    // cout << sizeof("�y") << endl;
    // cout << "----------------------------------------\n";

    // char c1[] = {'h', 'a', 'p', 'p', 'y'};
    // char c2[] = {'h', 'a', 'p', 'p', 'y', '\0'};
    // char c3[] = "happy";
    // char *s = "happy";

    // printf("[1]c1 = %s,sizeof(c1)=%d,strlen(c1)=%d\n", c1, sizeof(c1), strlen(c1));
    // printf("[2]c2 = %s,sizeof(c2)=%d,strlen(c2)=%d\n", c2, sizeof(c2), strlen(c2));
    // printf("[3]c3 = %s,sizeof(c3)=%d,strlen(c3)=%d\n", c3, sizeof(c3), strlen(c3));

    // printf("[4]s  = %s,sizeof(s)=%d,*s=%c,(s+1)=%s,*(s+1)=%c\n", s, sizeof(s), *s, (s + 1), *(s + 1));
    // char c4[] = {'h', 'a', 'p', 'p', 'y', '\0', 'b', 'i', 'r', 't', 'h', 'd', 'a', 'y', '\0'};
    // s = &c4[6];

    // printf("[5]c4 = %s,sizeof(c4)=%d,strlen(c4)=%d\n", c4, sizeof(c4), strlen(c4));
    // printf("[6]c4[2] = %c,sizeof(c4[2])=%d\n", c4[2], sizeof(c4[2]));
    // printf("[7]s  = %s,(s+3)=%s,*(s+5)=%c\n", s, (s + 3), *(s + 5));
    // printf("[8]�եΫ���s��ܥX ayt \n");
    // printf("%s%c\n", (s + 6), *(s + 3));

    // cout << "----------------------------------------\n";

    // char s2[] = "0123456789";
    // char *pc = s2;
    // char *pc2;
    // pc2 = &s2[5];

    // cout << "[1]sizeof(s2)=" << sizeof(s2) << endl;
    // cout << "[2]*(pc+2)=" << *(pc + 2) << endl;
    // cout << "[3]pc+2=" << pc + 2 << endl;
    // cout << "[4]*pc2=" << *pc2 << endl;
    // cout << "[5]pc2=" << pc2 << endl;
    // cout << "[6]�եΫ���pc��ܥX 8 �A����pc2��ܥX 9" << endl;
    // cout << *(pc + 8) << "+" << *(pc2 + 4) << "=" << (*(pc + 8) - '0') + (*(pc2 + 4) - '0') << endl;
    // cout << "[7]�եΫ���pc����ܥX 789�A����pc2��ܥX2" << endl;
    // cout << (pc + 7) << *(pc2 - 3) << endl;
}

void f11()
{
    
    // char data[3][20] = {"How are you?", "I am fine", "See you later"};
    // char(*x)[20];

    // x = data;

    // printf("[1]%p %s %c\n", *x, *x, **x);
    // printf("[2]%s %c\n", (*(x + 1) + 5), *((x + 1) + 5));
    // printf("[3]�m��:�ХH���Ф覡���Xlater you? I\n");
    // printf("%s %s %c\n", (*(x + 2) + 8), (*x + 8), *(*(x + 1)));

    // cout << "----------------------------------------\n";

    // int TotalSteps = 5;
    // int Count = 0;
    // char StepName[9][4] = {"��", "��", "�~", "�R", "�\", "�w", "�e"};
    // int select[5]{3, 1, 5, 4, 6};

    // for (Count = 0; Count < TotalSteps; Count++)
    // {
    //     cout << StepName[select[Count]];
    // }

    // cout << endl;
    // printf("[4]�m��:�ХH����p�L�X���G\n");
    // int *p = select;

    // for (Count = 0; Count < TotalSteps; Count++)
    // {
    //     cout << StepName[*(p + Count)];
    // }

    // cout << endl;

    // char(*y)[4];
    // printf("[5]�m��:�ХH����y�L�X[4]�����e\n");
    // y = StepName;
    // for (Count = 0; Count < TotalSteps; Count++)
    // {
    //     printf("%s", *(y + *(p + Count)));
    // }
    // cout << endl;
    // cout << "----------------------------------------\n";

    // char s1[] = "Make";
    // char s2[] = {'F', 'a', 'k', 'e', 'r', '\0'};
    // char *s3 = "Win Again";
    // char s4 = 'g';
    // char s5[] = {'F', 'a', 'k', 'e', 'r'};
    // char *xx[4] = {s1, s2, &s3[4], &s4};

    // printf("[1]%p %p %p\n", s1, s2, s3);
    // printf("[2]%p %p %p\n", xx[0], xx[1], xx[2]);
    // printf("[3]%s %s %s %c\n", s1, s2, s3, s4);
    // printf("[4]%s %s %s %c\n", s1, s5, s3, s4);
    // printf("[5]%c %c %c %c\n", *s1, *s2, *s3, s4);
    // printf("[6]%s %s %s %c\n", xx[0], xx[1], xx[2], *xx[3]);
    // printf("[7]%c %c %c %c\n", *xx[0], *xx[1], *xx[2], *xx[3]);
    // printf("[8]�m��:�ХH����xx�L�Xk r Again gg\n");
    // printf("  %c %c %s %c%c", *(xx[1] + 2), *(xx[1] + 4), xx[2], *xx[3], *xx[3]);
}

// f12
float Area(float bottom, float height)
{
    return bottom * height / 2;
}

double Area(double r)
{
    return 3.14 * r * r;
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// �ǧ}
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// �ǰѦ�
void swapr(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// �ǭ� �ǧ} �ǰѦ�
void bvar(float a, float *b, double &c)
{
    a++;
    (*b)++;
    c++;
}

void f12()
{
    float a, b;

    typedef double gg;
    gg c, area;
    cout << "input a b c:";
    scanf("%f%f%lf", &a, &b, &c);
    area = Area(a, b);
    cout << "�T���έ��n = " << area << endl;
    area = Area(c);
    cout << "��έ��n" << area << endl;
    cout << "----------------------------" << endl;
    int x, y, sum;
    x = (int)a;
    y = (int)b;

    cout << "[1] �ǭ� call by value" << endl;
    cout << "   ����e (x,y)=" << x << "," << y << endl;
    swap(x, y);
    cout << "   ����� (x,y)=" << x << "," << y << endl;

    cout << "[2] �ǧ} call by pointer" << endl;
    cout << "   ����e (x,y)=" << x << "," << y << endl;
    swap(&x, &y);
    cout << "   ����� (x,y)=" << x << "," << y << endl;

    cout << "[3] �ǰѦ� call by reference" << endl;
    cout << "   ����e (x,y)=" << x << "," << y << endl;
    swapr(x, y);
    cout << "   ����� (x,y)=" << x << "," << y << endl;

    cout << "[4] �ǭ� �ǧ} �ǰѦ�\n";
    printf("   ����e a=%.1f b=%.1f c=%.1f\n", a, b, c);
    bvar(a, &b, c);
    printf("   ����� a=%.1f b=%.1f c=%.1f\n", a, b, c);
}

// f13
void rnd(int[], int val);

int *rnd()
{
    int *r = new int[5];

    srand((unsigned)time(NULL));
    printf("%p\n", r);
    for (int i = 0; i < 5; i++)
    {
        r[i] = rand() % 20 + 6;
        printf("%d ", r[i]);
    }
    return r;
}

int fibn(int n)
{
    printf("fib[%d] ", n);
    if (n == 0 || n == 1)
    {
        if (n == 0)
            cout << endl;
        return 1;
    }
    else
        return fibn(n - 1) + fibn(n - 2);
}

void f13()
{
    cout << "-------------��Ʀ^�ǰ}�C-------------\n";
    int *ptr;
    ptr = rnd();
    printf("\n%p\n", ptr);
    cout << "[1]\n";
    for (int i = 0; i < 5; i++)
        printf("r[%d]=%2d=%2d\n", i, *(ptr + i), ptr[i]);
    cout << "------------------------------" << endl;

    int a[6] = {9, 1, 3};
    int n;
    cout << "[2] ��X��l��\n";
    for (int i = 0; i < 6; i++)
        printf("%3d ", a[i]);
    cout << endl;

    n = sizeof(a) / sizeof(int);
    rnd(a, n);
    cout << "[3] ��X�üƭ�\n";
    for (int i = 0; i < 6; i++)
        printf("%3d ", a[i]);
    cout << endl;

    cout << "------------------------------" << endl;
    int fib[100], fn;
    fib[0] = 1;
    fib[1] = 1;
    cout << "�O��ƦC: fib(n) = fib(n-1) + fib(n-2), n>=2" << endl;
    cout << "[4] ������\n";
    for (int i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << fib[i];
    }
    cout << endl;

    cout << "[5] ���j��\n";
    fn = fibn(n);
    cout << "fib[" << n << "]=" << fn << endl;
}

void rnd(int *x, int val)
{
    srand(time(NULL));
    for (int i = 0; i < val; i++)
    {
        x[i] = rand() % 95 + 5;
    }
}

//F14
struct student {
    string name;
    int id;
    float height;
    float weight;
    float bmi;
    void calbmi() {
        float h = height/100;
        bmi = weight/h/h;
    }
};

void f14(){
    cout << "[1]���c\n";
    float h;
    student stu[3] = {
        {"John",1,170,80.5},
        {"Mary",2,158.5,46},
        {"Shi",3,170,80}
    };

    for(int i=0; i<3; i++){
        stu[i].calbmi();
        cout << stu[i].name << setw(10) << stu[i].id << setw(10);
        cout << stu[i].height << setw(10) << stu[i].weight << setw(10);
        cout << stu[i].bmi << endl;
    }
    cout << "[2]���c����\n";
    student *p1,*p2;
    p1=stu;

    cout << "[3]" << p1->name << "\t" << p1->id << endl;
    cout << "[4]�Х�p1 ��XShi ��name id" << endl;
    cout << (p1+2) -> name << "\t" << (p1+2) -> id << "\t" << (p1+2) -> bmi << endl;
    p2 = &stu[1];
    cout << "[5]�Х�p2 ��XShi��Nameid" << endl;
    cout << (p2+1) -> name << "\t" << (p2+1) -> id << endl;
}