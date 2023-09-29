#include "lab06.h" 
	using namespace std;

	void lab06()
	{
		int variant;
		setlocale(LC_ALL, "rus");
		cout << "выберите варианты использования(от 1 до 4): ";
		cin >> variant;
		switch (variant)
		{
		case (1):
		{
			case1();
			break;
		}
		case (2):
		{
			case2();
			break;
		}
		case (3):
		{
			case3();
			break;
		}
		case (4):
		{
			break;
		}
		}
	}

	void case1()
	{
		setlocale(LC_ALL, "rus");
		char simvol, simvol2;
		cout << "введите символы = ";
		cin >> simvol >> simvol2;

		if (((simvol >= 0x41) && (simvol <= 0x7A)) && ((simvol2 >= 0x41) && (simvol2 <= 0x7A)))
		{
			cout << "это латинская буква, разница = " << abs(simvol - simvol2);
		}
		else
		{
			cout << "ошибка";
		}
	}
	void case2()
	{
		setlocale(LC_ALL, "rus");
		char simvol, simvol2;
		cout << "введите символы = ";
		cin >> simvol >> simvol2;

		if (((simvol >= 0xC0) || (simvol <= 0xFF)) || ((simvol2 >= 0xC0) || (simvol2 <= 0xFF)))
		{
			cout << "это русская буква, разница = " << abs(simvol - simvol2);
		}
		else
		{
			cout << "ошибка";
		}
	}

	void case3()
	{
		setlocale(LC_ALL, "rus");
		char simvol, simvol2;
		cout << "введите символы = ";
		cin >> simvol >> simvol2;

		if (((simvol >= '0') && (simvol <= '9')) && ((simvol2 >= '0') && (simvol2 <= '9')))
		{
			cout << "символ: " << (int)simvol;
		}
		else
		{
			cout << "ошибка";
		}
	}

