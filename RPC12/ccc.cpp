#include <bits/stdc++.h>
using namespace std;
double EPS = 1e-9;
double r, x1, x2, yy, y2;

double circSegment(double xa, double ya, double xb, double yb)
{
    double s = hypot(xb - xa, yb - ya);
    double alpha = 2 * asin(s / 2 / r);
    return r*r / 2 * (alpha - sin(alpha));
}
double corte(double yb, double yt)
{
    double xbc = sqrt(r*r - yb*yb);
    double xtc = sqrt(r*r - yt*yt);
    double xbl = max(x1, -xbc);
    double xbr = min(x2, xbc);
    double xtl = max(x1, -xtc);
    double xtr = min(x2, xtc);
    if (xbl > xbr+EPS || xtl > xtr+EPS)
        return 0;
    double rect = (yt-yb) * (xbr+xtr-xbl-xtl) / 2;
    if (abs(xbl-xtl) > EPS)
        rect += circSegment(xbl, yb, xtl, yt);
    if (abs(xbr-xtr) > EPS)
        rect += circSegment(xbr, yb, xtr, yt);
    return rect;
}


int main()
{
    double x0, y0;
    cin >> x0 >> y0 >> r>> x1 >> yy >> x2 >> y2;
    x1-=x0;
    yy-=y0;
    x2-=x0;
    y2-=y0;
    if (x1 > x2)
    {
        double t = x1;
        x1 = x2;
        x2 = t;
    }
    if (yy > y2)
    {
        double t = yy;
        yy = y2;
        y2 = t;
    }

    double ys[10];
    ys[0] = max(-r, yy);
    ys[1] = min(r, y2);
    int yc = 2;
    if (0 > ys[0] && 0 < ys[1])
        ys[yc++] = 0;
    if (abs(x1) < r)
    {
        double y1c = sqrt(r*r - x1*x1);
        if (y1c > ys[0] && y1c < ys[1])
            ys[yc++] = y1c;
        if (-y1c > ys[0] && -y1c < ys[1])
            ys[yc++] = -y1c;
    }
    if (abs(x2) < r)
    {
        double y2c = sqrt(r*r - x2*x2);
        if (y2c > ys[0] && y2c < ys[1]) ys[yc++] = y2c;
        if (-y2c > ys[0] && -y2c < ys[1]) ys[yc++] = -y2c;
    }
    double area = 0;
    if (ys[0] < ys[1])
    {
        sort(ys, ys+yc);
        for (int i = 1; i < yc; ++i) area += corte(ys[i-1], ys[i]);
    }
    printf("%.4f\n",area);
    return 0;
}
