//Зад. 1 Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
//равно номеру строки. Количество строк Н вводит пользователь
//#include <iostream>
//using namespace std;

//int main() {
//    int N;
//    cout << "Введите количество строк: ";
//    cin >> N;

//    for (int i = 1; i <= N; i++) {
//        for (int j = 0; j < i; j++) {
//            cout << "0";
//        }
//        cout << endl;
//    }

//    return 0;
//}

//Зад. 2 Протабулировать функцию  y = -2x2 + 3x-1
//#include <iostream>
//using namespace std;

//int main() {
//    int start, end, step;
//    cout << "Введите начало диапазона: ";
//    cin >> start;
//    cout << "Введите конец диапазона: ";
//    cin >> end;
//    cout << "Введите шаг: ";
//    cin >> step;

//    for (int x = start; x <= end; x += step) {
//        double y = -2 * x * x + 3 * x - 1;
//        cout << "При x = " << x << ", y = " << y << endl;
//    }

//    return 0;
//}

//Зад. 3 Пользователь задаёт число Ч и Х. Посчитать y
//#include <iostream>
//using namespace std;

//int main() {
//    int x, n;
//    cout << "Введите число x: ";
//    cin >> x;
//    cout << "Введите число n: ";
//    cin >> n;

//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        sum += i * x;
//    }

//    cout << "Значение выражения y = x + 2x + 3x + ... + nx при x = " << x << " и n = " << n << " равно " << sum << endl;

//    return 0;
//}

//Зад. 5 алг. нахож-я сумму целых нечетных чисел от 1 до 50
//#include<iostream>
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 50; i++) {
//        if (i % 2 != 0) {
//            sum += i;
//        }
//    }
//}

//Зад. 6 про карасей
//#include <iostream>
//using namespace std;

//int main() {
//    int a, b, c, m;
//    int years = 0;

//    cout << "Введите количество карасей в пруду (a): ";
//    cin >> a;
//    cout << "Введите ежегодный прирост карасей (b): ";
//    cin >> b;
//    cout << "Введите ежегодный план отлова карасей (c): ";
//    cin >> c;
//    cout << "Введите желаемое количество карасей (m): ";
//    cin >> m;

//    while (a < m) {
//        a += b;
//        a -= c;
//        years++;
//    }

//    cout << "Через " << years << " лет число карасей в пруду составит >= " << m << endl;

//    return 0;
//}
