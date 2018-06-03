#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> up(new int (40));
    std::unique_ptr<int> up2;
    
    //std::unique_ptr<int> up3(up);

    up2 = up;

    return 0;
}
