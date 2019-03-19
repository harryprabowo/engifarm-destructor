#ifndef _RENDERABLES_H_
#define _RENDERABLES_H_



using namespace std;

class Renderables
{
    private:
        char representation;
    public:
        virtual char Render() = 0; //outputs char representation
        virtual void SetRender(char) = 0; //setter
};

#endif