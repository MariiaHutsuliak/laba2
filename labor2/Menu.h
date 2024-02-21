#ifndef LABOR2_MENU_H
#define LABOR2_MENU_H

#include <vector>
#include <string>
using namespace std;

class Menu {

private:
    vector <string>  appetizers;
    vector <string>  mainCourses;
    vector <string> desserts;

public:
    void addAppetizer(string appetizer);
    void addMainCourses(string mainCourse);
    void addDessert(string dessert);

    void displayMenu();
    int getChoice (int categorySize);

};


#endif //LABOR2_MENU_H
