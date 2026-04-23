#include <iostream>
#include <vector>

struct Row {
    char dash_size[6];
    float id;
    float id_tol;
    float width;
    float width_tol;
};

int main() {
  std::vector<Row> d{
    {"2-001", 0.029, 0.004, 0.04, 0.003},
    {"2-002", 0.042, 0.004, 0.05, 0.003},
    {"2-003", 0.056, 0.004, 0.06, 0.003},
    {"2-004", 0.07, 0.005, 0.07, 0.003}
  };
  std::cout << d[1].dash_size << std::endl;
  return 0;
}
