#include <algorithm>
#include <cassert>

#include "vector.hpp"

vector_t::vector_t()
{
	size_ = 0;
	capacity_ = 0;
}

vector_t::vector_t(vector_t const & other)
{
	size_ = other.size_;
	for (int i = 0; i < size_; i++)
		elements_[i] = other.elements_[i];
	capacity_ = other.capacity_;
}

vector_t & vector_t::operator =(vector_t const & other)
{
	return *this;
}

bool vector_t::operator ==(vector_t const & other) const
{
	return false;
}

vector_t::~vector_t()
{
	size_ = 0;
	capacity_ = 0;
	delete [] elements_;
}

std::size_t vector_t::size() const
{
	return size_;
}

std::size_t vector_t::capacity() const
{
	return capacity_;
}

void vector_t::push_back(int value)
{
	if (size_ == capacity_) capacity_ *= 2;
	size_++;
	delete[] elements_;
	elements_ = new int [capacity_];
}

void vector_t::pop_back()
{
}

int & vector_t::operator [](std::size_t index)
{
	return elements_[0];
}

int vector_t::operator [](std::size_t index) const
{
	return 0;
}

bool operator !=(vector_t const & lhs, vector_t const & rhs)
{
	return true;
}
