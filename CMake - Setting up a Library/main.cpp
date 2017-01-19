#include <iostream>
#include <vector>
#include "rectangle.h"
#include "triangle.h"
#include "shape.h"

 
int main(int argc, char *argv[]){
   std::cout << "Hello Geometry Library Tester!" << std::endl;

   //Example of creating two objects and looking at area.
   shape *rect = new rectangle();
   shape *trgl = new triangle();

   rect->set_values(4, 5);
   trgl->set_values(4, 5);
   
   std::cout << rect->area() << '\n';
   std::cout << trgl->area() << '\n';
   std::cout << std::endl;

   delete rect;
   delete trgl;

   rect = NULL;
   trgl = NULL;

   //Example of creating vector of 'shapes' and looking at area.
   std::vector<shape *> myshapes;

   myshapes.push_back(new rectangle(4,5));
   myshapes.push_back(new triangle(4, 5));

   for(int i =0; i<myshapes.size(); i++)
	   std::cout << myshapes[i]->area() << '\n';

   std::cout << std::endl;

   // Just another example of a loop structure
   for (auto elem : myshapes)
	   std::cout << elem->area() << '\n';

   for (auto elem : myshapes)
   {
	   delete elem;
	   elem = NULL;
   }

   // all three prints should return same answers

   return 0;
}