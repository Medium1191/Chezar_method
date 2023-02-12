#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    char c, simvol;
    char stroka[500] = {};
    int x{ 0 };
    cout << "Введите слово с которым будем работать: " << endl << "ПРИМЕЧАНИЕ: Допускаются только заглавные и прописные буквы латинского алфавита " << endl;
    cin >> stroka;
    cout << "Введите действие, которое необходимо предпринять: " << endl << "ПРИМЕЧАНИЕ: s - шифровать слово, d - дешифровать слово " << endl;
    cin >> c;
    cout << "Введите целочисленное значение сдвига шифра " << endl;
    cin >> x;
    switch (c)
    {
    case 's':
        for (int i = 0; stroka[i] != '\0'; ++i)
        {
            simvol = stroka[i];
            if (simvol >= 'a' && simvol <= 'z')
            {
                simvol = simvol + x;
                if (simvol > 'z')
                {
                    simvol = simvol - 'z' + 'a' - 1;
                }
                stroka[i] = simvol;
            }
            else if (simvol >= 'A' && simvol <= 'Z')
            {
                simvol = simvol + x;
                if (simvol > 'Z')
                {
                    simvol = simvol - 'Z' + 'A' - 1;
                }
                stroka[i] = simvol;
            }
        }
        cout << stroka << endl;
        break;
    case 'd':
        for (int i = 0; stroka[i] != '\0'; ++i)
        {
            simvol = stroka[i];
            if (simvol >= 'a' && simvol <= 'z')
            {
                simvol = simvol - x;
                if (simvol < 'a')
                {
                    simvol = simvol + 'z' - 'a' + 1;
                }
                stroka[i] = simvol;
            }
            else if (simvol >= 'A' && simvol <= 'Z')
            {
                simvol = simvol - x;
                if (simvol > 'Z')
                {
                    simvol = simvol + 'Z' - 'A' + 1;
                }
                stroka[i] = simvol;
            }
        }
        cout << stroka << endl;
        break;
    }

    return 0;
}