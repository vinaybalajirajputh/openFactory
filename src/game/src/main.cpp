#include <Eigen/Dense>
#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "test" << std::endl;
    Eigen::Matrix4d m;
    m(2, 2) = 4;
}
