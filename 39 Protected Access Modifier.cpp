#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private: 
        int b;

};

/*
 for a protected member :
                        public derive     privet derive      protected derive
1. privet members       not inherited     not inherited      not inherited
2. proected members     protected         privet             protected
3. public members       public            privet             protected

*/

int main() 
{


    return 0;
}