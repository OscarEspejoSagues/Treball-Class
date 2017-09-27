#include <iostream>
#include <forward_list>
#include <vector>


/*
+-+ Sobrecarga de funciones

	int test(){}
	int test(int a){}
	float test(doble a){}

Ejemplo:
===================================
	int sum (int a, int b){
		return a+b;
	}

	doble sum (doble a, doble b){
		return a+b;
	}

	int main(){
		cout<<sum(10,20);
		cout<<sum(1.0, 1.5);
		return 0;
	}
====================================


Firma --> void lmao (int a, int b) siempre diferente si hay varias funciones que se llaman igual
		  void lmao (int a, float b) funciones con el mismo nombre pero diferente firma

Overloaded function--> familia de funciones con el mismo nombre que tienen firmas diferentes


////////////////////////////////////////////////////////////////////////////////////////////////

+-+ Function Template

    - Familia de funciones con una unica funcion, pero que acepta argumentos diferentes PLANTILLA
	- Podre usar esto con cualquier tipo? Mientras la funcion permita a esa variable la funcion definida, como por ejemplo el =, o el <, si podras

Ejemplo:
===================================

	? absolute (? a){
		if(a<0){
			a = -a;
		}
		return a;
	};

	----------------------

	template<typename T>

	T absolute (T a){
		if(a<0){
			a = -a;
		}
		return a;
	};
	---------------------
	EN EL MAIN LO LLAMARAS ASI:
	absolute<int>(4);
	absolute<float>(4.0); haria una comversion automatica para que pueda comprarlo 0.0 

===================================

	template <typename...> le puedes pasar tantos argumentos como quieras
	
	Argumentos por defecto //mirate esto en casa que el jueves lo pone seguro
	va con las cosas del allocator como obviando el segundo valor probablemente lo pregunte u better look at it
	
	-un ejercicio con funcion overloaded y pasarlo a template
	-montar una class template con especificaciones dadas 

Ejeplo de como pase de una funcion overloaded a template
===========================================
template<typename T>

T calculo(T a, T b) {
	return a + b;
}

void main() {
	double num1 = 1.9677261;
	double num2 = 3.448361;

	std::cout<< calculo (num1, num2);
}
===========================================

Ejeplo con multiples template: 
===========================================
template<typename t, typename b, typename w>

t calcula(t a, b c, w h) {
	return (a + c)/h;
}

void main() {
	float a = 67.918;
	int b = 7;
	int h = 8;
	std::cout << calcula(a, b, h);
}
===========================================
Ejemplo con vectores:

===========================================
template<typename T, typename A>

std::vector<T, A> Counteameesto(std::vector<T, A> a, std::vector<T, A> b) {
	std::vector <T, A> aux;
	for (int i = 0; i < b.size() || i < a.size(); i++){
		aux.push_back(a[i] + b[i]);
	}
	return aux;
}

void main() {
	std::vector<double> b({1.6,2.2,3.5,4.7,5.1,6.5,7.1,8.1,9.67,10.9});
	std::vector<double> a({1,2,3,4,5,6,7,8,9,10 });
	std::vector<double> aux;
	aux = Counteameesto(b, a);

	for (int i = 0; i < aux.size(); i++){
		std::cout << aux[i] << std::endl;
	}
}
=========================================
}*/

