#include <iostream>
#include <string>




class Vector3f{
    public:
    Vector3f operator+(const Vector3f& rhs){
        Vector3f result;
        result.x= x + rhs.x;
        result.y=y + rhs.y;
        result.z= z + rhs.z;
        return result;

    }

    float x,y,z;
};



int main(){

    Vector3f myvector;
             myvector.x =1.f;
             myvector.y =2.f;
             myvector.z =3.f;
    Vector3f myvector2;
             myvector2.x =1.f;
             myvector2.y =2.f;
             myvector2.z =3.f;
    Vector3f result;
    result = myvector+ myvector2;
    std::cout<<result.x<<","<<result.y<<","<<result.z<<std::endl;


    return 0;


}