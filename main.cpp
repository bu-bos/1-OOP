#include <iostream>
#include <cmath>
using namespace std;

class Vector{
private:
    double p, alpha, gamma, x, y, z;;
public:
    Vector(){
        p = 0;
        alpha = 0;
        gamma = 0;
    }

    void setVector(){
        cout << ("Enter vector") << endl;
        cout << "Enter p - distance from point to origin \n p=";
        cin >> p;
        cout << "Enter alpha - the angle between the radius vector and its projection on the x, y plane \n alpha=";
        cin >> alpha;
        cout << "Enter gamma - the angle between the specified projection and the positive direction of the x axis \n gamma =";
        cin >> gamma;
        cout << "\n";
    }

    void getVector(){
        cout << "p = " << p << ";" << endl;
        cout << "alpha = " << alpha << ";" << endl;
        cout << "gamma = " << gamma << ";" << endl;
        cout << "F(" << p << ";" << alpha << ";" << gamma << ");" << "\n\n";
    }

    void getXyz(){ //http://publish.sutd.ru/e_books/analit_geometr_2014/glava/analiticheskaya_geometria_v_trehmernom_prostranstve/sistemi_koordinat_v_trehmernom_prostranstve.html
        x = p * sin(alpha) * cos(gamma),
        y = p * sin(alpha) * sin(gamma),
        z = p * cos(alpha);
        cout << "x =" << x << "\n" << "y = " << y << "\n" << "z = " << z << endl;
        cout << "F(" << x << ";" << y << ";" << z << ");" << "\n\n";
    }
};

    int main() {
        Vector a;
        a.setVector();
        a.getVector();
        a.getXyz();
    }