#include <cstdlib>
#include "tile.h"

#define squarePointer square*
enum squarePos {A1,A2,A3,A4,B1,B2,B3,B4,C1,C2,C3,C4,D1,D2,D3,D4};

class square
{

public:

	void setSquarePos(squarePos); //Asigno la posicion del Square
	squarePos GetSquarePos();	//Devuelve la posicion del Square
	bool canMoveLeft(); //Devuelve si se puede mover a las Square correspondientes
	bool canMoveRight();
	bool canMoveUp();
	bool canMoveDown();
	squarePointer getLeftSquare();
	squarePointer getRightSquare();
	squarePointer getDownSquare();
	squarePointer getUpSquare();
	void setLeftSquare(squarePointer);
	void setRightSquare(squarePointer);
	void setUpSquare(squarePointer);
	void setDownSquare(squarePointer);

private:

	squarePos pos;
	squarePointer Left;
	squarePointer Right;
	squarePointer Up;
	squarePointer Down;
	tile squareTile; //aca va la tile que le corresponde a este square

};