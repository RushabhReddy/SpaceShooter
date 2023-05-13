#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main()
{
    constexpr std::size_t kFramesPerSecond{60};
    constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
    constexpr std::size_t kScreenWidth{1280};
    constexpr std::size_t kScreenHeight{600};
    constexpr std::size_t kGridWidth{48};
    constexpr std::size_t kGridHeight{46};

    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);
    std::cout << "Game has terminated successfully!\n";
    return 0;
}
