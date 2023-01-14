#pragma once
#include "SFML/Graphics.hpp"
const float width = 1600.f;
const float height = 900.f;
const std::string title = "SFML Simple Arcanoid P33122";
//ÁÈÒÀ
const float bat_width = 150.f;
const float bat_height = 15.f;
const float bat_offset = 50.f;
const sf::Color Bat_Color{ sf::Color::White };
const sf::Vector2f bat_start_pos{ (width - bat_width) / 2, height - bat_offset - bat_height };
const float bat_speed = 30.f;
//ØÀÐ
const int BALL_WIDTH = 20;
const float ballradius = 10.f;
const int BALL_HEIGHT = 20.f;
const float ball_offset = 20.f;
const sf::Color ballColor{ sf::Color::White };
const sf::Vector2f ball_start_pos{};
float ball_dx = 7.f;
float ball_dy = 7.f;