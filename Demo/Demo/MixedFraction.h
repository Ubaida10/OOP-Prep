#pragma once

class MixedFraction
{
private:
    int integer;
    int numerator;
    int denominator;
public:
    MixedFraction();
    MixedFraction(int, int, int);
    MixedFraction(int);
    MixedFraction(const MixedFraction&);
    ~MixedFraction();
    
    void setIntegralPart(int);
    void setNumerator(int);
    void setDenominator(int);
    int getIntegralPart() const;
    int getNumerator() const;
    int getDenominator() const;

    int evaluate();
    void display() const;

    MixedFraction operator+(const MixedFraction&);
    MixedFraction operator-(const MixedFraction&);
    MixedFraction operator*(const MixedFraction&);
    MixedFraction operator/(const MixedFraction&);
};
