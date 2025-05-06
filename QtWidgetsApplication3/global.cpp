#include "global.h"

int stationcnt = -1;
int real_zone;
int balance;
int ride_cnt = 0;
int num_stations = 0;
int graph[MAX][MAX] = {};
int num_of_subsc;
int kit_kat_index, switching_index;
int arr_sub_insights[1000] = {};

short indexofuser, number_of_users_in_array;
short hist_rides = 0;

bool DesireToCreateAcc = true;
bool sign = false;
bool realadmin_by_keypass = false;

string name;
string password;
string current_user_id;
