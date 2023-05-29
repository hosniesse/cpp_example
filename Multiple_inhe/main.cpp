#include <iostream>
#include <string>

 struct Entity{

        int x{4},y{5};
 };
    struct warrior:virtual public Entity {        // adding key word   "virtual"  to warrior classe make the inherited class point to same Entiy
        int power{10};
    };


   struct Goblin :virtual public Entity {
        int power{7};
    };
   struct Player :virtual public warrior , virtual public Goblin {
       
    };


int main(){
 
    Player rached;
    std::cout<<rached.x<<std::endl;         //  without  virtual we have to declared like   "std::cout<<rached.warrior::x <<std::endl;"  
    std::cout<<rached.y<<std::endl;          //or "std::cout<<rached.Goblin::x <<std::endl;"  to be more specific and no error compiling

    std::cout<<rached.Goblin::power <<std::endl;   // even with virtual we have to be specifec "std::cout<<rached.Goblin::power <<std::endl;"

  

    return 0;


}