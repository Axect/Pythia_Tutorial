#include "Pythia8/Pythia.h"
using namespace Pythia8;

int main() {
    Pythia pythia;
    pythia.readString("Top:gg2ttbar = on");
    pythia.readString("Beams:eCM = 8000");
    pythia.init();

    pythia.next();

    return 0;
}
