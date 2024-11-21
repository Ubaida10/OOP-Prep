#include "MixedFraction.h"
#include <iostream>
using namespace std;

MixedFraction::MixedFraction()
{
    setIntegralPart(0);
    setNumerator(0);
    setDenominator(1);
}

MixedFraction::MixedFraction(int a_integer, int a_numerator, int a_denominator)
{
    setIntegralPart(a_integer);
    setNumerator(a_numerator);
    setDenominator(a_denominator);
}

MixedFraction::MixedFraction(int a_integer)
{
    setIntegralPart(a_integer);
    setNumerator(0);
    setDenominator(1);
}

MixedFraction::MixedFraction(const MixedFraction& a_mFrac)
{
    setIntegralPart(a_mFrac.getIntegralPart());
    setNumerator(a_mFrac.getNumerator());
    setDenominator(a_mFrac.getDenominator());    
}

MixedFraction::~MixedFraction()
{
    std::cout<<"Destructor has been called.";
}

void MixedFraction::setIntegralPart(int a_intgr)
{
    integer = a_intgr;
}

void MixedFraction::setNumerator(int a_nmrator)
{
    numerator = a_nmrator;
}

void MixedFraction::setDenominator(int a_dnmnator)
{
    denominator = a_dnmnator;
}

int MixedFraction::getIntegralPart() const
{
    return integer;
}

int MixedFraction::getNumerator() const
{
    return numerator;
}

int MixedFraction::getDenominator() const
{
    return denominator;
}

int MixedFraction::evaluate()
{
    return (integer * denominator) + numerator;
}

void MixedFraction::display() const
{
    cout<<"Displaying the mixed fraction: ";
    cout<<integer<<" "<<numerator<<"/"<<denominator<<endl;
}

MixedFraction MixedFraction::operator+(const MixedFraction& obj)
{
    int a = (integer * denominator)+(numerator);
    int b = denominator;

    int c = (obj.integer * obj.denominator) + (obj.numerator);
    int d = obj.denominator;

    int newNumerator = ((a*d)+(b*c));
    int newDenominator = (b*d);
    
    int newIntgr = (newNumerator / newDenominator);
    newNumerator = (newNumerator % newDenominator);
    return MixedFraction(newIntgr, newNumerator, newDenominator);
}

MixedFraction MixedFraction::operator-(const MixedFraction& obj)
{
    int a = (integer * denominator)+(numerator);
    int b = denominator;

    int c = (obj.integer * obj.denominator) + (obj.numerator);
    int d = obj.denominator;

    int newNumerator = ((a*d)-(b*c));
    int newDenominator = (b*d);
    
    int newIntgr = (newNumerator / newDenominator);
    newNumerator = (newNumerator % newDenominator);
    return MixedFraction(newIntgr, newNumerator, newDenominator);
}

MixedFraction MixedFraction::operator*(const MixedFraction& obj)
{
    int a = (integer * denominator)+(numerator);
    int b = denominator;

    int c = (obj.integer * obj.denominator) + (obj.numerator);
    int d = obj.denominator;

    int newNumerator = (a*c);
    int newDenominator = (b*d);
    
    int newIntgr = (newNumerator / newDenominator);
    newNumerator = (newNumerator % newDenominator);
    return MixedFraction(newIntgr, newNumerator, newDenominator);
}

MixedFraction MixedFraction::operator/(const MixedFraction& obj)
{
    int a = (integer * denominator)+(numerator);
    int b = denominator;

    int c = (obj.integer * obj.denominator) + (obj.numerator);
    int d = obj.denominator;

    int newNumerator = (a*d);
    int newDenominator = (b*c);
    
    int newIntgr = (newNumerator / newDenominator);
    newNumerator = (newNumerator % newDenominator);
    return MixedFraction(newIntgr, newNumerator, newDenominator);
}
