#include "frontend/Platform.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Uso: " << argv[0] << " <caminho_para_a_rom.gba>" << std::endl;
        return 1;
    }

    try {
        Platform platform(argv[1]);
        platform.run();
    } catch (const std::exception& e) {
        std::cerr << "Ocorreu um erro: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}