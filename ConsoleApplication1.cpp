#include <iostream>
#include <string>

using namespace std;

int main()
{
    string female_hair_cut, haircut, female_newlook, male_hair_cut, male_newlook;
    cout << "male or female: ";
    cin >> female_hair_cut;
    if (female_hair_cut == "female")
    {
        cout << "superhero or super villain: ";
        cin >> haircut;
        if (haircut == "superhero") {

            cout << "Anime or sitcome: ";
            cin >> female_newlook;
            if (female_newlook == "sitcome")
                cout << "you should get a bob";
            else
                cout << "you should go with bangs";
        }
        else

            cout << "you should get a mohawk";
    }
    else
    {
        cout << "superhero or super villain: ";
        cin >> male_hair_cut;
        if (male_hair_cut == "superhero")
        {
            cout << "steak or sushi: ";
            cin >> male_newlook;
            if (male_newlook == "steak")
                cout << "you should get a flat top";
            else
                cout << "you should get a pompadour";
        }
        else
            cout << "you should get a mohawk";
    }
}