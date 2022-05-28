//
// Created by Igor on 26.05.2022.
//
#ifndef CFRACTION_CFRACTION_H
#define CFRACTION_CFRACTION_H

class Cfraction {
public:

    Cfraction(int numerator = 0, int denominator = 1)
    {
        this->numerator = numerator;
        this->denominator = (denominator == 0) ? 1 : denominator;
    }

    Cfraction(const Cfraction &fraction)
    {
        numerator = fraction.numerator;
        denominator = (fraction.denominator == 0) ? 1 : fraction.denominator;
    }

    ~Cfraction()
    = default;

    Cfraction operator +(const Cfraction &cfraction) const
    {
        Cfraction temp;
        if(denominator==cfraction.denominator)
            temp.denominator=numerator+cfraction.numerator;
        else
        {
            temp.numerator=numerator*cfraction.denominator+cfraction.numerator*denominator;
            temp.denominator=denominator*cfraction.denominator;
        }
        return temp;
    }

    Cfraction operator + (const int &value) const
    {
        Cfraction temp;
        temp.numerator=numerator+value*denominator;
        temp.denominator=denominator;
        return temp;
    }

    Cfraction operator -(const Cfraction &cfraction) const
    {
        Cfraction temp;
        if(denominator==cfraction.denominator)
            temp.denominator=numerator-cfraction.numerator;
        else
        {
            temp.numerator=numerator*cfraction.denominator-cfraction.numerator*denominator;
            temp.denominator=denominator*cfraction.denominator;
        }
        return temp;
    }

    Cfraction operator - (const int &value) const
    {
        Cfraction temp;
        temp.numerator=numerator-value*denominator;
        temp.denominator=denominator;
        return temp;
    }

    Cfraction operator *(const Cfraction &cfraction) const
    {
        Cfraction temp;
        temp.numerator=numerator*cfraction.numerator;
        temp.denominator=denominator*cfraction.denominator;
        return temp;
    }

    Cfraction operator * (const int &value) const
    {
        Cfraction temp;
        temp.numerator=numerator*value;
        temp.denominator=denominator;
        return temp;
    }

    Cfraction operator /(const Cfraction &cfraction) const
    {
        Cfraction temp;
        temp.numerator=numerator*cfraction.denominator;
        temp.denominator=denominator*cfraction.numerator;
        return temp;
    }

    Cfraction operator / (const int &value) const
    {
        Cfraction temp;
        temp.numerator=numerator;
        temp.denominator*=value;
        return temp;
    }

    Cfraction operator +=(const Cfraction &cfraction)
    {
        if(denominator==cfraction.denominator)
            numerator+=cfraction.numerator;
        else
        {
            numerator=numerator*cfraction.denominator+cfraction.numerator*denominator;
            denominator*=cfraction.denominator;
        }
        return *this;
    }

    Cfraction operator +=(const int &value)
    {
        numerator+=value*denominator;
        return *this;
    }

    Cfraction operator -=(const Cfraction &cfraction)
    {
        if (denominator==cfraction.denominator)
            numerator-=cfraction.numerator;
        else
        {
            numerator=numerator*cfraction.denominator-cfraction.numerator*denominator;
            denominator*=cfraction.denominator;
        }
        return *this;
    }

    Cfraction operator -=(const int &value)
    {
        numerator-=value*denominator;
        return *this;
    }

    Cfraction operator *=(const Cfraction &cfraction)
    {
        numerator*=cfraction.numerator;
        denominator*=cfraction.denominator;
        return *this;
    }

    Cfraction operator *=(const int &value)
    {
        numerator*=value;
        return *this;
    }

    Cfraction operator /=(const Cfraction &cfraction)
    {
        numerator*=cfraction.denominator;
        denominator*=cfraction.numerator;
        return *this;
    }

    Cfraction operator /=(const int &value)
    {
        denominator*=value;
        return *this;
    }

    Cfraction operator ++()
    {
        numerator+=denominator;
        return *this;
    }

    Cfraction operator ++(int)
    {
        Cfraction temp(*this);
        numerator+=denominator;
        return temp;
    }

    Cfraction operator --()
    {
        numerator-=denominator;
        return *this;
    }

    Cfraction operator --(int)
    {
        Cfraction temp(*this);
        numerator-=denominator;
        return temp;
    }

    explicit operator double() const
    {
        return (double) numerator / denominator;
    }

    int operator()(int numerator, int denominator=1)
    {
        this->numerator=numerator;
        this->denominator=(denominator==0) ? 1 : denominator;
        return 0;
    }

    int GetNumerator() const
    {
        return numerator;
    }

    int GetDenominator() const
    {
        return denominator;
    }

    bool  operator== (const  Cfraction &fraction) const
    {
        return (double (numerator)/double (denominator))==(double (fraction.numerator)/double (fraction.denominator));
    }

    bool  operator!= (const  Cfraction &fraction) const
    {
        return (double (numerator)/double (denominator))!=(double (fraction.numerator)/double (fraction.denominator));
    }

    bool  operator < (const  Cfraction &fraction) const
    {
        return (double (numerator)/double (denominator))<(double (fraction.numerator)/double (fraction.denominator));
    }

    bool  operator > (const  Cfraction &fraction) const
    {
        return (double (numerator)/double (denominator))>(double (fraction.numerator)/double (fraction.denominator));
    }

    bool  operator<= (const  Cfraction &fraction) const
    {
        return (double (numerator)/double (denominator))<=(double (fraction.numerator)/double (fraction.denominator));
    }

    bool  operator>= (const  Cfraction &fraction) const
    {
        return (double (numerator)/double (denominator))>=(double (fraction.numerator)/double (fraction.denominator));
    }

private:
    int numerator;
    int denominator;
};
#endif //CFRACTION_CFRACTION_H
