#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <ctime>;

using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void push_back_mutable(int*& arr, int& n, int value);
void push_front_mutable(int*& arr, int& n, int value);
void insert(int *& arr, int& n, int value, int index);
void pop_back(int*& arr, int& n);
void pop_front(int*& arr, int& n);
int main();
void end();
void end2();

class bag
{
public:
	int value, index, answer, answer2, answerWay;
};

void AddingInEnd(bag hand, int*& arr, int& n);
void AddingInStart(bag hand, int*& arr, int& n);
void AddingInIndex(bag hand, int*& arr, int& n);
void DeleteLastElement(bag hand, int*& arr, int& n);
void DeleteStartElement(bag hand, int*& arr, int& n);

void AddingInEnd(bag hand, int*& arr, int& n)
{
	cout << "Добавляемое значение в конец: ";  cin >> hand.value;
	cout << endl;
	push_back_mutable(arr, n, hand.value);
	Print(arr, n);

	int answerWayAddEnd;
	cout << "Куда дальше?" << endl;
	cout << "1. Добавим значение в начало" << endl;
	cout << "2. Добавим значение по индексу" << endl;
	cout << "3. Грохнем значение в конце" << endl;
	cout << "4. Грохнем значение в начале" << endl;
	cout << "5. Ещё разок" << endl;
	cout << "6. Всё, достаточно" << endl;
	cout << "7. Перезапуск" << endl;
	cout << "Ответ: "; cin >> answerWayAddEnd;
	cout << endl;

	if (answerWayAddEnd == 1)AddingInStart(hand, arr, n);
	else if (answerWayAddEnd == 2)AddingInIndex(hand, arr, n);
	else if (answerWayAddEnd == 3)DeleteLastElement(hand, arr, n);
	else if (answerWayAddEnd == 4)DeleteStartElement(hand, arr, n);
	else if (answerWayAddEnd == 5)AddingInEnd(hand, arr, n);
	else if (answerWayAddEnd == 6)end();
	else if (answerWayAddEnd == 7)main();
	else
	{
		cout << "Нипонял" << endl << endl;
		cout << "Ответ: "; cin >> answerWayAddEnd;
		cout << endl;
	}
}

void AddingInStart(bag hand, int*& arr, int& n)
{
	cout << "Добавляемое значение в начало: ";  cin >> hand.value;
	cout << endl;
	push_front_mutable(arr, n, hand.value);
	Print(arr, n);

	int answerWayAddStart;
	cout << "Куда дальше?" << endl;
	cout << "1. Добавим значение в конец" << endl;
	cout << "2. Добавим значение по индексу" << endl;
	cout << "3. Грохнем значение в конце" << endl;
	cout << "4. Грохнем значение в начале" << endl;
	cout << "5. Ещё разок" << endl;
	cout << "6. Всё, достаточно" << endl;
	cout << "7. Перезапуск" << endl;
	cout << "Ответ: "; cin >> answerWayAddStart;
	cout << endl;

	if (answerWayAddStart == 1)AddingInEnd(hand, arr, n);
	else if (answerWayAddStart == 2)AddingInIndex(hand, arr, n);
	else if (answerWayAddStart == 3)DeleteLastElement(hand, arr, n);
	else if (answerWayAddStart == 4)DeleteStartElement(hand, arr, n);
	else if (answerWayAddStart == 5)AddingInStart(hand, arr, n);
	else if (answerWayAddStart == 6)end();
	else if (answerWayAddStart == 7)main();
	else
	{
		cout << "Нипонял" << endl << endl;
		cout << "Ответ: "; cin >> answerWayAddStart;
		cout << endl;
	}
}

void AddingInIndex(bag hand, int*& arr, int& n)
{
	cout << "Добавляемое значение: ";  cin >> hand.value;
	cout << "Индекс?: "; cin >> hand.index;
	insert(arr, n, hand.value, hand.index);
	Print(arr, n);

	int answerWayAddIndex;
	cout << "Куда дальше?" << endl;
	cout << "1. Добавим значение в конец" << endl;
	cout << "2. Добавим значение в начало" << endl;
	cout << "3. Грохнем значение в конце" << endl;
	cout << "4. Грохнем значение в начале" << endl;
	cout << "5. Ещё разок" << endl;
	cout << "6. Всё, достаточно" << endl;
	cout << "7. Перезапуск" << endl;
	cout << "Ответ: "; cin >> answerWayAddIndex;
	cout << endl;

	if (answerWayAddIndex == 1)AddingInEnd(hand, arr, n);
	else if (answerWayAddIndex == 2)AddingInStart(hand, arr, n);
	else if (answerWayAddIndex == 3)DeleteLastElement(hand, arr, n);
	else if (answerWayAddIndex == 4)DeleteStartElement(hand, arr, n);
	else if (answerWayAddIndex == 5)AddingInIndex(hand, arr, n);
	else if (answerWayAddIndex == 6)end();
	else if (answerWayAddIndex == 7)main();
	else
	{
		cout << "Нипонял" << endl << endl;
		cout << "Ответ: "; cin >> answerWayAddIndex;
		cout << endl;
	}
}

void DeleteLastElement(bag hand, int*& arr, int& n)
{
	cout << "Грохнуть последний элемент? 1 / any" << endl;
	cin >> hand.answer;
	cout << endl;
	if (hand.answer == 1)
	{
		pop_back(arr, n);
		Print(arr, n);
	}

	int answerWayAddDeleteLast;
	cout << "Куда дальше?" << endl;
	cout << "1. Добавим значение в конец" << endl;
	cout << "2. Добавим значение в начало" << endl;
	cout << "3. Добавим значение по индексу" << endl;
	cout << "4. Грохнем значение в начале" << endl;
	cout << "5. Ещё разок" << endl;
	cout << "6. Всё, достаточно" << endl;
	cout << "7. Перезапуск" << endl;
	cout << "Ответ: "; cin >> answerWayAddDeleteLast;
	cout << endl;

	if (answerWayAddDeleteLast == 1)AddingInEnd(hand, arr, n);
	else if (answerWayAddDeleteLast == 2)AddingInStart(hand, arr, n);
	else if (answerWayAddDeleteLast == 3)AddingInIndex(hand, arr, n);
	else if (answerWayAddDeleteLast == 4)DeleteStartElement(hand, arr, n);
	else if (answerWayAddDeleteLast == 5)DeleteLastElement(hand, arr, n);
	else if (answerWayAddDeleteLast == 6)end();
	else if (answerWayAddDeleteLast == 7)main();
	else
	{
		cout << "Нипонял" << endl << endl;
		cout << "Ответ: "; cin >> answerWayAddDeleteLast;
		cout << endl;
	}
}

void DeleteStartElement(bag hand, int*& arr, int& n)
{
	cout << "Грохнуть начальный элемент? 1 / any" << endl;
	cin >> hand.answer2;
	cout << endl;
	if (hand.answer2 == 1)
	{
		pop_front(arr, n);
		Print(arr, n);
	}

	int answerWayAddDeleteStart;
	cout << "Куда дальше?" << endl;
	cout << "1. Добавим значение в конец" << endl;
	cout << "2. Добавим значение в начало" << endl;
	cout << "3. Добавим значение по индексу" << endl;
	cout << "4. Грохнем значение в конце" << endl;
	cout << "5. Ещё разок" << endl;
	cout << "6. Всё, достаточно" << endl;
	cout << "7. Перезапуск" << endl;
	cout << "Ответ: "; cin >> answerWayAddDeleteStart;
	cout << endl;

	if (answerWayAddDeleteStart == 1)AddingInEnd(hand, arr, n);
	else if (answerWayAddDeleteStart == 2)AddingInStart(hand, arr, n);
	else if (answerWayAddDeleteStart == 3)AddingInIndex(hand, arr, n);
	else if (answerWayAddDeleteStart == 4)DeleteLastElement(hand, arr, n);
	else if (answerWayAddDeleteStart == 5)DeleteStartElement(hand, arr, n);
	else if (answerWayAddDeleteStart == 6)end();
	else if (answerWayAddDeleteStart == 7)main();
	else
	{
		cout << "Нипонял" << endl << endl;
		cout << "Ответ: "; cin >> answerWayAddDeleteStart;
		cout << endl;
	}
}

void end()
{
	cout << "Надеюсь вам понравилось :)" << endl;
}

void end2()
{
	cout << "Так рано уходите? Ну ладно, удачки :)" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 0F");
	system("CLS");

	int StartAnswer;
	cout << "Ну что, начнём? :)" << endl << endl;
	cout << "Ответ(1 - да, 2 - не): "; cin >> StartAnswer;
	cout << endl;
	if (StartAnswer == 2)
	{
		end2();
		return 0;
	}
	cout << endl;
	
	cout << "==================================================" << endl << endl;

	int n;
	cout << "Введите размер массива: "; cin >> n;
	cout << endl;
	int* arr = new int[n];

	srand(time(NULL));

	FillRand(arr, n);
	Print(arr, n);

	bag hand;

	cout << "Отлично, массивчик есть, куда дальше?" << endl;
	cout << "1. Добавим значение в конец (рекомендуется)" << endl;
	cout << "2. Добавим значение в начало" << endl;
	cout << "3. Добавим значение по индексу" << endl;
	cout << "4. Грохнем значение в конце" << endl;
	cout << "5. Грохнем значение в начале" << endl;
	cout << "6. Всё, достаточно" << endl;
	cout << "7. Перезапуск" << endl;
	cout << "Ответ: "; cin >> hand.answerWay;
	cout << endl;

	if (hand.answerWay == 1)AddingInEnd(hand,arr, n);
	else if (hand.answerWay == 2)AddingInStart(hand, arr, n);
	else if (hand.answerWay == 3)AddingInIndex(hand, arr, n);
	else if (hand.answerWay == 4)DeleteLastElement(hand, arr, n);
	else if (hand.answerWay == 5)DeleteStartElement(hand, arr, n);
	else if (hand.answerWay == 6)end();
	else if (hand.answerWay == 7)main();
	else
	{
		cout << "Нипонял" << endl << endl;
		cout << "Ответ: "; cin >> hand.answerWay; // Если ввести символ/букву, cin просто скипнеться, если это и возможно пофиксить то я хз как
		cout << endl;
	}

	delete[] arr;
}

void push_front_mutable(int*& arr, int& n, int value)
{
	//1. Создаём буферный массив нужного размера:
	int* buffer = new int[n + 1];
	//2. Копируем значение из исходного масива в буферный Со смещением на 1 элемент:
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	//3. Делитнуть исходный массивчик:
	delete[] arr;
	//4. Подменяем указатель на адрес исходонго массива:
	arr = buffer;
	//5. Добавляем значение в начало массива:
	arr[0] = value;
	//6. Увеличиваем размер массива:
	n++;
}

void push_back_mutable(int*& arr, int& n, int value)
{
	int* buffer = new int[n + 1];
	//buffer[n] = value;
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	cout << "[\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "]";
	cout << endl << endl;
}

void insert(int *& arr, int& n, int value, int index)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = index; i < n; i++)
	{
		(i < index) ? buffer[i] : buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
}

void pop_back(int*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}

void pop_front(int*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
}