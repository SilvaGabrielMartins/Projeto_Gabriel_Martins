#include <iostream>
class A {
	private:
		int A1;
		float A2;
	public:
		// Get e Set A1
		int getA1(){return A1;}
		void setA1(int novoValor){
			A1 = novoValor;
		}

		// Get e Set A2
		int getA2(){return A2;}
		void setA2(float novoValor){
			A2 = novoValor;
		}

		void MA1(){
			std::cout << "MA1" << std::endl;
		}

		void MA2(){
			std::cout << "MA2" << std::endl;
		}
		
		void MA3(){
			std::cout << "Alteração a classe A partir do clone" << std::endl;
		}
};
