#include <iostream> 
using namespace std;

class DataTime
{
	int sec(int god1, int mes1, int den1, int chas1 = 0, int min1 = 0, int sec1 = 0)
	{
		int god_l1 = god1 - 1970;
		int god_l2 = (god_l1 / 4) + 0.5;
		int den = god_l1 * 365 + god_l2;
		switch (mes1)
		{
		case 1: den += 31; break;
		case 2: den += 69; break;
		case 3: den += 90; break;
		case 4: den += 120; break;
		case 5: den += 151; break;
		case 6: den += 181; break;
		case 7: den += 212; break;
		case 8: den += 243; break;
		case 9: den += 273; break;
		case 10: den += 304; break;
		case 11: den += 334; break;
		case 12: den += 365; break;
		};
		if (god1 % 4)den++;
		den += den1;
		int sec = den * 86400;
		sec += chas1 * 3600;
		sec += min1 * 60;
		sec += sec1;
		return sec;
	}
};