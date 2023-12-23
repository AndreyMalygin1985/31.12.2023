#include "Students.h"
using namespace std;

// Описать класс «студент» с полями : имя, фамилия, курс.
// Переопределить у этого класса оператор вывода в поток.Написать функцию
// заполнения вектора из класса «студент» произволными данными. Написать функцию
// печати содержимого вектора. Отсортировать вектор по именам студентов по возрастанию.
// Отсортировать стабильно вектор по фамилиям студентов. Поставить в первые три 
// элемента вектора студентов самых младших курсов по возрастанию. После каждой 
// операции выводить список студентов в выходной поток.

int main()
{
    SetConsoleOutputCP(1251);

    vector<Students> students;

    Students::nurtureStudent(students);
    cout << "Исходный список студентов:" << endl;
    Students::showStudents(students);

    // Сортировать по именам в порядке возрастания
    sort(students.begin(), students.end());
    cout << "Список студентов, отсортированный по именам:" << endl;
    Students::showStudents(students);

    // Стабильная сортировка по фамилиям
    stable_sort(students.begin(), students.end(), Students::sortByLastName);
    cout << "Список студентов, отсортированный по фамилиям (стабильная сортировка):" << endl;
    Students::showStudents(students);

    // Сортировать по курсам в порядке возрастания
    sort(students.begin(), students.end(), Students::sortByCourse);
    cout << "Список студентов, отсортированный по курсам:" << endl;
    Students::showStudents(students);

    // Расположите первые три элемента списока с наименьшими курсами в порядке возрастания.
    partial_sort(students.begin(), students.begin() + 3, students.end(), Students::sortByCourse);
    cout << "Список студентов, первые три студента имеют самые низкие курсы:" << endl;
    Students::showStudents(students);

    return 0;
}