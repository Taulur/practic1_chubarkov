#include <iostream>

int pow(int a, int b) {
    int result = a;
    for (int i = 1; i < b; i++)
    {
        result = result * a;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");
  

    int first;
    int second;
    std::cout << "Введите первое число\n";
    std::cin >> first;
    std::cout << "Введите второго число\n";
    std::cin >> second;

    std::cout << pow(first, second) + " - число в степени";


    int i = 2;

    while (true)
    {
        if ((first % 2 == 0) && (second % 2 == 0))
        {
            if (first >= second)
            {
                std::cout << first;
                break;
            }
            else
            {
                std::cout << second;
                break;
            }
        }
        else if ((first % 3 == 0) && (second % 3 == 0))
        {
            if (first >= second)
            {
                std::cout << first;
                break;
            }
            else
            {
                std::cout << second;
                break;
            }
        }
        else if ((first % i == 0) && (second % i == 0))
        {
            
            std::cout << i;
            break;
        }
        else if ((i > first) && (i > second))
        {
            std::cout << first * second;
            break;
        }
        else
        {
            i++;
        }

    }

    return 0;
}