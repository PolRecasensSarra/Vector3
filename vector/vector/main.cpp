#include <iostream>
#include "header.h"
#include <math.h>

void main() {
	Vec3<int> vec1(-1, 0, 1);
	Vec3<int> vec2(0, 0, 3);
	
	//check if vector is 0
	if (vec1.is_zero()) {
		std::cout << "Vector 1 is 0" << std::endl;
	}
	else {
		std::cout << "Vector 1 is not 0" << std::endl;
	}
	if (vec2.is_zero()) {
		std::cout << "Vector 2 is 0" << std::endl;
	}
	else {
		std::cout << "Vector 2 is not 0" << std::endl;
	}

	
	//operators
	Vec3<int> VecAdd = vec1 + vec2;
	std::cout << "Operator + = (" << VecAdd.getX() << ", " << VecAdd.getY() << ", " << VecAdd.getZ() << ")" << std::endl;
	Vec3<int> VecMin = vec1 - vec2;
	std::cout << "Operator - = (" << VecMin.getX() << ", " << VecMin.getY() << ", " << VecMin.getZ() << ")" << std::endl;
	vec1 += vec2;
	std::cout << "Vec1+=Vec2 =  (" << vec1.getX() << ", " << vec1.getY() << ", " << vec1.getZ() << ")" << std::endl;
	vec1 -= vec2;
	std::cout << "Vec1-=Vec2 =  (" << vec1.getX() << ", " << vec1.getY() << ", " << vec1.getZ() << ")" << std::endl;
	vec1 = vec2;
	std::cout << "Vec1=Vec2 =  (" << vec1.getX() << ", " << vec1.getY() << ", " << vec1.getZ() << ")" << std::endl;
	if (vec1 == vec2) {
		std::cout << "The two vectors are equal" << std::endl;
	}
	else {
		std::cout << "The two vectors are not equal" << std::endl;
	}

	//normalize
	Vec3 <int>VecNor = vec1.normalize();
	std::cout << "Normalized Vector 1 = (" << VecNor.getX() << ", " << VecNor.getY() << ", " << VecNor.getZ() << ")" << std::endl;
	
	//make a 0 vector
	std::cout << "Vector 1's component  = (" << vec1.getX() << ", " << vec1.getY() << ", " << vec1.getZ() << ")" << std::endl;
	vec1.zero();
	std::cout << "Vector 1's components  after zero() = (" << vec1.getX() << ", " << vec1.getY() << ", " << vec1.getZ() << ")" << std::endl;

	std::cout << "Vector 2's component  = (" << vec2.getX() << ", " << vec2.getY() << ", " << vec2.getZ() << ")" << std::endl;
	vec2.zero();
	std::cout << "Vector 2's components  after zero() = (" << vec2.getX() << ", " << vec2.getY() << ", " << vec2.getZ() << ")" << std::endl;
	system("pause");
}