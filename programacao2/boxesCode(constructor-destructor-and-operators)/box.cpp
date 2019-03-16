#include "box.hpp"
unsigned int Box::m_numberOfBoxes=0;

float Box::getVolume() const
{
	float vol = m_width*m_height*m_depth;
	return vol;
}

Box::Box(const Box &a)
{
	m_width = a.getWidth();
	m_height = a.getHeight();
	m_depth = a.getDepth();
}

bool Box::isBigger(const Box &a)
{
	return (this->getVolume() > a.getVolume()) ? true : false;
}

bool Box::operator >(const Box &a)
{
	return (this->getVolume() > a.getVolume()) ? true : false;
}

bool Box::operator <(const Box &a)
{
	return (this->getVolume() < a.getVolume()) ? true : false;
}

Box Box::operator +(const Box &a)
{
	Box result;
	result.m_width = m_width + a.getWidth();
	result.m_depth = m_depth + a.getDepth();
	result.m_height = m_height + a.getHeight();
	
	return result;
}

Box Box::operator +(float n)
{
	Box result;
	result.m_width = m_width + n;
	result.m_depth = m_depth + n;
	result.m_height = m_height + n;
	
	return result;
}

Box Box::operator -(const Box &a)
{
	Box result;
	result.m_width = m_width - a.getWidth();
	result.m_depth = m_depth - a.getDepth();
	result.m_height = m_height - a.getHeight();
	
	return result;
}

Box Box::operator -(float n)
{
	Box result;
	result.m_width = m_width - n;
	result.m_depth = m_depth - n;
	result.m_height = m_height - n;
	
	return result;
}

Box Box::operator *(const Box &a)
{
	Box result;
	result.m_width = m_width * a.getWidth();
	result.m_depth = m_depth * a.getDepth();
	result.m_height = m_height * a.getHeight();
	
	return result;
}

Box Box::operator *(float n)
{
	Box result;
	result.m_width = m_width * n;
	result.m_depth = m_depth * n;
	result.m_height = m_height * n;
	
	return result;
}

Box Box::operator /(const Box &a)
{
	Box result;
	result.m_width = m_width / a.getWidth();
	result.m_depth = m_depth / a.getDepth();
	result.m_height = m_height / a.getHeight();
	
	return result;
}

Box Box::operator /(float n)
{
	Box result;
	result.m_width = m_width / n;
	result.m_depth = m_depth / n;
	result.m_height = m_height / n;
	
	return result;
}

bool Box::operator ==(const Box &a)
{
	return (this->getVolume() == a.getVolume()) ? true : false;
}

Box Box::operator =(const Box &a)
{
	Box result;
	result.m_width = a.getWidth();
	result.m_depth = a.getDepth();
	result.m_height = a.getHeight();
	
	return result;
}

Box Box::operator =(float n)
{
	Box result;
	result.m_width = n;
	result.m_depth = n;
	result.m_height = n;
	
	return result;
}

void Box::operator ++(int)
{
	m_depth++;
	m_height++;
	m_width++;
}

void Box::operator ++()
{
	m_depth++;
	m_height++;
	m_width++;
}

void Box::operator --()
{
	m_depth--;
	m_height--;
	m_width--;
}

void Box::operator --(int)
{
	m_depth--;
	m_height--;
	m_width--;
}

