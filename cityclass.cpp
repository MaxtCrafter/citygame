#include <iostream>
#include <string>
#include <vector>

class Building {
public:
    Building(std::string name, int level) : name(name), level(level) {}

    void upgrade() {
        level++;
    }

    std::string getName() const {
        return name;
    }

    int getLevel() const {
        return level;
    }

private:
    std::string name;
    int level;
};

class City {
public:
    City(std::string name) : name(name) {}

    void addBuilding(const Building& building) {
        buildings.push_back(building);
    }

    void showBuildings() const {
        std::cout << "Buildings in " << name << ":\n";
        for (const auto& building : buildings) {
            std::cout << "- " << building.getName() << " (Level " << building.getLevel() << ")\n";
        }
    }

private:
    std::string name;
    std::vector<Building> buildings;
};
