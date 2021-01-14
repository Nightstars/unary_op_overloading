#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

//Coordinate& Coordinate::operator-()
//{
//	// TODO: 在此处插入 return 语句
//	m_iX = -m_iX;
//	this->m_iY = -this->m_iY;
//	return *this;
//}

Coordinate& Coordinate::operator++()
{
	// TODO: 在此处插入 return 语句
	m_iX++;
	++m_iX;
	return *this;
}

Coordinate Coordinate::operator++(int)
{
	// TODO: 在此处插入 return 语句
	Coordinate old(*this);
	this->m_iX++;
	this->m_iY++;
	return old;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}

Coordinate& operator-(Coordinate& c)
{
	// TODO: 在此处插入 return 语句
	c.m_iX = -c.m_iX;
	c.m_iY = -c.m_iY;
	return c;
}
