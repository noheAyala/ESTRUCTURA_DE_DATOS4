






#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

template <typename TIPODATO>
class Lista{
	private:
		int cuenta;
		int capacidad;
		TIPODATO *items;
		void agrandar();
	public:
		Lista(int capacidad);
		Lista();
		~Lista();
		Lista(const Lista &otra);
		bool estaVacia();
		int tamano();
		void insertar(int indice, TIPODATO item);
		void adjuntar(TIPODATO item);
		TIPODATO obtener(int indice);
		bool contiene(TIPODATO item);
		TIPODATO remover(int indice);
		string comoCadena();		
};


template <typename TIPODATO>
Lista<TIPODATO>::Lista(int capacidad){
	cout << "creando una lista vacia..." << endl;
	this->cuenta = 0;
	this->capacidad = capacidad;
	this->items = new TIPODATO[capacidad];
	cout << " la lista tiene capacidad para:  " << this->capacidad << "elementos   " << endl;
}


template <typename TIPODATO>
Lista<TIPODATO>::Lista() : Lista(4){}


template <typename TIPODATO>
Lista<TIPODATO>::~Lista() {
	cout << "destruyendo la lista ..." << endl;
	delete[]items;	
}


template <typename TIPODATO>
Lista<TIPODATO>::Lista(const Lista<TIPODATO> &otra){
	cout << "copiando una lista desde otra ..." << endl;
	this->cuenta = otra.cuenta;
	this->capacidad = otra.capacidad;
	this->items = new TIPODATO[capacidad];
	for(int i=0; i < this->cuenta; i++)
		this->items[i] = otra.items[i];
}


template <typename TIPODATO>
bool Lista<TIPODATO>::estaVacia(){
	cout << "comprobando si la lista esta vacia ..." << endl;
	return this->cuenta ==0;
}


template <typename TIPODATO>
int Lista<TIPODATO>::tamano(){
	cout << "obteniendo el tamaño de la lista ..." << endl;
	return this->cuenta;
}

template <typename TIPODATO>
void Lista<TIPODATO>::agrandar(){
	cout << "duplicando el tamano de la lista ..." << endl;
	TIPODATO *temp = this->items;
	this->capacidad *= 2;
	this->items = new TIPODATO[capacidad];
	for (int i = 0; i < cuenta; i++)
		this->items[i] = temp[i];
		delete[] temp;
		cout << "la lista tiene capacidad para:  " << this->capacidad << " elementos  " << endl;	
}


template <typename TIPODATO>
void Lista<TIPODATO>::insertar(int indice, TIPODATO item){
	
	if (indice < 0 || indice > this->cuenta) throw "indice fuera de rango";
	
	
	if(this->cuenta >= this->capacidad) this->agrandar();
	
	cout << "insertando un alemento..." << endl;
	
	for (int i = cuenta - 1; i >= indice; i--){ 
		cout << " desplazando elementos" << items[i] << "del indice";
		cout << i << "al indice" << (i+1) << endl;
		this->items[i+1] = this->items[i];
	}
	
	
	cout << "insertandi elemento" << item << "en el indice" << indice << endl;
	this->items[indice] = item;
	
	
	cout << "incrementandi la cuenta de elemento" << endl;
	this->cuenta++;
}


template <typename TIPODATO>
void Lista<TIPODATO>::adjuntar(TIPODATO item){
	this->insertar(this->cuenta, item);
}


template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::obtener(int indice){
	
	if (indice < 0 || indice >= this->cuenta) throw "indice";
	if (this->estaVacia()) throw "No se puede recuperar elemento de una lista vacia";
	
	cout << "recuperando elemento en el indice" << indice << endl;
	return this->items[indice];
}


template <typename TIPODATO>
bool Lista<TIPODATO>:: contiene(TIPODATO item){
	for(int i = 0; i < this->cuenta; i++){
		cout << "recorriendo elemento con indice" << i << endl;
		if (this->items[i] == item)
			return true;
	}
	
	return false;
}


template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::remover(int indice){
	
	if(this->estaVacia()) throw "no se puede remover elementos de una lista vacia";
	if (indice < 0 || indice >= this->cuenta) throw "indice fuera de rango";
	
	cout << "removiendo el elemento con idice" << indice << "..." << endl;
	
	TIPODATO  valor = this->items[indice];
	for (int i = indice; i < cuenta -1; i++){
		cout << "desplanzo elemento" << items[i] << "del indice";
		cout << (i+1) << "al indice" << i << endl;
		this->items[i] = this->items[i+1];
	}
	
	
	cout << "reduciendo la cuenta de elementos" << endl;
	this->cuenta--;
	return valor;
}

template <typename TIPODATO>
string Lista<TIPODATO>::comoCadena(){
	ostringstream s;
	s << "[";
	for (int i=0; i< (this->cuenta); i++){
		s << this->items[i];
		if(i < this->cuenta-1)
			s << ",";
	}
	s << "[";
	return s.str();
}


#endif
