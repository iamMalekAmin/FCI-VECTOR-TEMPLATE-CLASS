#ifndef FCIvector_h_
#define FCIvector_h_
template<typename Type>
class FCIvector
{
private:
	Type *element; //dynamic array "element = new Type[x]"
	int capacity;
	int Nelements;
public:
	FCIvector()
	{
		Nelements = 0;
		capacity = 1; // ممكن نخليها ب واحد
		element = new Type[capacity];
	}
	int size()
	{
		return Nelements;
	}
	int getcapacity()
	{
			return capacity;
	}
	bool empty()
	{
		if (Nelements = 0)
			return true;
		else
			return false;
	}
	Type operator [](int index)
	{
		return element[index];
	}
	Type* begin()
	{
		return &element[0];
	}
	Type& back()
	{
		return element[Nelements - 1];
	}
	Type& front()// return awl index 
	{
		return element[0];
	}
	void push_back(Type x)
	{
		if (Nelements < capacity)
		{
			int i = Nelements++;
			element[i] = x;
		}
		else if (Nelements >= capacity)
		{
			capacity = capacity * 2;
			int i = Nelements++;
			element[i] = x;
		}
		
	}
	void pop_back()
	{
		Type* temparr = new Type[Nelements - 1];
		for (int i = 0; i < Nelements - 1; i++)
		{
			temparr[i] = element[i];
		}
		element = NULL;
		element = temparr;
		temparr = NULL;
		Nelements--;
		capacity--;
	}
	void insert(Type element, int position)
	{
		Type *element2 = new Type[Nelements + 1];
		for (int i = 0; i < position; i++)//لحد قبل البوزيشن اللي مختاره
		{
			element2[i] = this->element[i];
		}
		element2[position] = element;
		for (int i = position + 1; i < Nelements + 1;i++)
		{
			element2[i] = this->element[i - 1];
		}
		Nelements++;
		capacity++;
		this->element = NULL;
		this->element = element2;
		element2 = NULL;
	}
	void clear()
	{
		element = NULL;
	}
	void erase(int position)
	{
		Type *element2 = new Type[Nelements-1];
		for (int i = 0; i < position; i++)
		{
			element2[i] = element[i];
		}
		for (int i = position + 1; i < Nelements - 1;i++)
		{
			element2[i] = element[i];
		}
		element = NULL;
		element = element2;
		element2 = NULL;
		Nelements--;

	}
};


#endif
