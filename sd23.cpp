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
 * Thu 24 Apr 2025 10:26:59 PM PDT
 * Finished with the super basic stuff. Will create a branch and continue
 * with slightly more advanced concepts.
 *
 *
*/

/* includes                    */

#include <iostream>



class MyClass
{
    private:
        int x;
    public:
        void printx();



};



/* function declarations          */









 int main() {
     MyClass o;

     o.x = 123;
     o.printx();





    return 0;
 }





/* method definitions (?)               */


void MyClass::printx() {
    std::cout << "The value of x is: " << x << '\n';
}









