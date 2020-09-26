#include <assert.h>
#include <cmath>

// TODO: Define PI

// TODO: Declare abstract class VehicleModel
  // TODO: Declare virtual function Move()

// TODO: Derive class ParticleModel from VehicleModel
  // TODO: Override the Move() function
  // TODO: Define x, y, and theta

// TODO: Derive class BicycleModel from ParticleModel
  // TODO: Override the Move() function
  // TODO: Define L

// TODO: Pass the tests
int main() {
  // Test function overriding
  ParticleModel particle;
  BicycleModel bicycle;
  particle.Move(10, PI / 9);
  bicycle.Move(10, PI / 9);
  assert(particle.x != bicycle.x);
  assert(particle.y != bicycle.y);
  assert(particle.theta != bicycle.theta);
}
