#include"factory2.h"

std::unique_ptr<IFigure2D> Factory::create(figure2 a){
     switch(a){
            case figure2::cir:
                return make_unique<circle>();
                break;
            case figure2::tri:
                return make_unique<triangle>();
                break;
            case figure2::trap:
                return make_unique<trapezoid>();
                break;
            case figure2::polyg:
                return make_unique<polygon>();
                break;
            case figure2::rectan:
                return make_unique<rectangle>();
                break;
        }
        return nullptr;
}