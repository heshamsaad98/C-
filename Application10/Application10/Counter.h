#pragma once
class Counter
{
private:
	unsigned int count;

public:
	Counter() : count(0) // constructor
	{}

	Counter(int c) : count(c) // constructor
	{}

	int get_count() // return count
	{
		return count;
	}

	Counter operator ++()
	{
		++count;
		return Counter(count);
	}

	Counter operator ++(int)
	{
		count++;
		return Counter(count);
	}

	Counter operator --()
	{
		--count;
		return Counter(count);
	}

	Counter operator --(int)
	{
		count--;
		return Counter(count);
	}
};

