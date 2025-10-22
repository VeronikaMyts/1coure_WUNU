#include "Engine.h"

class Turbo_jet : public Engine
{
	int traction;

public:
	Turbo_jet();
	Turbo_jet(int _power, int _weight, int _traction);
	~Turbo_jet();
	void setTraction(int);
	int getTraction();
	virtual string toString() override;
};