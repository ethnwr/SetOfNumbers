#pragma once
#include <iostream>
using namespace std;
class Set
{
private:
	int size = 5;
	int* arr = new int[size] {3, 8, 46, 5, 11};
	bool a = false;
public:
	//êîíñòðóêòîð
	Set()
	{
		
	}
	//ïðîâåðêà ïðèíàäëåæíîñòè
	void checkingTheAccessories(int value)
	{
		for (int i = 0; i < size; i++)
		{
			if (value == arr[i])
			{
				cout << "Ýëåìåíò ïðèíàäëåæèò ìíîæåñòâó" << endl;
			}
		}
	}
	//ïðîâåðÿåò óíèêàëüíû ëè ýëåìåíòû â ìíîæåñòâå
	void checkArr()
	{
		bool check = false;
		for (int i = 0; i < size; i++)
		{
			for (int j = i+1; j < size; j++)
			{
				if (arr[i] == arr[j])
				{
					check = true;

				}
				
			}
		}
		if (check != true)
		{
			cout << "Ýëåìåíòû â ìíîæåñòâå óíèêàëüíû";
		}
		else
		{
			cout << "Ýëåìåíòû â ìíîæåñòâå íå óíèêàëüíû";
		}
	}
	//çàïîëíåíèå ìíîæåñòâà
	void completion()
	{
		/*cout << "Çàïîëíèòå ìíîæåñòâî" << endl;
		for (int i = 0; i < size; i++)
		{
			
			cout << "Ýëåìåíò = " << i << " ";
			cin >> arr[i];
			cout << endl;
		}*/
		this->arr[0] = 18;
		this->arr[1] = 8;
		this->arr[2] = 90;
		this->arr[3] = 11;
		this->arr[4] = 2;
		
	}
	//äîáàâëåíèå ýëåìåíòîâ â ìíîæåñòâî
	int operator+(const int value)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == value)
			{
				a = true;
			}
		}
		
		if (a != true)
		{
			int i = 0;
			i = size++;
			
			arr[i] = value;

		}
		return value;
	}
	//äîáàâëåíèå ìíîæåñòâî â ìíîæåñòâî
	void operator+(const Set& other)
	{
		int newSize = size + other.size;
		int* newArr3 = new int[newSize];
		int h = 0;
		for (int i = 0, j = size; i < newSize; i++)
		{
			newArr3[i] = arr[i];
			if (i >= size)
			{
				newArr3[j] = other.arr[h];
				j++;
				h++;
			}
		}
		
		for (int i = 0; i < newSize; i++)
		{
			cout << newArr3[i] << " ";
		}
	}
	//ïåðåñå÷åíèå ìíîæåñòâà
	void operator*(const Set& other)
	{
		int sizeArr2 = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[i] == other.arr[j])
				{
					sizeArr2++;

				}
			}
			
		}
		int* newArray2 = new int[sizeArr2];
		//Ýòà ïåðåìåííàÿ íóæíà ÷òîáû ìàññèâ çàïîëíÿëñÿ ñ íóëÿ
		int c = 0;
		bool check = false;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[i] == other.arr[j])
				{
					newArray2[c] = other.arr[j];
					if (c < sizeArr2)
					{
						c++;
					}
					
				}
			}
		}
		for (int i = 0; i < sizeArr2; i++)
		{
			cout << newArray2[i] << " ";
		}

	}
	
	//óäàëåíèå ýëåìåíòîâ â ìíîæåñòâî
	int* operator-(const int value)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == value)
			{
				a = true;
			}
		}

		if (a == true)
		{
			
			int* newArr = new int[size - 1];
			for (int i = 0; i < size-1; i++)
			{
				newArr[i] = arr[i];
				if (arr[i] == value)
				{
					newArr[i] = arr[i + 1];
				}
			}
			
			return newArr;
		}
		
		return 0;
	}
	//ðàçíîñòü ìíîæåñòâ
	void operator-(const Set& other)
	{
		int newSize3 = 0;
		int h = 0;
		bool a = false;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[i] != other.arr[j])
				{
					a = true;
				}
				else
				{
					a = false;
					break;
				}
				if (a == true and j == size - 1)
				{
					newSize3++;
					

				}
			}
		}
		int* newArr3 = new int[newSize3];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (arr[i] != other.arr[j])
				{
					a = true;
				}
				else
				{
					a = false;
					break;
				}
				if (a == true and j == size - 1)
				{
					newArr3[h] = arr[i];
					if (h < newSize3-1)
					{
						h++;;
					}
					
				}
			}
		}
		for (int i = 0; i < newSize3; i++)
		{
			cout << newArr3[i] << " ";
		}
	}
	//ñðàâíåíèå ìíîæåñòâ
	bool operator==(const Set& other)
	{
		int check = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == other.arr[i])
			{
				check++;
				
			}
		}
		if (check == size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	
	//âûâîä ìíîæåñòâà
	void print()
	{
		
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		
	}
	~Set()
	{
		delete[] arr;
	}
};
