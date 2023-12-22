#include  "functions.h"
#include "catch2/catch.hpp"

TEST_CASE("Максимум"){

    CHECK(max(1, 2) == 2);
    CHECK(max(-1,-2) == -1);

}

TEST_CASE("Площадь треугольника"){

    CHECK(triangle_square(1, 2) == 1);
    CHECK(triangle_square(100, 20) == 1000);
}

TEST_CASE("Сумма"){

    CHECK(sum(1, 1) == 2);
    CHECK(sum(2, 3) == 5);
    CHECK(sum(-100, 298) == 198);
}

TEST_CASE("Площадь норма"){

     CHECK(square(200, 50) == 10000);
     CHECK(square(20, 20) == 400);
}
TEST_CASE("Площадь не норма"){

     CHECK_THROWS(square(200, -50));
     CHECK_THROWS(square(-20, 20));
     CHECK_THROWS(square(-20, -20));
}

TEST_CASE("Проверка вектора"){

    CHECK(contrast({1, 2, 3, 4, 5}) == 4);
    CHECK(contrast({-10, 25, 30, 45, 50}) == 60);
    CHECK(contrast({1, -2, 3, 64, 57}) == 66);
    CHECK(contrast({13, 23, 35, 44, -5}) == 49);
}
