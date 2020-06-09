#include <iostream>
class B {
    private:
    	int B1;
    	float B2;
    public:
		// Get e Set B1
		int getB1(){return B1;}
		void setB1(int novoValor){
			B1 = novoValor;
		}

		// Get e Set B2
		int getB2(){return B2;}
		void setB2(float novoValor){
			B2 = novoValor;
		}

		void MB1(){
			std::cout << "MB1" << std::endl;
		}

		void MB2(){
			std::cout << "MB2" << std::endl;
		}
		
		void MB3(){
			std::cout << "MB3" << std::endl;
		}
};
