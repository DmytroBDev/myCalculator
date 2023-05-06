#include <iostream>

using namespace std;

float plusMethod(float num1, float num2) 
{
    return num1 + num2;
}

float minusMethod(float num1, float num2) 
{
    return num1 - num2;
}

float multipleMethod(float num1, float num2)
{
    return num1 * num2;
}

float divideMethod(float num1, float num2)
{
    if (num2 == 0)
    {
        return;
    }

    return num1 / num2;
}

int main()
{
    cout << "It is my first gitCalculator\n";

    plusMethod(2, 4);

    minusMethod(2, 4);


}


