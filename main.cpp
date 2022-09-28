#include <iostream>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

// states: empty, dead, alive
enum State {
	Empty,
	Dead,
	Alive
};

void displayGrid(vector< vector<State> > grid) {
	for (int x = 0; x < grid.size(); x++) {
		for (int y = 0; y < grid[0].size(); y++) {
			if (grid[x][y] == Empty) {
				cout << "0 ";
			}
		}
		cout << endl;
		
	}
	cout << "----------------------------" << endl;
}

bool checkUnderpopulation() {
	// less than two neighbors, dies

}

bool checkSurvival() {
	// two or three neighbors, survives

}

bool checkOverpopulation() {
	// more than 3 neighbors, dies

}

bool checkReproduction() {
	// dead cell has exactly 3 neighbors, comes alive

}

bool checkRules() {

	// Rule 1: Underpopulation

	// Rule 2: Survival

	// Rule 3: Overpopulation

	// Rule 4: Reproduction


}

void mainLoop() {
	vector< vector<State> > grid(10, vector<State>(10, Empty));


	while(1) {
		displayGrid(grid);
		chrono::seconds dura(5);
		this_thread::sleep_for(dura);
	}

}

int main() {

	mainLoop();

	return 0;
}