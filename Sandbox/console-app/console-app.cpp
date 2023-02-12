// console-app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Item.h"

void MakeItZero(int Integer)
{
    Integer = 0;
}

void MakeItZeroWithPointer(int* Integer)
{
    *Integer = 0;
}

void MakeItZeroWithReference(int& Integer)
{
    Integer = 0;
}

int main()
{
    std::cout << "Hello World!\n";

    if (true)
    {
        std::cout << "It is true\n";
    }

    if (false)
    {
        std::cout << "Never visited\n";
    }
    else
    {
        std::cout << "It is false\n";
    }

    bool ConditionA = true;
    bool ConditionB = false;
    if (ConditionA && ConditionB)
    {
        std::cout << "Never visited\n";
    }
    if (ConditionA || ConditionB)
    {
        std::cout << "ConditionA or ConditionB is true\n";
    }

    bool Conditions[3];
    Conditions[0] = true;
    if (Conditions[0])
    {
        std::cout << "Conditions[0] is true\n";
    }
    int Integers[5] = { 1, 2, 3, 4, 5 };
    std::cout << "Integers[2] : " << Integers[2] << "\n";
    float Numbers[3] = { 1.0 };
    std::cout << "Numbers[0] : " << Numbers[0] << ", Numbers[1] : " << Numbers[1] << "\n";

    float NumbersSum = 0.0;
    for (int Index = 0; Index < 3; ++Index)
    {
        NumbersSum = NumbersSum + Numbers[Index];
    }
    std::cout << "NumbersSum : " << NumbersSum << "\n";
    while (Integers[4] > 0)
    {
        Integers[4] = Integers[4] - 1;
    }
    std::cout << "Integers[4] after while() : " << Integers[4] << "\n";

    {
        int IntegerA = 10;
        MakeItZero(IntegerA);
        std::cout << "IntegerA after MakeItZero() : " << IntegerA << "\n";

        IntegerA = 10;
        MakeItZeroWithPointer(&IntegerA);
        std::cout << "IntegerA after MakeItZeroWithPointer() : " << IntegerA << "\n";

        IntegerA = 10;
        MakeItZeroWithReference(IntegerA);
        std::cout << "IntegerA after MakeItZeroWithReference() : " << IntegerA << "\n";
    }

    {
        Item ItemA;
        std::cout << "[ItemA Information]\n";
        ItemA.PrintInformation();
    }

    {
        Item ItemB("Coin", "A currency for trade.", 100, 0.1);
        std::cout << "[ItemB Information]\n";
        ItemB.PrintInformation();
    }

    {
        UsableItem ItemC("Cookie", "Cookie", 1, 0.1);
        std::cout << "[ItemC Information]\n";
        ItemC.PrintInformation();
        ItemC.Use();
    }

    {
        EquipableItem ItemD("Hat", "Hat", 1, 1.0);
        std::cout << "[ItemD Information]\n";
        ItemD.PrintInformation();
        ItemD.Equip();
    }

    {
        Item ItemE;
        UsableItem ItemF;
        Item* PointerA = &ItemE;
        PointerA->PrintInformation();
        PointerA = &ItemF;
        PointerA->PrintInformation();
        //UsableItem* PointerB = &ItemE;
    }

    {
        Item ItemE;
        UsableItem ItemF;
        Item* PointerA = &ItemE;
        PointerA->NonVirtualFunc();
        PointerA->VirtualFunc();
        PointerA = &ItemF;
        PointerA->NonVirtualFunc();
        PointerA->VirtualFunc();
        UsableItem* PointerB = &ItemF;
        PointerB->NonVirtualFunc();
        PointerB->VirtualFunc();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
