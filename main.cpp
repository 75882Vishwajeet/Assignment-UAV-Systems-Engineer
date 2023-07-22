#include <cpp_api/navigation_bridge.h>
#include <iostream>
#include <ros/package.h>

int main(int argc, char *argv[])
{
  if (argc < 2) {
    std::cout << "\nThis app expects arguments\n";
    exit(0);
  }
  Navigation nav;

  nav.connect("127.0.0.1", 9000);

  nav.take_off(10.0);
  nav.position_set(0, 0, 10);
  nav.position_set((float)10.0, 0, 10);
  nav.position_set((float)10.0 / 2, (float)10.0 * 0.866, 10);

  nav.land(false);

  nav.disconnect();
}