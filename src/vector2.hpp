//
// Created by Nazım Can on 19.10.2025.
//

#pragma once

namespace raylib
{

// Vector2, 2 components
class Vector2 {
public:
    Vector2() = default;

    Vector2(const float x, const float y)
        : x{x}
        , y{y}
    {}

    Vector2 operator-() const
    {
        return {-x, -y};
    }

    Vector2 operator+(const Vector2 other) const
    {
        return {x + other.x, y + other.y};
    }

    Vector2 operator+(const float value) const
    {
        return *this + Vector2{value, value};
    }

    Vector2 operator-(const Vector2 other) const
    {
        return *this + -other;
    }

    Vector2 operator-(const float value) const
    {
        return *this - Vector2{value, value};
    }

    Vector2& operator+=(const Vector2 other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    Vector2& operator+=(const float value) {
        x += value;
        y += value;
        return *this;
    }

    float x{};                // Vector x component
    float y{};                // Vector y component
};

}
