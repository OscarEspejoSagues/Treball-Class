#include <iostream>
#include <forward_list>


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


*/




void main() {
	std::forward_list<int> p1;
	std::cout << p1.max_size() << std::endl;
}