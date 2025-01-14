#ifndef H_fillingType
#define H_fillingType

using namespace std;

class fillingType
{
public:
	fillingType();

	void Cheese(int numCheese, int cheeseType);

	void Meat(int numMeat, int meatType);

	void Veggies(int choice);

private:
	//misc
	bool peanutbutter;
	bool jelly;
	//cheese
	int Numcheese;
	int cheeseType;
	int cheddar;
	int american;
	int mozarella;
	int ricotta;
	int provolone;
	int colbyJack;
	//meat
	int numMeat;
	int meatType;
	int prosciutto;
	int bologna;
	int salami;
	int bacon;
	int turkey;
	int chicken;
	//veggies
	int tomatoes;
	int cucumbers;
	int onions;
	int peppers;
	int celery;
	int olives;
	//roasted or not
	bool roasted;




};

#endif