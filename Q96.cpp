//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Network {
private:
    float packetLossRate; // e.g., 0.1 for 10% loss

public:
    Network(float lossRate = 0.1) : packetLossRate(lossRate) {
        srand(time(0));
    }

    void sendPacket(const string& packet) {
        float r = static_cast<float>(rand()) / RAND_MAX;
        if (r < packetLossRate) {
            cout << "Packet lost: " << packet << endl;
        } else {
            cout << "Packet sent successfully: " << packet << endl;
        }
    }

    void sendBatch(const vector<string>& packets) {
        for (const auto& packet : packets) {
            sendPacket(packet);
        }
    }
};
 