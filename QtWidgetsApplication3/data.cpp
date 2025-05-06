
#include "data.h"
using namespace std;

void ReadFromFile() {
    ifstream inputfromfile("data of users.txt");
    if (!inputfromfile.is_open()) {
        cerr << "Error: Cannot open 'data of users.txt'" << endl;
        return;
    }

    inputfromfile.ignore(1000, '\n'); // Skip header

    inputfromfile >> number_of_users_in_array;

    for (int i = 0; i < number_of_users_in_array; ++i) {
        inputfromfile >> arr_users[i].username
            >> arr_users[i].id
            >> arr_users[i].admin_role
            >> arr_users[i].sub.fixed;

        if (arr_users[i].sub.fixed == 'y') {
            inputfromfile >> arr_users[i].sub.subscription_type
                >> arr_users[i].sub.expiry
                >> arr_users[i].sub.activation
                >> arr_users[i].sub.plan_type
                >> arr_users[i].sub.Num_trips
                >> arr_users[i].sub.duriation_plan_type
                >> arr_users[i].sub.remaining_trips
                >> arr_users[i].sub.zonePrice
                >> arr_users[i].sub.zone;
        }
        else if (arr_users[i].sub.fixed == 'n') {
            inputfromfile >> arr_users[i].sub.subscription_type
                >> arr_users[i].sub.activation
                >> arr_users[i].sub.balancew;
        }

        inputfromfile >> arr_users[i].balance
            >> arr_users[i].pass
            >> arr_users[i].contactdet.email;
    }

    inputfromfile.close();

    // Now read complaints
    ifstream inputcomplaint("complains.txt");
    if (!inputcomplaint.is_open()) {
        cerr << "Error: Cannot open 'complains.txt'" << endl;
        return;
    }

    inputcomplaint.ignore(1000, '\n'); // Skip header

    for (int i = 0; i < number_of_users_in_array; ++i) {
        string skip1, skip2;
        inputcomplaint >> skip1 >> skip2;
        inputcomplaint.ignore(); // Ignore the space or newline
        getline(inputcomplaint, arr_users[i].complaints);
    }

    inputcomplaint.close();
}
