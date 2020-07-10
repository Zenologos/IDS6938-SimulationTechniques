#ifndef _H_POINT
#define _H_POINT

#include<math.h>
#include <string>

class Vector3f {
public:
    Vector3f();
    Vector3f(float px, float py, float pz);
    ~Vector3f() {};

	float Vector3f::Length();
	void Vector3f::Normalize();
	void Vector3f::Negative();
	float Dot(const Vector3f &b);
	Vector3f* Cross(const Vector3f &b);

	Vector3f operator + (const Vector3f  &b);
	Vector3f operator - (const Vector3f  &b);
	Vector3f  operator * (const Vector3f &b);
	Vector3f  operator / (const Vector3f  &b);

	std::string toString();

    float X,Y,Z;
};

#endif