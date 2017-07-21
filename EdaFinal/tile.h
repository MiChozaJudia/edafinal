#include <cstdlib>

class tile
{
public:
	tile();
	~tile();
	bool isvisible();	//Devuelve 1 si la tile es visible, 0 si no
	void doAction();  	//hace la accion correspondiente a la tile
	setDownStairsTokken();
	setTileNumber();

private:
	bool visible; //Si es 0 no esta visible, si es 1 si
	bool downStairs;
	char number; //cero si es safe

};