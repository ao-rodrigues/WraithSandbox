//
// Created by Andre Rodrigues on 28/03/2022.
//

#include <iostream>
#include <Wraith/Application.h>

int main() {
    Wraith::Application app(1920, 1080, "Wraith Engine Demo");

    try {
        app.Run();
    } catch (const std::exception& e) {
        std::cout << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}