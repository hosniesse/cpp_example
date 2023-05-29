#include <iostream>
#include <string>


class vector3{
    public:
        float x,y,z;

};

int main(){
    vector3  tvector;
    tvector.x=1.0f;
    tvector.y=2.0f;
    tvector.z=3.0f;
    vector3  tvector2 = tvector;

    std::cout<<tvector2.x<<","<<tvector2.y<<","<<tvector2.z<< std::endl;

    return 0;


}