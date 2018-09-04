#include "../inc/sum.hpp"

int Sum::get_current_sum() {
    return current_sum;
}

void Sum::add(int to_add) {
    current_sum += to_add;
}