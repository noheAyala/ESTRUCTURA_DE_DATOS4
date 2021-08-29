#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

std:: string generarMovimientoComputadora();
std:: string obtenerMovimientoJugador();

void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora); 
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijeras(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main(){
	
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
}
	
	std:: string generarMovimientoComputadora(){
		
		std:: string movimiento;
		int numeroAleatorio;
		
		srand(time(0));
		numeroAleatorio = rand()% 5 + 1;
		
		switch (numeroAleatorio){
			 
			 case 1: 
			    movimiento = "piedra";
			    break;
			 case 2:
			    movimiento = "papel";
			    break;  
			  case 3:
			    movimiento = "tijeras";
			    break; 
			  case 4:
			    movimiento = "lagarto";
			    break;  
			  case 5:
			    movimiento = "spock";
			    break;  	 
		}
		
		std::cout << "Computadora: " << movimiento << "\n";
		
		return movimiento;
	}
	
	std:: string obtenerMovimientoJugador(){
		
		using namespace std;
		string movimiento;
		 
		cout << "piedra, papel, tijeras, lagarto o spock (para terminar el juego escriba salir)? ";
		cin >> movimiento;
		
		return movimiento;
		 
	}
	
	void determinarGanador(std::string computadora, std::string jugador){
		if (computadora == jugador){
			std::cout << "empate!\n";
		}
		else if (jugador == "piedra"){
			procesarEntradaJugadorPiedra(computadora);
		}
		else if (jugador == "papel"){
			procesarEntradaJugadorPapel(computadora);
		}
		else if (jugador == "tijeras"){
			procesarEntradaJugadorTijeras(computadora);
		}
		else if (jugador == "lagarto"){
			procesarEntradaJugadorLagarto(computadora);
		}
		else if (jugador == "spock"){
			procesarEntradaJugadorSpock(computadora);
		}
		else {
			std::cout << "entrada no valida. Ingrese piedra, papel o tijeras \n";
		}	
	}
	
	void procesarEntradaJugadorPiedra(std:: string computadora){
		if (computadora == "papel"){
			std::cout << "La computadora gana, Papel cubre a piedra \n";
		}
		else if (computadora == "tijeras"){
			std::cout << "Ustde gana. Piedra rompe a las tijeras \n";
		}
		else if (computadora == "lagarto"){
			std::cout << "Ustde gana. Piedra aplasta al lagarto \n";
		}
		else if (computadora == "spock"){
			std::cout << "La computadora gana. Spock desintegra la piedra \n";
		}
	}
	
	void procesarEntradaJugadorPapel(std:: string computadora){
		if (computadora == "piedra"){
			std::cout << "Usted gana, Papel cubre piedra \n";
		}
		else if (computadora == "tijeras"){
			std::cout << "La computadora gana, Tijeras corta papel.  \n";
		}
		else if (computadora == "lagarto"){
			std::cout << "La computadora gana. El lagarto debora el papel  \n";
		}
		else if (computadora == "spock"){
			std::cout << "Usted gana. El papel desaprueba a spock  \n";
		}
	}
	void procesarEntradaJugadorTijeras(std:: string computadora){
		if (computadora == "papel"){
			std::cout << "Usted gana, Tijeras corta papel \n";
		}
		else if (computadora == "piedra"){
			std::cout << "La computadora gana, Piedra rompe tijeras \n";
		}
		else if (computadora == "lagarto"){
			std::cout << "Usted gana, Las tijeras decapitan al lagarto  \n";
		}
		else if (computadora == "spock"){
			std::cout << "La computadora gana, Spock aplasta las tijeras \n";
		}				
	}
	
	void procesarEntradaJugadorLagarto(std:: string computadora){
		if (computadora == "piedra"){
			std::cout << "La computadora gana, La piedra aplasta al lagarto \n";
		}
		else if (computadora == "papel"){
			std::cout << "Usted gana, El lagarto devora el papel  \n";
		}
		else if (computadora == "tijeras"){
			std::cout << "La computadora gana, Las tijeras decapitan al lagarto \n";
		}
		else if (computadora == "spock"){
			std::cout << "Usted gana, El lagarto envenena a Spock \n";
		}				
	}
	
	void procesarEntradaJugadorSpock(std:: string computadora){
		if (computadora == "piedra"){
			std::cout << "Usted gana, Spock desintegra la piedra \n";
		}
		else if (computadora == "papel"){
			std::cout << "La computadora gana, El papel desaprueba a Spock \n";
		}
		else if (computadora == "tijeras"){
			std::cout << "Usted gana, Spock aplasta las tijeras  \n";
		}
		else if (computadora == "lagarto"){
			std::cout << "La computadora gana, El lagarto envenena a Spock \n";
		}				
}

