class Coordinate {

public:
	void SetX(double x);
	void SetY(double y);
	void Set(double x , double y);
	double GetX();
	double GetY();

	double GetDistance();

private:
	double x = 0;
	double y = 0;

};