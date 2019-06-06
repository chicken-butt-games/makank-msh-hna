#include <iostream>
#include <NotAVegetable.h>

class MakankMshHna : public NotAVegetable::Application {
public:
    MakankMshHna() {

    }

    ~MakankMshHna() {

    }

};

NotAVegetable::Application* NotAVegetable::CreateApplication() {
    return new MakankMshHna();
}

