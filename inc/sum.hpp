#pragma once

class Sum {
  private:
    int current_sum = 0;
  public:
    int get_current_sum();
    void add(int to_add);
};