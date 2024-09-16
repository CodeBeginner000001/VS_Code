#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to find the minimum number of stops
int minStops(int numStations, vector<int>& stationDist, vector<int>& gasAvailable, int destinationDistance, int initialGas) {
    // Create a max-heap (priority queue) to store the available gasoline at passed stations
    priority_queue<int> pq;
    
    int currentFuel = initialGas;  // Start with the initial amount of fuel
    int stops = 0;                 // To count the number of stops made
    int currentPosition = 0;       // Start at home (distance = 0)
    
    // Add a virtual gas station at the destination to ensure we handle the final segment of the trip
    stationDist.push_back(destinationDistance);
    gasAvailable.push_back(0);  // No fuel available at the destination
    
    // Iterate through the stations and simulate the journey
    for (int i = 0; i <= numStations; i++) {
        int nextStationDist = stationDist[i];   // Distance of the next station
        
        // Calculate the distance to the next station
        int distanceToNextStation = nextStationDist - currentPosition;
        
        // While we don't have enough fuel to reach the next station
        while (currentFuel < distanceToNextStation) {
            if (pq.empty()) {
                // If no fuel is available and we can't reach the next station, return -1
                return -1;
            }
            // Stop at the station with the most available fuel (max-heap)
            currentFuel += pq.top();
            pq.pop();
            stops++;
        }
        
        // Update the current fuel and position after reaching the next station
        currentFuel -= distanceToNextStation;
        currentPosition = nextStationDist;
        
        // Add the available fuel at this station to the heap
        pq.push(gasAvailable[i]);
    }
    
    // If we made it to the destination, return the number of stops
    return stops;
}

int main() {
    int numStations;
    cin >> numStations;

    vector<int> stationDist(numStations);  // Distances of the gas stations
    
    // Input the distances of the gas stations
    for (int i = 0; i < numStations; i++) {
        cin >> stationDist[i];
    }
    int gasStation;
    cin>>gasStation;
    vector<int> gasAvailable(gasStation); // Fuel available at each station

    // Input the gasoline available at each station
    for (int i = 0; i < gasStation; i++) {
        cin >> gasAvailable[i];
    }
    
    int destinationDistance;
    cin >> destinationDistance;
    
    int initialGas;
    cin >> initialGas;
    
    // Call the function to calculate the minimum number of stops
    int result = minStops(numStations, stationDist, gasAvailable, destinationDistance, initialGas);
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
