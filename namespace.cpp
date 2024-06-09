#include <iostream>

namespace primero{
    int x = 1;
} // namespace primero

namespace segundo{
    int x = 2;
}

int main (){

    using namespace primero;

    std::cout<<"X = "<<primero::x;
    

}