#include <iostream>
#include "FCIvector.h"
#include "Course.h"
#include "Student.h"
using namespace std;
//#include <vector>
void printmenu()
{
	cout << "Insert type of vector you would like to create: \n" <<
		"1. list of integer \n" <<
		"2. list of character \n" <<
		"3. list of string \n" <<
		"4. list of float \n" <<
		"5. list of students \n" <<
		"6. Exit \n ";
}
void printmenuu()
{
	cout << "What kind of operation would you like to perform ? \n" <<
		"1. Add element.\n" <<
		"2. Remove last element.\n" <<
		"3. Insert element at certain position. \n" <<
		"4. Erase element from a certain position. \n " <<
		"5. Clear.\n" <<
		"6. Display first element.\n" <<
		"7. Display last element.\n" <<
		"8. Display element at certain position.\n" <<
		"9. Display vector size.\n" <<
		"10. Display vector capacity.\n" <<
		"11. Is empty ?\n";
}
int main()
{
t:
	int z;
	printmenu();
	cin >> z;
	if (z == 1)// list of int اول اختيار
	{
		FCIvector<int>list;
		cout << "A vector of integer was created successfully. \n\n";
	playstart:
		printmenuu();
		int s;
		int numofelement;
		cin >> s;
		if (s == 1)//add element 
		{
			cout << " enter the number of element \n ";
			cin >> numofelement;
			for (size_t i = 0; i < numofelement; i++)
			{
				int t;
				cout << " inter the value of element you want add in index " << i << endl;
				cin >> t;
				list.push_back(t);
			}
		}
		else if (s == 2)//remove last element pop back
		{
			list.pop_back();
		}
		else if (s == 3)//inseartt
		{
			int ellment, position;
			cout << "enter the element \n ";
			cin >> ellment;
			cout << " enter the position \n";
			cin >> position;
			list.insert(ellment, position);
		}
		else if (s == 4)//erase 
		{
			int p;
			cout << " enter the position u want erase \n";
			cin >> p;
			list.erase(p);
		}
		else if (s == 5)//clear
		{
			list.clear();
		}
		else if (s == 6)//disply firstt elment
		{
			cout << "the first elment is " << list.front() << endl;
		}
		else if (s == 7)
		{
			cout << "the last elment is " << list.back() << endl;
		}
		else if (s == 8)//disply element at certion position
		{
			int po;
			cout << "enter the psition \n";
			cin >> po;
			cout << "the element is " << list.operator[](po) << endl;
		}
		else if (s == 9)//size
		{
			cout << list.size() << endl;
		}
		else if (s == 10)//capacity
		{
			cout << "vector capacity is " << list.getcapacity() << endl;
		}
		else if (s == 11)
		{
			cout << list.empty();
		}
		char f;
		cout << "Would you like to perform other operations? (Y/N) \n";
		cin >> f;
		if (f == 'Y')
			goto playstart;
		else
			goto t;
	}
	else if (z == 2) //list of char
	{
		FCIvector<char>list;
		cout << "A vector of character was created successfully. \n\n";
	playstar:
		printmenuu();
		int s;
		int numofelement;
		cin >> s;
		if (s == 1)
		{
			cout << " enter the number of element \n ";
			cin >> numofelement;
			for (size_t i = 0; i < numofelement; i++)
			{
				char t;
				cout << " inter the value of element you want add in index " << i << endl;
				cin >> t;
				list.push_back(t);
			}
		}
		else if (s == 2)//remove last element pop back
		{
			list.pop_back();
		}
		else if (s == 3)//inseartt
		{
			char ellment;
			int position;
			cout << "enter the element \n ";
			cin >> ellment;
			cout << " enter the position \n";
			cin >> position;
			list.insert(ellment, position);
		}
		else if (s == 4)//erase 
		{
			int p;
			cout << " enter the position u want erase \n";
			cin >> p;
			list.erase(p);
		}
		else if (s == 5)//clear
		{
			list.clear();
		}
		else if (s == 6)//disply firstt elment
		{
			cout << "the first elment is " << list.begin() << endl;
		}
		else if (s == 7)
		{
			cout << "the last elment is " << list.back() << endl;
		}
		else if (s == 8)//disply element at certion position
		{
			int po;
			cout << "enter the psition \n";
			cin >> po;
			cout << "the element is " << list.operator[](po) << endl;
		}
		else if (s == 9)//size
		{
			cout << list.size() << endl;
		}
		else if (s == 10)//capacity
		{
			cout << "vector capacity is " << list.getcapacity() << endl;
		}
		else if (s == 11)
		{
			cout << list.empty();
		}
		char f;
		cout << "Would you like to perform other operations? (Y/N) \n";
		cin >> f;
		if (f == 'Y')
			goto playstar;
		else
			goto t;
	}
	else if (z == 3)
	{
		FCIvector<string>list;
		cout << "A vector of character was created successfully. \n\n";
	playstartt:
		printmenuu();
		int s;
		int numofelement;
		cin >> s;
		if (s == 1)
		{
			cout << " enter the number of element \n ";
			cin >> numofelement;
			for (size_t i = 0; i < numofelement; i++)
			{
				string t;
				cout << " inter the value of element you want add in index " << i << endl;
				cin >> t;
				list.push_back(t);
			}
		}
		else if (s == 2)//remove last element pop back
		{
			list.pop_back();
		}
		else if (s == 3)//inseartt
		{
			string ellment;
			int position;
			cout << "enter the element \n ";
			cin >> ellment;
			cout << " enter the position \n";
			cin >> position;
			list.insert(ellment, position);
		}
		else if (s == 4)//erase 
		{
			int p;
			cout << " enter the position u want erase \n";
			cin >> p;
			list.erase(p);
		}
		else if (s == 5)//clear
		{
			list.clear();
		}
		else if (s == 6)//disply firstt elment
		{
			cout << "the first elment is " << list.begin() << endl;
		}
		else if (s == 7)
		{
			cout << "the last elment is " << list.back() << endl;
		}
		else if (s == 8)//disply element at certion position
		{
			int po;
			cout << "enter the psition \n";
			cin >> po;
			cout << "the element is " << list.operator[](po) << endl;
		}
		else if (s == 9)//size
		{
			cout << list.size() << endl;
		}
		else if (s == 10)//capacity
		{
			cout << "vector capacity is " << list.getcapacity() << endl;
		}
		else if (s == 11)
		{
			cout << list.empty();
		}
		char f;
		cout << "Would you like to perform other operations? (Y/N) \n";
		cin >> f;
		if (f == 'Y')
			goto playstartt;
		else
			goto t;
	}
	else if (z == 4)//list of float
	{
		FCIvector<float>list;
		cout << "A vector of character was created successfully. \n\n";
	playstarr:
		printmenuu();
		int s;
		int numofelement;
		cin >> s;
		if (s == 1)
		{
			cout << " enter the number of element \n ";
			cin >> numofelement;
			for (size_t i = 0; i < numofelement; i++)
			{
				float t;
				cout << " inter the value of element you want add in index " << i << endl;
				cin >> t;
				list.push_back(t);
			}
		}
		else if (s == 2)//remove last element pop back
		{
			list.pop_back();
		}
		else if (s == 3)//inseartt
		{
			float ellment;
			int position;
			cout << "enter the element \n ";
			cin >> ellment;
			cout << " enter the position \n";
			cin >> position;
			list.insert(ellment, position);
		}
		else if (s == 4)//erase 
		{
			int p;
			cout << " enter the position u want erase \n";
			cin >> p;
			list.erase(p);
		}
		else if (s == 5)//clear
		{
			list.clear();
		}
		else if (s == 6)//disply firstt elment
		{
			cout << "the first elment is " << list.begin() << endl;
		}
		else if (s == 7)
		{
			cout << "the last elment is " << list.back() << endl;
		}
		else if (s == 8)//disply element at certion position
		{
			int po;
			cout << "enter the psition \n";
			cin >> po;
			cout << "the element is " << list.operator[](po) << endl;
		}
		else if (s == 9)//size
		{
			cout << list.size() << endl;
		}
		else if (s == 10)//capacity
		{
			cout << "vector capacity is " << list.getcapacity() << endl;
		}
		else if (s == 11)
		{
			cout << list.empty();
		}
		char f;
		cout << "Would you like to perform other operations? (Y/N) \n";
		cin >> f;
		if (f == 'Y')
			goto playstarr;
		else
			goto t;
	}
	else if (z == 5)
	{
		FCIvector<Student>list;
		cout << "A vector of student was created successfully. \n\n";
		playsttart:
		printmenuu();
		int s;
		int numofelement;
		cin >> s;
		if (s == 1)//add element 
		{
			cout << " How many elements you would like to add? \n ";
			cin >> numofelement;
			for (size_t i = 0; i < numofelement; i++)
			{
				Student t;
				cout << " inter the value of element you want add in index " << i << endl;
				t.set();
				list.push_back(t);
			}
		}
		else if (s == 2)//remove last element pop back
		{
			list.pop_back();
		}
		else if (s == 3)//inseartt
		{
			Student ellment;
			int position;
			cout << "enter the element \n ";
			ellment.set();
			cout << " enter the position \n";
			cin >> position;
			list.insert(ellment, position);
		}
		else if (s == 4)//erase 
		{
			int p;
			cout << " enter the position u want erase \n";
			cin >> p;
			list.erase(p);
		}
		else if (s == 5)//clear
		{
			list.clear();
		}
		else if (s == 6)//disply firstt elment
		{
			list.front().printInfo();
		}
		else if (s == 7)
		{
			cout << "the last elment is : " << endl;
			list.back().printInfo();
		}
		else if (s == 8)//disply element at certion position
		{
			int po;
			cout << "enter the psition \n";
			cin >> po;
			cout << "the element is : " << endl;
			list.operator[](po).printInfo();
		}
		else if (s == 9)//size
		{
			cout << list.size() << endl;
		}
		else if (s == 10)//capacity
		{
			cout << "vector capacity is " << list.getcapacity() << endl;
		}
		else if (s == 11)
		{
			cout << list.empty();
		}
		char f;
		cout << "Would you like to perform other operations? (Y/N) \n";
		cin >> f;
		if (f == 'Y')
			goto playsttart;
		else
			goto t;

	}
	else if (z == 6)
	{
		exit(42);
	}
	else
	{
		cout << "please choose from menu \n";
		goto t;
	}
	return 0;
}