/*
//tablero
#define POSICIONTILE
#define DIRECCION
#define squarePos

//lista de tiles para que reciba el tablero

class loot
{

};

class player
{
public:

private:
	character currentChar;
	loot Currentloot;

};

class patrolDeck
{
public:

private:
};

class dice
{

public:
	dice();
	setDicePos();
	setDiceValue();

private:

};

class guard
{
public:
	guard();
	move();
	dicePos getDicePos();
	setDicePos(dicePos);
	setAlarmOn();
	setAlarmOff();
	setGuardPos(squarePos);


private:
	squarePos pos;
	dice guardDice;
	bool alarm;

};
class character
{
public:
	character();
	peak(DIRECCION);
	move(DIRECCION);
	putHackTokken();
	
	setCharacterPos();
	getActions();
	//otras acciones;

private:
	char tokken;
	squarePos pos;
	char actions;
};


class tile
{
public:
	tile();
	bool isvisible();	//Devuelve 1 si la tile es visible, 0 si no
	void doAction();  	//hace la accion correspondiente a la tile
	POSICIONTILE getTilePosition(); //devuelve la posicion del tile
	void setTilePosition(POSICIONTILE); //Setea
	~tile();
	setDownStairsTokken();
	setTileNumber();

private:
	bool visible; //Si es 0 no esta visible, si es 1 si
	POSICIONTILE pos;
	bool downStairs;
	char number; //cero si es safe

};

class tablero
{

public:

	tablero();	//aca tendria que crearse el grafo, PODEMOS PONER UN TYPEDEF PARA SABER QUE TABLERO SE CREA TOTAL ESTA SUPER HARDCOEADO EL GRAFO
	~tablero();
	void shuffle(punteroArregloTiles); //mescla los distintos tiles en las posiciones del tablero, deberia recibir un puntero al arreglo de tiles
	/*bool moveLeft();
	bool moveRight();
	bool moveUp();
	bool moveDown();
	punteroTile returnTile(posicionTile); //devuelve un puntero(?) a la tile

private:

	punteroSquare squares[16];
	square currentSquare;


	
};

class square
{

public:

	void setSquarePos(squarePos);
	squarePos GetSquarePos();
	bool canMoveLeft();
	bool canMoveRight();
	bool canMoveUp();
	bool canMoveDown();
	punteroSquare getLeftSquare();
	punteroSquare getRightSquare();
	punteroSquare getDownSquare();
	punteroSquare getUpSquare();
	void setLeftSquare(punteroSquare);
	void setRightSquare(punteroSquare);
	void setUpSquare(punteroSquare);
	void setDownSquare(punteroSquare);

private:

	squarePos pos;
	punteroSquare Left;
	punteroSquare Right;
	punteroSquare Up;
	punteroSquare Down;
	punteroTile tile; //aca va la tile que le corresponde a este square


};

*/