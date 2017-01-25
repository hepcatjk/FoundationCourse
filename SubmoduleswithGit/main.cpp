#include <iostream>
#include <Eigen/Dense>


 
int main(int argc, char *argv[]){
     std::cout << "Hello Eigen External Library Tester!" << std::endl;
 
     Eigen::MatrixXd m(2,2);
     m(0,0) = 3;
     m(1,0) = 2.5;
     m(0,1) = -1;
     m(1,1) = m(1,0) + m(0,1);

     std::cout << std::endl << "Matrix M: " << std::endl;
     std::cout << m << std::endl;

     std::cout << std::endl << "The Inverse of Matrix M: " << std::endl;
     std::cout << m.inverse() << std::endl;


	 Eigen::MatrixXd m2 = Eigen::MatrixXd::Random(3,3);

	 Eigen::VectorXd v(3);
     v << 1, 2, 3;    

     std::cout << std::endl << "Matrix M_2: " << std::endl;
     std::cout << m2 << std::endl;
     std::cout << "Vector v: " << std::endl;
     std::cout << v << std::endl;     

    std::cout << "M_2 * v =" << std::endl << m2 * v << std::endl;


}