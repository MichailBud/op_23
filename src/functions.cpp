#include <iostream>
#include "functions.h"

int max(int i1, int i2) {     // Функция поиска максимума из двух чисел

    if (i1 > i2) return i1;

    return i2;
}

int sum(int i1, int i2){    // Сумма двух чисел
    return i1 + i2;
}

int triangle_square(int height, int lenght){ // Площдь треугольника
    return lenght * height / 2;
}

int square(int height, int width){    // Площадь прямоугольника
    if (!((width>0) && (height>0))) throw Area_error();
    return height * width;
}

void write_1000(std::string word){  // Пишет введённое слово 1000 раз
    for(int i=0; i<1000; i++){
        std::cout<<word<<std::endl;
    }
}

int contrast(std::vector<int> Vector){

    int Max{Vector[0]};

    int Min{Vector[0]};

    for (auto element : Vector) {

        if (element > Max) Max = element;
        if (element < Min) Min = element;
    }
    return (Max - Min);
    }

int contrast2(std::vector<int> v){
    if (!(v.size > 1)) throw int();
	auto [min, max] = std::minmax_element(begin(v), end(v));
	return (*max-*min);	
}