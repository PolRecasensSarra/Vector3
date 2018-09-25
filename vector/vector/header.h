#ifndef HEADER_H
#define HEADER_H

#include <math.h>

template <class Type>

class Vec3 
{
private:
	Type x, y, z;
	
public:

	Vec3() {};
	Vec3(const Type &x, const Type & y, const Type & z) :x(x), y(y), z(z) {};
	
	Vec3(const Vec3& vec2) :x(vec2.x), y(vec2.y), z(vec2.z) {};

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
		x = y = z = 0.0f;
	}

	//distance to
	Type DistanceTo(const Vec3& v3) const {
		Vec3 vec3;
		vec3.x = -this->x + v3.x;
		vec3.y = -this->y + v3.y;
		vec3.z = -this->z + v3.z;
		return (sqrt((vec3.x*vec3.x) + (vec3.y*vec3.y) + (vec3.z*vec3.z)));
	}

};
#endif