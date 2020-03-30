    #include<bits/stdc++.h>
    #define forin(i,n) for(int i=0;i<(int)n;i++)
    #define forisn(i,s,n) for(int i=s;i<(int)n;i++)
    #define mostrar(x,v) for(auto x:v)cout<<x<<" "
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
    const double pi=3.14159265358979323846;
    struct punto{
        ll x,y;
        punto(ll x=0,ll y=0):x(x),y(y){}
        punto operator-(punto p1){return punto(x-p1.x,y-p1.y );}
    };
    struct rectangulo{
        punto downLeft,downRight,upLeft,upRight;
        ll area;
    };
    struct circulo{
        punto centro;
        int r;
        double area;
    };
    struct recta{
        punto p,v;
        double t;
    };
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        //Puntos del rectangulo, del centro de la circunferencia, y sus areas correspondientes
        rectangulo rect;
        circulo circ;
        vector<recta> linesRect(4);
        cin>>circ.centro.x>>circ.centro.y>>circ.r>>rect.downLeft.x>>rect.downLeft.y>>rect.upRight.x>>rect.upRight.y;
        circ.area=circ.r*circ.r*pi;
        rect.area=abs(rect.upRight.x-rect.downLeft.x)*abs(rect.upRight.y-rect.downLeft.y);
        rect.upLeft.x=rect.downLeft.x;
        rect.upLeft.y=rect.upRight.y;
        rect.downRight.y=rect.downLeft.y;
        rect.downRight.x=rect.upRight.x;
        linesRect[0].p=rect.downLeft;
        linesRect[0].v=(rect.upLeft-rect.downLeft);
        linesRect[1].p=rect.upLeft;
        linesRect[1].v=(rect.upRight-rect.upLeft);
        linesRect[2].p=rect.downRight;
        linesRect[2].v=(rect.upRight-rect.downRight);
        linesRect[3].p=rect.upRight;
        linesRect[3].v=(rect.downRight-rect.downLeft);
        //operaciones
        ll dx=rect.upLeft.x-rect.downLeft.x;
        ll dy=rect.upLeft.y-rect.downLeft.y;
        ll dr=dx*dx+dy*dy;
        ll det=rect.downLeft.x*rect.upLeft.y-rect.downLeft.y*rect.upLeft.x;
        ll discriminante=circ.r*circ.r*dr-det*det;
        if(discriminante==0){
            cout<<"tang\n";
        }else if(discriminante<0)cout<<"no intersection\n";
        else cout<<"intersection\n";
        return 0;
    }
