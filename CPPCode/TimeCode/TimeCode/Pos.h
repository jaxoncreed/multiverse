#ifndef Pos_ADT
#define Pos_ADT
class Pos {
public:
	Pos();
	Pos(double xLoc, double yLoc, double zLoc);
	~Pos();
	void setX(double xLoc);
	void setY(double yLoc);
	void setZ(double zLoc);
	double getX();
	double getY();
	double getZ();
private:
	double x;
	double y;
	double z;
};
#endif