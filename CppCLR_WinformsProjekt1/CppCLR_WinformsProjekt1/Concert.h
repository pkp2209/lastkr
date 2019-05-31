#pragma once
#include <string>
#include <vector>
#include <algorithm>

struct Event
{
	int size;
	std::string name;
	std::string value;
};

template <typename T>
class concert {/*
	std::vector<T> array_;

public:
	friend std::ostream& operator<< (std::ostream &out, const concert &obj)

	concert(std::vector<T> arr)
	{
		array_ = arr;
	}

	void append(T n)
	{
		array_.insert(T);
	}

	concert(concert const& source) {
		std::vector<Event> array(source.array_.capacity());
		array = source.array_;
	}

	concert(concert&& source) {
		array_ = source.array_;
		source.array_.clear();
	}

	Event& concert::operator[] (const int l)
	{
		if (l < 0 || static_cast<int>(this->array_.size()) <= l)
		{
			throw std::out_of_range("Error! Invalid index\n");
		}
		return this->array_[l];
	}

	int concert::get_size() const
	{
		return this->array_.size();
	}
	*/
};

/*
std::ostream& operator<< (std::ostream &out, const concert &obj)
{
	for (int i = 0; i < static_cast<int>(obj.array_.size()); i++)
	{
		out << i + 1 << ") " << std::setw(20) << std::left << obj.array_[i].name << " " << std::setw(7) <<
			std::right << obj.array_[i].residue << "/" << std::setw(7) << std::left <<
			obj.array_[i].capacity << " " << obj.array_[i].data_time << std::endl;
	}

	out << std::endl;

	return out;
}*/