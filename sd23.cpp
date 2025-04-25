/* SD23
 * This file is sd23.cpp, the sourcefile for sd23.
 *
 * DESCRIPTION
 * Practice using the initial, basic ideas on creating and using classes,
 * objects, data, methods.
 *
 *
 *
 *
 *
 *
 * NOTES
 *
 *
 * Thu 24 Apr 2025 11:38:52 AM PDT
 * Start with the simplest concepts and work towards making them more
 * capable.
 *
 *
*/

/* includes                    */

#include <iostream>



class MyClass
{
    public:
    void dosomething() {
         std::cout << "Hello World! From inside of MyClass" << '\n';
    }

    void dosomethingelse() {
        std::cout << "Ciao, World! From inside of MyClass" << '\n';
    }




};



/* function declarations          */









 int main() {
     MyClass o;   // create an instance of MyClass.

    o.dosomething();

    o.dosomethingelse();






    return 0;
 }





/* method definitions (?)               */






