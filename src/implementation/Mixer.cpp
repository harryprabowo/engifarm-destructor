#include "../class/renderables/obj/cell/facility/Mixer.h"

using namespace std;

Mixer::Mixer(int x, int y) : Facility(x, y)
{

}

int Mixer::interact() {
    return 1;
}

int Mixer::mix() {
    return 1;
}