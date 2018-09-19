#ifndef HEADER_H
#define HEADER_H

#include <math.h>

template <class Type>

class Vec3 
{
private:
	Type x;
	Type y;
	Type z;
public:

	Vec3() {};
	Vec3(Type x, Type y, Type z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vec3(Type x0, Type y0, Type z0, Type xf, Type yf, Type zf) 
	{
		x = (xf - x0);
		y = (yf - y0);
		z = (zf - z0);
	}

public:
	Type getX() const { return this->x; }
	Type getY() const { return this->y; }
	Type getZ() const { return this->z; }


	//check if 0
	bool is_zero() const 
	{
		return (x == 0 && y == 0 && z == 0);
	}


	//operators
	Vec3 operator+(const Vec3& vec2) const
	{
		return Vec3(x + vec2.x, y + vec2.y, z + vec2.z);
	}

	Vec3 operator-(const Vec3& vec2) const
	{
		return Vec3(x - vec2.x, y - vec2.y, z - vec2.z);
	}

	Vec3 operator+=(const Vec3& vec2) 
	{
		this->x += vec2.x;
		this->y += vec2.y;
		this->z += vec2.z;
		return *this;
	}

	Vec3 operator-=(const Vec3& vec2) 
	{
		this->x -= vec2.x;
		this->y -= vec2.y;
		this->z -= vec2.z;
		return *this;
	}

	Vec3 operator=(const Vec3& vec2) 
	{
		this->x = vec2.x;
		this->y = vec2.y;
		this->z = vec2.z;
		return *this;
	}

	bool operator==(const Vec3& vec2)const 
	{
		return(this->x == vec2.x && this->y == vec2.y && this->z == vec2.z);
	}

	//normalize
	Vec3 normalize() const
	{
		Type Module = sqrt((x*x) + (y*y) + (z*z));
		return Vec3((x / Module), (y / Module), (z / Module));
	}

	//set 0
	void zero() 
	{
		x = 0;
		y = 0;
		z = 0;
	}

};
#endif