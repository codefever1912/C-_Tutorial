#include <iostream>
#include "daughter.h"

using namespace std;

int main(){
    Daughter obj;
} 

/*Class Initialisation order:
    Mother(Base Class)
    Daughter
    Destroy Daughter
    Destroy Mother 
*/

/*Constructor/Destructor Funciton in inheritance
When inherited, the base class' constructor funciton is
executed prior to the derived class' 
*/ 