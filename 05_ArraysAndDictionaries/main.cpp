#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int age = 21;

    // Arrays - Their size is not mutable

    // int tickets[] = { 42, 4, 5, 6, 7, 8, 9, 10 };

    int tickets[8];
    int tickets_len = sizeof(tickets)/sizeof(tickets[0]);

    tickets[0] = 42;

    for(int i = 1; i < tickets_len; i++)
        tickets[i] = i + 3;

    for(int i = 0; i < tickets_len; i++)
        cout << "This ticket number is " << tickets[i] << " at index " << i << endl;

    cout << tickets_len << endl;

    // Vectors - mutable thanks to the fact that they use heap memory
    
    vector<string> froyo_toppings;

    cout << "Enter 3 toppings to put on your frozen yougert: \n";

    for(int i = 0; i < 3; i++) {
        string froyo_topping;
        cin >> froyo_topping;
        froyo_toppings.push_back(froyo_topping);
    }

    cout << "One froyo with ";

    for(int i = 0; i < froyo_toppings.size(); i++) 
        cout << froyo_toppings[i] << " ";

    cout << "coming right up!\n";

    // Dictionaries: unordered maps
    /*   some_map looks kinda like this:

        {
            "key": "value",
            "name": "jackson",
            "species": "human"
        }

        then get access to a value by using a key
        some_map["name"] => "jackson"
    */

   unordered_map<string, int> people;

   people["jackson"] = 22;
   people["kim"] = 17;
   people["james"] = 20;
   people["janette"] = 22;

   cout << "we have " << people.size() << " people in our unordered map" << endl;
   cout << "James is " << people.at("james") << " years old.\n";

    return 0;
}