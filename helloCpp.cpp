/**
 * This program was written by Alexander John for educational purposes.
 * 
 * Global scope extends outside of any braces. It is activated before
 * main is executed, and deactivated after main is exited. Local scopes,
 * on the other hand, are delimited by braces. Local scope is activated
 * when the flow of the program enters it, and deactivated when it leaves
 * it. Objects in local scope are constructed whenever their definition
 * is encountered, and destroyed when the scope is exited. Such objects
 * are also called automatic, or stack objects.
*/
#include <iostream>

class World
{
    public:
    World (int id) 
    : _identifier (id)
    {
        std::cout << "Hello from " << _identifier << ".\n";
    }
    ~World ()
    {
        std::cout << "Good bye from " << _identifier << "!\n";
    }

    private:
    const int _identifier;
};

World TheWorld(1);

int main ()
{
    World myWorld(2);
    for (int i = 3; i < 6; ++i)
    {
        World aWorld(i);
    }
    World oneMoreWorld(6);
}