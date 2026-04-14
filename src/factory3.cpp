#include"factory3.h"
#include "cube.h"
#include "sphere.h"
std::unique_ptr<IFigure3D> Factory3::create(figure3 a){
     switch(a){
            case figure3::spher:
                return make_unique<sphere>();
                break;
            case figure3::cube:
                return make_unique<cube>();
                break;
        }
        return nullptr;
}