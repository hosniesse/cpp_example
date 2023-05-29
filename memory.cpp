#include <iostream>

void foo(){
    static int s_variable=0;                    //because  it's static the variable s_variable is gona live and persiste with this function foo (so it's initialise one time only)
    s_variable +=1;
    std::cout<<s_variable<<std::endl;            // so the result is gona increment 
}

int main(){
    for(int i=0;i<10;i++){
        foo();
    }
    return 0;
}
