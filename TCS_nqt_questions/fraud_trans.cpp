 //  You are given N bank transaction. Each tranction has: Sender, Receiver, and Amount are same and Timestamp
// A transition is condidered fraud if:
// Sender, Receiver, and Amount are same
// Timestamp difference <= 60 seconds
// find and print all such graud transactions.
// ex: ANU JON 200.50 1000
// ANU JON 200.50 1050
// RAM SAM 300.00 2000
// ANU JON 200.50 2000
// RAM SAM 300.00 2050



// Brute force approach Time; O(n^2);
// #include <iostream>
// #include <vector>
// using namespace std;

// struct Transaction
// {
//     string sender;
//     string receiver;
//     double amount;
//     int timestamp;
// };

// int main()
// {
//     vector<Transaction> transactions =
//     {
//         {"ANU", "JON", 200.50, 1000},
//         {"ANU", "JON", 200.50, 1050},
//         {"RAM", "SAM", 300.00, 2000},
//         {"ANU", "JON", 200.50, 2000},
//         {"RAM", "SAM", 300.00, 2050}
//     };

//     for(int i = 0; i < transactions.size(); i++)
//     {
//         for(int j = i + 1; j < transactions.size(); j++)
//         {
//             if(transactions[i].sender == transactions[j].sender &&
//                transactions[i].receiver == transactions[j].receiver &&
//                transactions[i].amount == transactions[j].amount &&
//                abs(transactions[i].timestamp - transactions[j].timestamp) <= 60)
//             {
//                 cout << "Fraud Transaction:\n";
//                 cout << transactions[j].sender << " "
//                      << transactions[j].receiver << " "
//                      << transactions[j].amount << " "
//                      << transactions[j].timestamp << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
using namespace std;

struct Transaction {
    string sender;
    string receiver;
    string amount;
    int timestamp;
};

int main() {

    vector<Transaction> transactions = {
        {"ANU","JON","200.50",1000},
        {"ANU","JON","200.50",1050},
        {"RAM","SAM","300.00",2000},
        {"ANU","JON","200.50",2000},
        {"RAM","SAM","300.00",2050}
    };

    unordered_map<string, vector<int>> mp;

    for(auto &t : transactions){

        string key = t.sender + "|" + t.receiver + "|" + t.amount;

        bool fraud = false;

        if(mp.count(key)){

            for(int oldTime : mp[key]){

                if(abs(t.timestamp-oldTime)<=60){
                    fraud=true;
                    break;
                }

            }

        }

        if(fraud){

            cout<<"Fraud Transaction: "
                <<t.sender<<" "
                <<t.receiver<<" "
                <<t.amount<<" "
                <<t.timestamp<<endl;

        }

        mp[key].push_back(t.timestamp);

    }

}