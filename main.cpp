#include "russian-roulette.cpp"


int main() {
    std::cout <<
        "This is a `panic` routine that plays russian roulette. " <<
        "It is ment to be called when a program gets to an unrecoverable state. " <<
        "If lucky, you will get an error code and a graceful exit. If unlycky, you will get a segmentation fault.\n\n" <<
        std::endl;
    panic(0x5b84896a);
}
