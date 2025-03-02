#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <sstream>
#include "../src/triangulo.cpp"

TEST_CASE("Prueba con alturas 2, 4, 5") {
    std::istringstream input("2\n4\n5\n");
    std::ostringstream output;
    std::streambuf* cinBuf = std::cin.rdbuf();
    std::streambuf* coutBuf = std::cout.rdbuf();
    std::cin.rdbuf(input.rdbuf());
    std::cout.rdbuf(output.rdbuf());

    main();  // Llamamos a la función main()

    std::cin.rdbuf(cinBuf);
    std::cout.rdbuf(coutBuf);

    REQUIRE(output.str() == "*\n**\n*\n**\n***\n****\n*\n**\n***\n****\n*****\n");
}
