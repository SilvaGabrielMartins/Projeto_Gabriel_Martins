#include <iostream>
class A {
	private:
		string C1;
		int C2;
	public:
		// Get e Set A1
		int getC1(){return C1;}
		void setC1(string novoValor){
			C1 = novoValor;
		}

		// Get e Set A2
		int getC2(){return C2;}
		void setC2(int novoValor){
			C2 = novoValor;
		}

		void MC1(){
			std::cout << "MC1" << std::endl;
		}

		void MC2(){
			std::cout << "MC2" << std::endl;
		}
};
