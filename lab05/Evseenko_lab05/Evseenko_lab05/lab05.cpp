#include <iostream>
int main()
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    int n;
    char simvol, simvol2;
    cout << "введите первый символ = ";
    cin >> simvol;
    cout << "введите второй символ = ";
    cin >> simvol2;
    cout << "выберите варианты использования(от 1 до 4): ";
    cin >> n;
    switch (n)
    {
    case (1):
    {
        if (((simvol >= 0x41) && (simvol <= 0x7A)) && ((simvol2 >= 0x41) && (simvol2 <= 0x7A))) cout << "это латинская буква. разница = " << abs(simvol - simvol2);
        else cout << "ошибка";
        break;
    }
    case (2):
    {
        if (((simvol >= 0xC0) && (simvol <= 0xFF)) && ((simvol2 >= 0xC0) && (simvol2 <= 0xFF))) cout << "это русская буква. разница = " << abs(simvol - simvol2);
        else cout << "ошибка";
        break;
    }
    case (3):
    {
        if (((simvol >= '0') && (simvol <= '9')) && ((simvol2 >= '0') && (simvol2 <= '9'))) cout << "символ: " << (int)simvol;
        else cout << "ошибка";
        break;
    }
    case (4):
    {
        break;
    }
    }
    return 0;
}