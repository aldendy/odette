/*
This header implements a class which stores O-ring information and facilitates
calculations based on this information.
*/

#include <vector>


struct Row {
    char dash_size[6];
    float id;
    float id_tol;
    float width;
    float width_tol;
};

class oring {
private:
  std::vector<Row> two_series_data;
  
public:
  oring();
  float get_id(char dash_size[6]);
};