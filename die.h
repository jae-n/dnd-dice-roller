#pragma once
class die
{
private:
	int sides;
	int value;
	

public:
	die(int);
	void roll();
	
	//getter /accessor

	int getSides();
	int getValue();
	
	void dieFour();
	void diesix();
	void dieEight();
	void dietweleve();
	void dietwenty();

	int getFour();
	int getsix();
	int getEight();
	int gettweleve();
	int gettwenty();
	
};