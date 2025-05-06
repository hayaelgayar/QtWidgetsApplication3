#pragma once
#include"dependence.h"
#include"global.h"

struct RideInfo {
	string id;
	string entryStation;
	string ExitStation;
	string Date;
	int RideFare;
}rides[MAX_rides];


struct user_subscriptions {
	string subscription_type;
	string expiry;
	string activation;
	string plan_type;
	int Num_trips;
	int duriation_plan_type;
	int remaining_trips;
	string wallet_name;
	int balancew;
	int zonePrice;
	int zone;
	char fixed;
};


struct wallet {
	int card_balance;
	int fund_multiple;
	int zonesPrice[30] = { 0 };
	int zone_num;
};


struct info {
	int duration;
	int no_of_trips;
	int zonesPrice[30] = { 0 };
	int zone_num;


};

struct plan {
	string plan_name;
	string notes;
	char fixed;
	info month_sub[10];
	info year_sub[10];
	int month_count = 0;
	int year_count = 0;
	wallet wallet_sub;

}arr_subscription[20];

struct st_contactdetails {
	string email;
};

struct st_of_users {
	string username;
	string pass;
	string id;
	long long balance;
	user_subscriptions sub;
	bool admin_role;
	st_contactdetails contactdet;
	string complaints;
}newacc;
st_of_users arr_users[usersnum];

struct Station {
	string name;
	int number;
	int line;
	RideInfo rides;
};

Station allStations[MAX_STATIONS_PER_LINE][NUM_LINES];
