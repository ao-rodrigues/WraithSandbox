//
// Created by andro on 28/03/2022.
//

#include <iostream>
#include <WraithEngine/Application.h>

int main()
{
    Wraith::Application app(800, 600, "Wraith Engine Demo");

    try
    {
        app.Run();
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}