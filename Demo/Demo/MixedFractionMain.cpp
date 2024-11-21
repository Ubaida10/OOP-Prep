/*
#include<iostream>
#include"MixedFraction.h"
using namespace std;

int main()
{
    int i1, n1, d1, i2, n2, d2;
    MixedFraction m1, m2, m3, m4;

    cout << "===================================================================================\n";
    
    do
    {
        cout << "Enter the values of first fraction\n";
        cin >> i1 >> n1 >> d1;
    } while (n1 < 0 || d1 <= 0);

    m1 = MixedFraction(i1, n1, d1);
    m1.display();
    cout << "Given fraction can be evaluated as: " << m1.evaluate() << endl;
    
    cout << "===================================================================================\n";

    cout << "===================================================================================\n";
    
    do
    {
        cout << "Enter the values of second fraction\n";
        cin >> i2 >> n2 >> d2;
    } while (n2 < 0 || d2 <= 0);

    m2 = MixedFraction(i2, n2, d2);
    m2.display();
    cout << "Given fraction can be evaluated as: " << m2.evaluate() << endl;
    
    cout << "===================================================================================\n";

    cout << "Addition of two mixed fractions:\n";
    m3 = m1 + m2;
    m3.display();

    cout << "===================================================================================\n";
    cout << "Subtraction of two mixed fractions:\n";
    m4 = m1 - m2;
    m4.display();

    cout << "===================================================================================\n";

    do
    {
        cout << "Enter the values of third fraction\n";
        cin >> i1 >> n1 >> d1;
    } while (n1 < 0 || d1 <= 0);

    m3 = MixedFraction(i1, n1, d1);
    m3.display();
    cout << "Given fraction can be evaluated as: " << m3.evaluate() << endl;
    
    cout << "===================================================================================\n";

    do
    {
        cout << "Enter the values of fourth fraction\n";
        cin >> i2 >> n2 >> d2;
    } while (n2 < 0 || d2 <= 0);

    m4 = MixedFraction(i2, n2, d2);
    m4.display();
    cout << "Given fraction can be evaluated as: " << m4.evaluate() << endl;
    
    cout << "===================================================================================\n";

    cout << "Multiplication of two mixed fractions:\n";
    m1 = m3 * m4;
    m1.display();

    cout << "===================================================================================\n";
    cout << "Division of two mixed fractions:\n";
    m2 = m3 / m4;
    m2.display();

    cout << "===================================================================================\n";
    cout << "Creating a new object using copy constructor: \n";
    MixedFraction m5(m1);
    m5.display();
    cout << "Given fraction can be evaluated as: " << m5.evaluate() << endl;

    cout << "===================================================================================\n";

    return 0;
}
*/
