#include "../class/renderables/Renderables.h"

using namespace std;

char Renderables::render(){
    return representation;
}

void Renderables::setRender(char in){
    representation = in;
}