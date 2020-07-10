#include "vec3f.h"

Vector3f::Vector3f(){
    X = Y = Z = 0.0f;
}


Vector3f::Vector3f(float px, float py, float pz){
    X = px;
    Y = py;
    Z = pz;
}


/*
Caculate the length of the vector
*/
float Vector3f::Length() {
	return  sqrt((X * X) + (Y * Y) + (Z * Z));
}


/*
Normalize the vector -> change it to length 1 ... creating a unit vector
*/
void Vector3f::Normalize(){
	float mag = Length();
	X = X / mag;
	Y = Y / mag;
	Z = Z / mag;
}


/*
Flips the sign of all the components of the vector
*/
void Vector3f::Negative() {
	X = -X; 
	Y = -Y;
	Z = -Z;
}

/*
Caculates the dot product of the vector
*/
float Vector3f::Dot(const Vector3f &b) {
	return X * b.X + Y * b.Y + Z * b.Z;
}


/*
Caculate the length of the vector
*/
Vector3f* Vector3f::Cross(const Vector3f &b) {
	float x_ = Y * b.Z - Z * b.Y;
	float y_ = Z * b.X - X * b.Z;
	float z_ = X * b.Y - Y * b.X;

	return new Vector3f(x_, y_, z_);
}


/*
Vector addition
*/
Vector3f  Vector3f::operator + (const Vector3f  &b) {
	return Vector3f(X + b.X, Y + b.Y, Z + b.Z);
}


/*
Vector subtraction
*/
Vector3f  Vector3f::operator - (const Vector3f  &b) {
	return Vector3f(X - b.X, Y - b.Y, Z - b.Z);
}


/*
Vector multiplication
*/
Vector3f  Vector3f::operator * (const Vector3f &b) {
	return Vector3f(X * b.X, Y * b.Y, Z * b.Z);
}


/*
Vector division
*/
Vector3f  Vector3f::operator / (const Vector3f  &b) {
	return Vector3f(X / b.X, Y / b.Y, Z / b.Z);
}


/*
Custom toString function that returns a string of the X,Y,Z values of the string.
*/
std::string Vector3f::toString()
{
	return  "<" + std::to_string(X) + "; " + std::to_string(Y) + "; " + std::to_string(Z) + ">";
}