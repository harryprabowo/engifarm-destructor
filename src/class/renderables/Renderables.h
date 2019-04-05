#ifndef RENDERABLES_H
#define RENDERABLES_H

using namespace std;

class Renderables // ABC
{
    public:
        char render(); //outputs char representation
        void setRender(char); //setter
    private:
        char representation;
};

#endif