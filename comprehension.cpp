#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define MSH1 0
#define MDH1 1
#define PSH1 2
#define PDH1 3
#define LIST_PROTEIN_MOLECULES {MSH1,MDH1,PSH1,PDH1}
#define N_DELAY_STEPS 5
#define DELAYED_REACT {MSH1, PSH1}
// /* Rate Definitions */
// // molecule synthesis rate
#define RATE_MSH1 0.4
// molecule decay rate
#define RATE_MDH1 0.2
// protein synthesis rate
#define RATE_PSH1 0.3
// protein decay rate
#define RATE_PDH1 0.1
#define delay(reaction) 
#define REACTION (component) RATE_##component
// {delay(component)}, MDH1,PSH1,PDH1}
template <typename T> void print(const std::vector<T>& v){
    for (auto const &i: v) {
        std::cout << i << std::endl;
    }
}
 
int main(){
  std::vector<int> delayed = DELAYED_REACT;
  std::vector<std::vector<int>> delay_steps;
  for (auto const &i: delayed){
    std::vector<int> newvec;
    delay_steps.push_back();
    for (int j = 0; j < N_DELAY_STEPS; j++)
      delay_steps.push_back(i + j);
  }
  print(delay_steps);
  return 0;
}
