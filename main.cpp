#include <iostream>
#include "Cfraction.h"

int main()
{
    std::cout << "Creation of fractions:" << std::endl;
    Cfraction a;
    Cfraction b(3);
    Cfraction c(2, 4);
    std::cout << "a = " << a.GetNumerator() << "/" << a.GetDenominator() << std::endl;
    std::cout << "b = " << b.GetNumerator() << "/" << b.GetDenominator() << std::endl;
    std::cout << "c = " << c.GetNumerator() << "/" << c.GetDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << "Changing fractions:" << std::endl;
    a = c;
    b(5);
    c(4, 8);
    std::cout << "a = " << a.GetNumerator() << "/" << a.GetDenominator() << std::endl;
    std::cout << "b = " << b.GetNumerator() << "/" << b.GetDenominator() << std::endl;
    std::cout << "c = " << c.GetNumerator() << "/" << c.GetDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << "Actions with fractions:" << std::endl;
    Cfraction d;
    d=a+b;
    std::cout << "a+b = " << d.GetNumerator() << "/" << d.GetDenominator() << "\t\t";
    d=b+2;
    std::cout << "b+2 = " << d.GetNumerator() << "/" << d.GetDenominator() << "\t\t";
    d=c*a;
    std::cout << "c*a = " << d.GetNumerator() << "/" << d.GetDenominator() << "\t\t";
    d=c*4;
    std::cout << "c*4 = " << d.GetNumerator() << "/" << d.GetDenominator() << std::endl;
    d=b-a;
    std::cout << "b-a = " << d.GetNumerator() << "/" << d.GetDenominator() << "\t\t";
    d=b-2;
    std::cout << "b-2 = " << d.GetNumerator() << "/" << d.GetDenominator() << "\t\t";
    d=c/a;
    std::cout << "c/a = " << d.GetNumerator() << "/" << d.GetDenominator() << "\t\t";
    d=b/5;
    std::cout << "b/5 = " << d.GetNumerator() << "/" << d.GetDenominator() << std::endl;

    d=a++;
    std::cout << "a++ = " << d.GetNumerator() << "/" << d.GetDenominator();
    std::cout<<" (a="<<a.GetNumerator() << "/" << a.GetDenominator()<< ")\t";
    a(2,4);
    d=++a;
    a(2,4);
    std::cout << "++a = " << d.GetNumerator() << "/" << d.GetDenominator() << "\t\t";
    d=b--;
    std::cout << "b-- = " << d.GetNumerator() << "/" << d.GetDenominator();
    std::cout<<" (b="<<b.GetNumerator() << "/" << b.GetDenominator()<< ")\t";
    b(5);
    d=--b;
    b(5);
    std::cout << "--b = " << d.GetNumerator() << "/" << d.GetDenominator() << std::endl;
    std::cout << "double(a) = " << double(a)<< "\n\n";

    d=a;
    d+=b;
    std::cout << "a+=b " << "\t";
    std::cout<<"(a = " << d.GetNumerator() << "/" << d.GetDenominator()<<")\t";
    d=a;
    d-=c;
    std::cout << "a-=c" << "\t";
    std::cout<<"(a = " << d.GetNumerator() << "/" << d.GetDenominator()<<")\n";
    d=b;
    d*=a;
    std::cout << "b*=a" << "\t";
    std::cout<<"(b = " << d.GetNumerator() << "/" << d.GetDenominator()<<")\t";
    d=c;
    d/=b;
    std::cout << "c/=b" << "\t";
    std::cout<<"(c = " << d.GetNumerator() << "/" << d.GetDenominator()<<")\n\n";


    std::cout << "a==c ? " << "\t";
    std::cout<<(a==c?"True\t\t":"False\t\t");

    std::cout << "a!=b ? " << "\t";
    std::cout<<(a!=b?"True\t\t":"False\t\t");

    std::cout << "a<c ? " << "\t";
    std::cout<<(a<c?"True\n":"False\n");

    std::cout << "b>c ? " << "\t";
    std::cout<<(b>c?"True\t\t":"False\t\t");

    std::cout << "a>=c ? " << "\t";
    std::cout<<(a>=c?"True\t\t":"False\t\t");

    std::cout << "a<=c ? " << "\t";
    std::cout<<(a<=b?"True\n":"False\n");

    return 0;
}

