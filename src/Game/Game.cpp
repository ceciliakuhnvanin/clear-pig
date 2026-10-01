#include "Game.hpp"

void Game::run() {}

void Game::start() {}

Game::~Game() {
    delete this->player;
}