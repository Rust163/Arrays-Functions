#include <iostream>
using namespace std;

int calculateThePowerOfaNumber(int foundationDegree, int degreeIndicator) {
    int degreeOfNumber = foundationDegree * degreeIndicator;
    return degreeOfNumber;
}

int sumOfNumbers(int number1, int number2) {
    int sum = 0;
    if (number1 < number2) {
         for (int i = number1; i <= number2; i++)
          {
            sum += i;
          }
         cout << "Сумма чисел в диапазоне от " << number1 << " до " << number2 << " равна: " << sum << endl;
    }
    else {
        cout << "Ошибка первое число не может быть больше второго!";
    }
    return sum;
}

int findingThePerfectNumber(int x, int y) {
    for (int i = x; i < y; i++)
    {
        int perfectNumber = 0;
        for (int j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                perfectNumber += j;
            }
        }
        if (perfectNumber == i && perfectNumber)
        {
            cout << perfectNumber << ", ";
        }
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "\n===================================Двумерные массивы===================================\n";
    cout << "\n===============================================Задача 1=================================\n";
    const size_t a = 5, b = 5;
    int arr[a][b];
    int n;
    cout << "Введите число: ";
    cin >> n;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = n * 2;
            n *= 2;
            cout << arr[i][j] << "\t\t\t";
        }
        cout << endl;
    }

    cout << "\n===============================================Задача 2=================================\n";

    const size_t a1 = 5, b1 = 5;
    int arr1[a1][b1];
    int n1;
    cout << "Введите число: ";
    cin >> n1;
    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < b1; j++)
        {
            arr1[i][j] = n1 + 1;
            n1 += 1;
            cout << arr1[i][j] << "\t ";
        }
        cout << " ";
        cout << endl;
    }

    cout << "\n===============================================Задача 3=================================\n";
    const int row = 5;
    const int col = 5;
    int arr2[row][col];
    srand(time(0));
    int quantity;
    int shift;
    cout << "Дается двумерный массив: " << "\n";
    enum move{left, right, up, down};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[i][j] = rand() % 100;
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n";
    cout << "На какое количество элементов сдвигать?: ";
    cin >> quantity;
    cout << "Сдвиг в какую сторону необходимо реализовать? ";
    cin >> shift;
    switch (shift)
    {
    case left:
        for (int q = 0; q < quantity; q++)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col - 1; j++)
                {
                    int temp = arr2[i][j + 1];   //получается везде только левый сдвиг! Во всех 4ех вариантаxх сдвига.
                }
            }
        } 
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr2[i][j] << "\t";
            }
            cout << endl;
        } break;
    case right:
        for (int q = 0; q < quantity; q++)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = col - 1; j > 0; j--)
                {
                    int temp = arr[i][j - 1];
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
        break;
    case up:
        for (int q = 0; q < quantity; q++)
        {
            for (int i = 0; i < row - 1; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    int temp = arr2[i + 1][j];
                }
            }
        } 
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr2[i][j] << "\t";
            }
            cout << endl;
        } break;
    case down:
        for (int q = 0; q < quantity; q++)
        {
            for (int i = 0; i < row - 1; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    int temp = arr2[i + 1][j];
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr2[i][j] << "\t";
            }
            cout << endl;
        } break;
    default:
        break;
    }
    
    cout << "\n===============================================Задача 4=================================\n";

    const int num1 = 5;
    const int num2 = 5;
    int arr3[num1][num2];
    int sumArr, avrg, arrMin, arrMax;
    arrMin = 0;
    arrMax = 0;
    sumArr = 0;
    avrg = 0;
    cout << "Дается двумерный массив: " << "\n";
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            arr3[i][j] = rand() % 100;
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    } 
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            sumArr += arr3[i][j];
            avrg = sumArr / 25; 
        }
    } 
    arrMin = arrMax = arr3[0][0];
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            if (arr3[i][j] < arrMin) {
                arrMin = arr3[i][j];
            }
            if (arr3[i][j] > arrMax) {
                arrMax = arr3[i][j];
            }
        }
    }
    cout << "Сумма значений массива составляет: " << sumArr << "\n";
    cout << "Среднее значение массива составляет: " << avrg << "\n";
    cout << "Минимальное значение в массиве: " << arrMin << "\n";
    cout << "Максимальное значение в массиве: " << arrMax << "\n";
    
    cout << "\n===============================================Задача 5=================================\n";

    const int numb1 = 5;
    const int numb2 = 5;
    int arr4[numb1][numb2];
    int array[5];
    int sumTotal = 0;
    cout << "Дается двумерный массив: " << "\n";
    for (int i = 0; i < numb1; i++)
    {
        for (int j = 0; j < numb2; j++)
        {
            arr4[i][j] = rand() % 100;

        }
    }
    for (int i = 0; i < numb1; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < numb2; j++)
        {
            sumRow += arr4[i][j];
            cout << arr4[i][j] << "\t";
        }
        cout << " || " << sumRow << endl;
    } 
    cout << "===============================================" << "\n";
    for (int i = 0; i < numb1; i++)
    {
        int sumCol = 0;
        
        for (int j = 0; j < numb2; j++)
        {
            sumCol += arr4[j][i];
            
        }
        array[i] = sumCol;
    } 
    for (int i = 0; i < 5; i++) {
        cout << array[i] << "\t";
        sumTotal += array[i];
     }   
    cout << "   " << sumTotal << "\n";
    
    cout << "\n===============================================Задача 6=================================\n";

    const int arrNum1 = 5;
    const int arrNum2 = 10;
    int arr5[arrNum1][arrNum2];
    const int arr2Num1 = 5;
    const int arr2Num2 = 5;
    int arr6[arr2Num1][arr2Num2];
    cout << "Массив №1: " << "\n";
    for (int i = 0; i < arrNum1; i++)
    {
        for (int j = 0; j < arrNum2; j++)
        {
            arr5[i][j] = 0 + rand() % 50;
            cout << arr5[i][j] << "\t";
            if (j & 1)
                arr6[i][j / 2] = arr5[i][j - 1] + arr5[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Массив №2 заполненный суммами значений массива №1: " << "\n";
    for (int i = 0; i < arr2Num1; i++)
    {
        for (int j = 0; j < arr2Num2; j++)
        {
            cout << arr6[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n==============================================================================================================================\n";
    cout << "\n=====================================================ФУНКЦИИ!=================================================================\n";
    cout << "\n==============================================================================================================================\n";
    cout << "\n===============================================Задача 1=================================\n";

    int foundationDegree = 0;
    int degreeIndicator = 0;
    int degreeOfNumber =  calculateThePowerOfaNumber(5, 5);
    cout << "Степень числа равна: " << degreeOfNumber << endl;

    cout << "\n===============================================Задача 2=================================\n";

    int number1 = 0;
    int number2 = 0;
    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;
    int sum = sumOfNumbers(number1, number2);

    cout << "\n===============================================Задача 3=================================\n";
    
    int x;
    int y;
    findingThePerfectNumber(0, 9000);

}

        
    
