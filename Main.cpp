#include <iostream>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <conio.h>
using namespace std;

#define PI 3.141
void Menu1();
void Menu2();
void Menu3();
void Menu4();
void Menu5();
void Plus();
void Minus();
void Multiple();
void Divide();

void LogBase10();
void NaturalLog();

void Base2to8();
void Base2to10();
void Base2to16();
void Base8to2();
void Base8to10();
void Base8to16();
void Base10to2();
void Base10to8();
void Base10to16();
void Base16to2();
void Base16to8();
void Base16to10();
void Circle();
void Rectangle();
void Triangle();

int main()
{
    while (1)
    {
        cout << endl
             << endl;
        int choice1;
        cout << "======= Main Menu ========" << endl;
        cout << "1 : + - x /" << endl;
        cout << "2 : Log" << endl;
        cout << "3 : NumberBase" << endl;
        cout << "4 : Area" << endl;
        cout << "5 : Exit" << endl;
        cout << "==========================" << endl;
        cout << "Choice : ";
        cin >> choice1;
        switch (choice1)
        {
        case 1:
            Menu1();
            break;
        case 2:
            Menu2();
            break;
        case 3:
            Menu3();
            break;
        case 4:
            Menu4();
            break;
        case 5:
            Menu5();
            break;
        default:
            cout << "Try Again" << endl;
        }
    }
}

void Menu1()
{
    cout << endl
         << endl;
    int choice2;
    cout << "========= Menu 1 =========" << endl;
    cout << "1 : +" << endl;
    cout << "2 : -" << endl;
    cout << "3 : *" << endl;
    cout << "4 : /" << endl;
    cout << "==========================" << endl;
    cout << "Choice : ";
    cin >> choice2;
    if(choice2 <= 0) {
        cout << "Error";
        exit(0);
    }
    else if(choice2 >= 5) {
        cout << "Error";
        exit(0);
    }
    cout << "==========================" << endl;

    if (choice2 == 1)
    {
        Plus();
    }
    if (choice2 == 2)
    {
        Minus();
    }
    if (choice2 == 3)
    {
        Multiple();
    }
    if (choice2 == 4)
    {
        Divide();
    }
}

void Menu2()
{
    cout << endl
         << endl;
    int choice2;
    cout << "========= Menu 2 =========" << endl;
    cout << "1 : Log Base 10" << endl;
    cout << "2 : Natural Log" << endl;
    cout << "==========================" << endl;
    cout << "Choice : ";
    cin >> choice2;
    if(choice2 <= 0) {
        cout << "Error";
        exit(0);
    }
    else if(choice2 >= 3) {
        cout << "Error";
        exit(0);
    }
    cout << "==========================" << endl;

    if (choice2 == 1)
    {
        LogBase10();
    }
    if (choice2 == 2)
    {
        NaturalLog();
    }
}

void Menu3()
{
    cout << endl
         << endl;
    int choice2;
    cout << "========= Menu 3 =========" << endl;
    cout << "1 : Base 2 to 8" << endl;
    cout << "2 : Base 2 to 10" << endl;
    cout << "3 : Base 2 to 16" << endl;

    cout << "4 : Base 8 to 2" << endl;
    cout << "5 : Base 8 to 10" << endl;
    cout << "6 : Base 8 to 16" << endl;

    cout << "7 : Base 10 to 2" << endl;
    cout << "8 : Base 10 to 8" << endl;
    cout << "9 : Base 10 to 16" << endl;

    cout << "10 : Base 16 to 2" << endl;
    cout << "11 : Base 16 to 8" << endl;
    cout << "12 : Base 16 to 10" << endl;
    cout << "==========================" << endl;
    cout << "Choice : ";
    cin >> choice2;
    if(choice2 <= 0) {
        cout << "Error";
        exit(0);
    }
    else if(choice2 >= 13) {
        cout << "Error";
        exit(0);
    }
    
    cout << "==========================" << endl;

    if (choice2 == 1)
    {
        Base2to8();
    }
    if (choice2 == 2)
    {
        Base2to10();
    }
    if (choice2 == 3)
    {
        Base2to16();
    }

    if (choice2 == 4)
    {
        Base8to2();
    }
    if (choice2 == 5)
    {
        Base8to10();
    }
    if (choice2 == 6)
    {
        Base8to16();
    }
    if (choice2 == 7)
    {
        Base10to2();
    }
    if (choice2 == 8)
    {
        Base10to8();
    }
    if (choice2 == 9)
    {
        Base10to16();
    }
    if (choice2 == 10)
    {
        Base16to2();
    }
    if (choice2 == 11)
    {
        Base16to8();
    }
    if (choice2 == 12)
    {
        Base16to10();
    }
}
void Menu4()
{
    cout << endl
         << endl;
    int choice2;
    cout << "========= Menu 4 =========" << endl;
    cout << "1 : Area of Circle" << endl;
    cout << "2 : Area of Rectangle" << endl;
    cout << "3 : Area of Triangle" << endl;
    cout << "==========================" << endl;
    cout << "Choice : ";
    cin >> choice2;
    if(choice2 <= 0) {
        cout << "Error";
        exit(0);
    }
    else if(choice2 >= 4) {
        cout << "Error";
        exit(0);
    }
    cout << "==========================" << endl;

    if (choice2 == 1)
    {
        Circle();
    }
    if (choice2 == 2)
    {
        Rectangle();
    }
    if (choice2 == 3)
    {
        Triangle();
    }
}

void Menu5()
{
    cout << endl
         << endl;
    cout << "Exit" << endl;
    exit(0);
}

void Plus()
{
    cout << endl
         << endl;
    long int n1, n2, sum;
    cout << "Enter Number 1 : ";
    cin >> n1;
    cout << "Enter Number 2 : ";
    cin >> n2;
    sum = n1 + n2;
    cout << endl << "========= Result =========" << endl;
    cout << n1 << " + " << n2 << " : " << sum << endl;
    cout << "==========================" << endl;
}

void Minus()
{
    cout << endl
         << endl;
    long int n1, n2, sum;
    cout << "Enter Number 1 : ";
    cin >> n1;
    cout << "Enter Number 2 : ";
    cin >> n2;
    sum = n1 - n2;
    cout << endl << "========= Result =========" << endl;
    cout << n1 << " - " << n2 << " : " << sum << endl;
    cout << "==========================" << endl;
}

void Multiple()
{
    cout << endl
         << endl;
    long int n1, n2, sum;
    cout << "Enter Number 1 : ";
    cin >> n1;
    cout << "Enter Number 2 : ";
    cin >> n2;
    sum = n1 * n2;
    cout << endl << "========= Result =========" << endl;
    cout << n1 << " x " << n2 << " : " << sum << endl;
    cout << "==========================" << endl;
}

void Divide()
{
    cout << endl
         << endl;
    long int n1, n2, sum;
    cout << "Enter Number 1 : ";
    cin >> n1;
    cout << "Enter Number 2 : ";
    cin >> n2;
    sum = n1 / n2;
    cout << endl << "========= Result =========" << endl;
    cout << n1 << " / " << n2 << " : " << sum << endl;
    cout << "==========================" << endl;
}

void LogBase10()
{
    cout << endl
         << endl;
    double num, result;
    cout << "Enter Number : ";
    cin >> num;
    result = log10(num);
    cout << endl << "========= Result =========" << endl;
    cout << "Log10 : " << result << endl;
    cout << "==========================" << endl;
}

void NaturalLog()
{
    cout << endl
         << endl;
    double num, result;
    cout << "Enter Number : ";
    cin >> num;
    result = log(num);
    cout << endl << "========= Result =========" << endl;
    cout << "Natural Log : " << result << endl;
    cout << "==========================" << endl;
}

void Base2to8()
{
    cout << endl
         << endl;
    long int binnum1, binary, rem, decnum = 0, quot, i = 1, j;
    long int octnum[100];
    cout << "Enter Binary Number : ";
    cin >> binary;

    binnum1 = binary;
    while (binary > 0)
    {
        rem = binary % 10;
        decnum = decnum + rem * i;
        i = i * 2;
        binary = binary / 10;
    }
    i = 1;
    quot = decnum;
    while (quot > 0)
    {
        octnum[i++] = quot % 8;
        quot = quot / 8;
    }

    cout << endl << "========= Result =========" << endl;
    cout << "Octal Number : ";
    for (j = i - 1; j > 0; j--)
        cout << octnum[j];
    cout << endl;
    cout << "==========================" << endl;
}

void Base2to10()
{
    cout << endl
         << endl;
    long int decimal = 0, binary, remainder, product = 1;
    cout << "Enter Binary Number : ";
    cin >> binary;
    while (binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + (remainder * product);
        binary = binary / 10;
        product *= 2;
    }
    cout << endl << "========= Result =========" << endl;
    cout << "Decimal Number : " << decimal << endl;
    cout << "==========================" << endl;
}

void Base2to16()
{
    cout << endl
         << endl;
    long int hex[1000];
    long int i = 1, j = 0, rem, dec = 0, binary;
    cout << "Enter Binary Number : ";
    cin >> binary;
    while (binary > 0)
    {
        rem = binary % 2;
        dec = dec + rem * i;
        i = i * 2;
        binary = binary / 10;
    }
    i = 0;
    while (dec != 0)
    {
        hex[i] = dec % 16;
        dec = dec / 16;
        i++;
    }
    cout << endl << "========= Result =========" << endl;
    cout << "Hexadecimal Number : ";
    for (j = i - 1; j >= 0; j--)
    {
        if (hex[j] > 9)
            cout << (char)(hex[j] + 55) << "\n";
        else
            cout << hex[j];
    }
    cout << "==========================" << endl;
}

void Base8to2()
{
    cout << endl
         << endl;
    long int decimal = 0, octal, remainder, product = 0;
    long binary = 0;

    cout << "Enter Octal Number : ";
    cin >> octal;

    while (octal != 0)
    {
        decimal += (octal % 10) * pow(8, product);
        ++product;
        octal /= 10;
    }

    product = 1;
    while (decimal != 0)
    {
        binary += (decimal % 2) * product;
        decimal /= 2;
        product *= 10;
    }
    cout << endl << "========= Result =========" << endl;
    cout << "Binary Number : " << binary << endl;
    cout << "==========================" << endl;
}

void Base8to10()
{
    cout << endl
         << endl;
    long int decimal = 0, octal, remainder, product = 1;
    cout << "Enter Octal Number : ";
    cin >> octal;
    while (octal != 0)
    {
        remainder = octal % 10;
        octal = octal / 10;
        decimal = decimal + (remainder * product);
        product *= 8;
    }
    cout << endl << "========= Result =========" << endl;
    cout << "Decimal Number : " << decimal << endl;
    cout << "==========================" << endl;
}

void Base8to16()
{
    cout << endl
         << endl;
    long int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, temp_Octal, binary, place;
    char hex[65] = "";
    long int rem;

    place = 1;
    binary = 0;

    cout << " Enter Octal Number: ";
    cin >> octal;
    temp_Octal = octal;

    // First Convert Octal to Binary

    while (temp_Octal > 0)
    {
        rem = temp_Octal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        temp_Octal /= 10;

        place *= 1000;
    }

    // Convert Binary to Hexadecimal

    while (binary > 0)
    {
        rem = binary % 10000;
        switch (rem)
        {
        case 0:
            strcat(hex, "0");
            break;
        case 1:
            strcat(hex, "1");
            break;
        case 10:
            strcat(hex, "2");
            break;
        case 11:
            strcat(hex, "3");
            break;
        case 100:
            strcat(hex, "4");
            break;
        case 101:
            strcat(hex, "5");
            break;
        case 110:
            strcat(hex, "6");
            break;
        case 111:
            strcat(hex, "7");
            break;
        case 1000:
            strcat(hex, "8");
            break;
        case 1001:
            strcat(hex, "9");
            break;
        case 1010:
            strcat(hex, "A");
            break;
        case 1011:
            strcat(hex, "B");
            break;
        case 1100:
            strcat(hex, "C");
            break;
        case 1101:
            strcat(hex, "D");
            break;
        case 1110:
            strcat(hex, "E");
            break;
        case 1111:
            strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }

    strrev(hex);
    cout << endl << "========= Result =========" << endl;
    cout << " Hexadecimal Number : " << hex << endl;
    cout << "==========================" << endl;
}

void Base10to2()
{
    cout << endl
         << endl;
    long int decimal, binary = 0, remainder, product = 1;
    cout << "Enter Decimal Number : ";

    cin >> decimal;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }
    cout << endl << "========= Result =========" << endl;
    cout << "Binary Number : " << binary << endl;
    cout << "==========================" << endl;
}

void Base10to8()
{
    cout << endl
         << endl;
    long int decimal, octalNum[50], i = 0;
    cout << "Enter Decimal Number : ";
    cin >> decimal;
    while (decimal != 0)
    {
        octalNum[i] = decimal % 8;
        i++;
        decimal = decimal / 8;
    }
    cout << endl << "========= Result =========" << endl;
    cout << "Octal Number : ";
    for (i = (i - 1); i >= 0; i--)
        cout << octalNum[i] << endl;
    cout << "==========================" << endl;
}

void Base10to16()
{
    cout << endl
         << endl;
    long int num, temp, i = 1, j, r;
    char hex[50];
    cout << " Enter Decimal Number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            hex[i++] = r + 48;
        else
            hex[i++] = r + 55;
        temp = temp / 16;
    }
    cout << endl << "========= Result =========" << endl;
    cout << "Hexadecimal Number : ";
    for (j = i; j > 0; j--)
        cout << hex[j] << endl;
    cout << "==========================" << endl;
}

void Base16to2()
{
    cout << endl
         << endl;
    long int i = 0;
    char hex[10];
    cout << "Enter Hexadecimal Number : ";
    cin >> hex;
    cout << endl << "==========================" << endl;
    cout << "========= Result =========" << endl;
    cout << "Binary Number : ";
    while (hex[i])
    {
        switch (hex[i])
        {
        case '0':
            cout << "0000";
            break;
        case '1':
            cout << "0001";
            break;
        case '2':
            cout << "0010";
            break;
        case '3':
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "";
        }
        i++;
    }
    cout << endl
         << "==========================" << endl;
    cout << "==========================" << endl;
}
void Base16to8()
{
    cout << endl
         << endl;
    long int decimalNum = 0, octalNum[30], rem, i = 0, len = 0;
    char hex[10];
    cout << "Enter the Hexadecimal Number : ";
    cin >> hex;
    while (hex[i] != '\0')
    {
        len++;
        i++;
    }
    len--;
    i = 0;
    while (len >= 0)
    {
        rem = hex[len];
        if (rem >= 48 && rem <= 57)
            rem = rem - 48;
        else if (rem >= 65 && rem <= 70)
            rem = rem - 55;
        else if (rem >= 97 && rem <= 102)
            rem = rem - 87;
        else
        {
            cout << "";
        }
        decimalNum = decimalNum + (rem * pow(16, i));
        len--;
        i++;
    }
    i = 0;
    while (decimalNum != 0)
    {
        octalNum[i] = decimalNum % 8;
        i++;
        decimalNum = decimalNum / 8;
    }
    cout << endl << "==========================" << endl;
    cout << "========= Result =========" << endl;
    cout << "Octal : ";
    for (i = (i - 1); i >= 0; i--)
        cout << octalNum[i];
    cout << endl << "==========================" << endl;
    cout << "==========================" << endl;
}

void Base16to10()
{
    long int decimalNum = 0, rem, i = 0, len = 0;
    char hex[20];
    cout << "Enter the Hexadecimal Number : ";
    cin >> hex;
    while (hex[i] != '\0')
    {
        len++;
        i++;
    }
    len--;
    i = 0;
    while (len >= 0)
    {
        rem = hex[len];
        if (rem >= 48 && rem <= 57)
            rem = rem - 48;
        else if (rem >= 65 && rem <= 70)
            rem = rem - 55;
        else if (rem >= 97 && rem <= 102)
            rem = rem - 87;
        else
        {
            cout << "";
        }
        decimalNum = decimalNum + (rem * pow(16, i));
        len--;
        i++;
    }
    cout << endl << "==========================" << endl;
    cout << "========= Result =========" << endl;
    cout << "Decimal : " << decimalNum << endl;
    cout << "==========================" << endl;
    cout << "==========================" << endl;
}

void Circle()
{
    double radius, area;
    cout << "Enter radius of circle : ";
    cin >> radius;
    area = PI * radius * radius;
    cout << endl << "========= Result =========" << endl;
    cout << "==========================" << endl;
    cout << "Area : PI x Radius x Radius" << endl;
    cout << "Area of Circle : " << area << endl;
    cout << "==========================" << endl;
    cout << "==========================" << endl;
}

void Rectangle()
{
    long int length, width, area;

    cout << "Length of Rectangle : ";
    cin >> length;

    cout << "Width of Rectangle : ";
    cin >> width;

    area = length * width;
    cout << endl;
    cout << endl << "==========================" << endl;
    cout << "========= Result =========" << endl;
    cout << "Area : Legth x Width" << endl;
    cout << "Area of Rectangle : " << area << endl;
    cout << "==========================" << endl;
    cout << "==========================" << endl;
    cout << endl;
    cout << endl;
}

void Triangle()
{
    long int height, base;
    double area;
    cout << "Enter Height : ";
    cin >> height;
    cout << "Enter Base : ";
    cin >> base;
    area = (0.5) * height * base;
    cout << endl;
    cout << endl << "==========================" << endl;
    cout << "========= Result =========" << endl;
    cout << "Area : 0.5 x Height x Base" << endl;
    cout << "Area of Triangle : " << area << endl;
    cout << "==========================" << endl;
    cout << "==========================" << endl;
    cout << endl;
    cout << endl;
}