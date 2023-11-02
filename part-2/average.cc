// Vincent Masiclat
// vincemasiclat05@csu.fullerton.edu
// @VinceMasiclat
// Partners: @Ctdiep

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  bool first_ele{true};
  double sum{0};
  for (std::string& argument : arguments) {
    if (first_ele == true) {
      first_ele = false;
    } else {
      sum = sum + std::stod(argument);
    }
  }
  double avg{sum / (static_cast<int>(arguments.size()) - 1)};
  std::cout << "average = " << avg << "\n";

  return 0;
}
