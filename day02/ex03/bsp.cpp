#include "Point.hpp"

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
    Fixed q1 = (a.getterx() - point.getterx()) * (b.gettery() - a.gettery()) - (b.getterx() - a.getterx()) * (a.gettery() - point.gettery());
    Fixed q2 = (b.getterx() - point.getterx()) * (c.gettery() - b.gettery()) - (c.getterx() - b.getterx()) * (b.gettery() - point.gettery());
    Fixed q3 = (c.getterx() - point.getterx()) * (a.gettery() - c.gettery()) - (a.getterx() - c.getterx()) * (c.gettery() - point.gettery());

    if ((q1 > 0 && q2 > 0 && q3 > 0) || (q1 < 0 && q2 < 0 && q3 < 0))
        return true;
	return false;
}
