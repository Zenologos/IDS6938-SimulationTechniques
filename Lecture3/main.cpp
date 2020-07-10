#include <iostream>
#include <vector>
#include "vec3f.h"


 
int main(int argc, char *argv[]){
   std::cout << "Hello Geometry Library Tester!" << std::endl;

   //Caculate the length of a <0; 0; 0> Vector ... should return 0
   Vector3f *vector1 = new Vector3f();
   std::cout << "   Length of Vector1 is : " << vector1->Length() << std::endl;

   // Caculate the length of a <1; 2; 3> Vector example from class ... should return 3.74..
   Vector3f *vector2 = new Vector3f(1.0f, 2.0f, 3.0f);
   std::cout << "   Length of Vector2 is : " << vector2->Length() << std::endl;

   //Just testing the negation of a vector and flipping it back
   vector2->Negative();
   std::cout << "   Negation of Vector2 is : " << vector2->toString() << std::endl;
   vector2->Negative();
   std::cout << "   Negation of Vector2 is (back to orginial) : " << vector2->toString() << std::endl;

   //Normalizes the vector (forces it to be betwee 0 and 1)
   vector2->Normalize();
   std::cout << "   Normalizing Vector2 is : " << vector2->toString() << std::endl;

   //clean up the memory.
   delete vector1;
   vector1 = NULL;
   delete vector2;
   vector2 = NULL;


   //Test the dot product from the example in class (and webcourses)
   Vector3f *a = new Vector3f(0.0f, 3.0f, -7.0f);
   Vector3f *b = new Vector3f(2.0f, 3.0f, 1.0f);
   std::cout << "   Dot Product Example : " << a->Dot(*b) << std::endl;

   delete a;
   a = NULL;
   delete b;
   b = NULL;


   //Test the cross product from the example in class (and webcourses)
   Vector3f *c = new Vector3f(5.0f, 6.0f, 5.0f);
   Vector3f *d = new Vector3f(3.0f, 7.0f, 2.0f);
   Vector3f *answer = (c->Cross(*d));
   std::cout << "   Cross Product Example : " << answer->toString() << std::endl;

   delete c;
   c = NULL;
   delete d;
   d = NULL;
   delete answer;
   answer = NULL;

   return 0;
}