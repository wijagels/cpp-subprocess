#include <iostream>
#include "../subprocess.hpp"

using namespace subprocess;

int main() {
  auto buf = check_output({"head", "-c", "16385", "/dev/zero"});
  assert(buf.buf.size() == 16385);
}
