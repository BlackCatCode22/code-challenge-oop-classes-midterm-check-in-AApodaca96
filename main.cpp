#include <iostream>
#include <list>
#include <vector>
using namespace std;

// Create Animal Class (outside of main)
class Animal {
private:
  string name = "";
  string species = "";

public:
  static int numOfAnimals;

  Animal(string theName, string theSpecies) {
    name = theName;
    species = theSpecies;
    numOfAnimals++;
  }

  string getAnimalName() {
    return name;
  }

  string getAnimalSpecies() {
    return species;
  }

};

int Animal::numOfAnimals = 0;

class Hyena : public Animal {

};

int main() {

  cout << "Welcome to Angelo's Midterm Check-In!\n" << endl;

  cout << "The number of animals is: " << Animal::numOfAnimals << endl;

  // Create an animal object
  Animal myNewAnimal01("this is the name", "and species");

  // Create another animal object
  Animal myNewAnimal02("this is the 2nd name", "and 2nd species");

  cout << "After creating our animals, we have: " << Animal::numOfAnimals << " animals!" << endl;

  // Examine the public members
  cout << "The name of the new animal is: " << myNewAnimal01.getAnimalName() << endl;
  cout << "The species of the new animal is: " << myNewAnimal01.getAnimalSpecies() << endl;

  cout << "The name of the new animal is: " << myNewAnimal02.getAnimalName() << endl;
  cout << "The species of the new animal is: " << myNewAnimal02.getAnimalSpecies() << endl;

  Animal::numOfAnimals += 5;

  cout << "The final number of animals is: " << Animal::numOfAnimals << endl;

  return 0;
}
