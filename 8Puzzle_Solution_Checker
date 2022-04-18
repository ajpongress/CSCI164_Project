#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

// Globalspace globals
int zero_index = 0;
char original, target;

// Print the current state of the puzzle
void print_puzzle_state(string s) {

	cout << s.at(0) << "  " << s.at(1) << "  " << s.at(2) << endl;
	cout << endl;
	cout << s.at(3) << "  " << s.at(4) << "  " << s.at(5) << endl;
	cout << endl;
	cout << s.at(6) << "  " << s.at(7) << "  " << s.at(8) << endl;
	cout << "--------" << endl << endl;
}

// Find index of the "0" block
int find_zero_index(string s) {

	for (int i = 0; i < s.size(); i++) {

		if (s.at(i) == '0') return i;
	}
}

// Move the "0" block
void move_the0(string& s, string command) {

	zero_index = find_zero_index(s);

	// Index position 0
	if (zero_index == 0 && command == "u") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 0 && command == "d") {

		original = s.at(0);
		target = s.at(3);
		s.at(0) = target;
		s.at(3) = original;
	}
	if (zero_index == 0 && command == "l") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 0 && command == "r") {

		original = s.at(0);
		target = s.at(1);
		s.at(0) = target;
		s.at(1) = original;
	}

	// Index position 1
	if (zero_index == 1 && command == "u") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 1 && command == "d") {

		original = s.at(1);
		target = s.at(4);
		s.at(1) = target;
		s.at(4) = original;
	}
	if (zero_index == 1 && command == "l") {

		original = s.at(1);
		target = s.at(0);
		s.at(1) = target;
		s.at(0) = original;
	}
	if (zero_index == 1 && command == "r") {

		original = s.at(1);
		target = s.at(2);
		s.at(1) = target;
		s.at(2) = original;
	}

	// Index position 2
	if (zero_index == 2 && command == "u") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 2 && command == "d") {

		original = s.at(2);
		target = s.at(5);
		s.at(2) = target;
		s.at(5) = original;
	}
	if (zero_index == 2 && command == "l") {

		original = s.at(2);
		target = s.at(1);
		s.at(2) = target;
		s.at(1) = original;
	}
	if (zero_index == 2 && command == "r") { cout << "Invalid move" << endl << endl; }

	// Index position 3
	if (zero_index == 3 && command == "u") {

		original = s.at(3);
		target = s.at(0);
		s.at(3) = target;
		s.at(0) = original;
	}
	if (zero_index == 3 && command == "d") {

		original = s.at(3);
		target = s.at(6);
		s.at(3) = target;
		s.at(6) = original;
	}
	if (zero_index == 3 && command == "l") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 3 && command == "r") {

		original = s.at(3);
		target = s.at(4);
		s.at(3) = target;
		s.at(4) = original;
	}

	// Index position 4
	if (zero_index == 4 && command == "u") {

		original = s.at(4);
		target = s.at(1);
		s.at(4) = target;
		s.at(1) = original;
	}
	if (zero_index == 4 && command == "d") {

		original = s.at(4);
		target = s.at(7);
		s.at(4) = target;
		s.at(7) = original;
	}
	if (zero_index == 4 && command == "l") {

		original = s.at(4);
		target = s.at(3);
		s.at(4) = target;
		s.at(3) = original;
	}
	if (zero_index == 4 && command == "r") {

		original = s.at(4);
		target = s.at(5);
		s.at(4) = target;
		s.at(5) = original;
	}

	// Index position 5
	if (zero_index == 5 && command == "u") {

		original = s.at(5);
		target = s.at(2);
		s.at(5) = target;
		s.at(2) = original;
	}
	if (zero_index == 5 && command == "d") {

		original = s.at(5);
		target = s.at(8);
		s.at(5) = target;
		s.at(8) = original;
	}
	if (zero_index == 5 && command == "l") {

		original = s.at(5);
		target = s.at(4);
		s.at(5) = target;
		s.at(4) = original;
	}
	if (zero_index == 5 && command == "r") { cout << "Invalid move" << endl << endl; }

	// Index position 6
	if (zero_index == 6 && command == "u") {

		original = s.at(6);
		target = s.at(3);
		s.at(6) = target;
		s.at(3) = original;
	}
	if (zero_index == 6 && command == "d") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 6 && command == "l") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 6 && command == "r") {

		original = s.at(6);
		target = s.at(7);
		s.at(6) = target;
		s.at(7) = original;
	}

	// Index position 7
	if (zero_index == 7 && command == "u") {

		original = s.at(7);
		target = s.at(4);
		s.at(7) = target;
		s.at(4) = original;
	}
	if (zero_index == 7 && command == "d") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 7 && command == "l") {

		original = s.at(7);
		target = s.at(6);
		s.at(7) = target;
		s.at(6) = original;
	}
	if (zero_index == 7 && command == "r") {

		original = s.at(7);
		target = s.at(8);
		s.at(7) = target;
		s.at(8) = original;
	}

	// Index position 8
	if (zero_index == 8 && command == "u") {

		original = s.at(8);
		target = s.at(5);
		s.at(8) = target;
		s.at(5) = original;
	}
	if (zero_index == 8 && command == "d") { cout << "Invalid move" << endl << endl; }
	if (zero_index == 8 && command == "l") {

		original = s.at(8);
		target = s.at(7);
		s.at(8) = target;
		s.at(7) = original;
	}
	if (zero_index == 8 && command == "r") { cout << "Invalid move" << endl << endl; }
}

string char_to_string(string& solution, int iterator) {

	char c = solution.at(iterator);
	string s(1, c);
	return s;
}

void compareStrings(string s1, string s2) {

	// comparing both using inbuilt function
	int x = s1.compare(s2);

	if (x != 0) {
		cout << s1
			<< " is not equal to "
			<< s2 << endl;
		if (x > 0)
			cout << s1
			<< " is greater than "
			<< s2 << endl;
		else
			cout << s2
			<< " is greater than "
			<< s1 << endl;
	}
	else
		cout << s1 << " is equal to " << s2 << endl;
}

void solution_checker(string &problem, string &solution, string goalstate) {
//void solution_checker(string& problem, string& solution) {

	for (int i = 0; i < solution.size(); i++) {

		cout << "Applying move - \"" << solution.at(i) << "\"" << endl << endl;
		move_the0(problem, char_to_string(solution, i));
		print_puzzle_state(problem);
	}

	cout << "FINISHED! Checking if goal state = finished state." << endl;

	compareStrings(problem, goalstate);

	/*
	if (goalstate == problem) {

		cout << "States MATCH!";
	}

	if (goalstate != problem) {

		cout << "States do NOT match!";
	}
	*/
	cout << endl << endl;
}

void print_solution(string& solution) {

	for (int i = 0; i < solution.size(); i++) {

		cout << solution.at(i);
	}
}

string reverse_string(string& s) {

	reverse(s.begin(), s.end());
	return s;
}

// ======================================== MAIN ===========================================
int main() {


	string goalstate_8 = "123456780";

	// 8-Puzzle Problems
	string prob_1 = "160273485";
	string prob_2 = "462301587";
	string prob_3 = "821574360";
	string prob_4 = "840156372";
	string prob_5 = "530478126";
	string prob_6 = "068314257";
	string prob_7 = "453207186";
	string prob_8 = "128307645";
	string prob_9 = "035684712";
	string prob_10 = "684317025";
	string prob_11 = "028514637";
	string prob_12 = "618273540";
	string prob_13 = "042385671";
	string prob_14 = "420385716";
	string prob_15 = "054672813";
	string prob_16 = "314572680";
	string prob_17 = "637218045";
	string prob_18 = "430621875";
	string prob_19 = "158274036";
	string prob_20 = "130458726";
/*
	string astardeep_solution_1 = "ddluurdlldrruuldrd";
	string astardeep_solution_2 = "ldrurdluldruurdluldrruldlu";
	string astardeep_solution_3 = "lddluurdrulddluurdrulddluu";
	string astardeep_solution_4 = "ddllurddurrdurulddluu";
	string astardeep_solution_5 = "ldrdurdluruldrdlurul";
	string astardeep_solution_6 = "rrdulddulldrrdurrulldrdluu";
	string astardeep_solution_7 = "rulldrurddurul";
	string astardeep_solution_8 = "dduldrrdruurdlulddruurdlul";
	string astardeep_solution_9 = "";
	string astardeep_solution_10 = "uldrdurrulldrrdlurrull";
	string astardeep_solution_11 = "rrdddluurrdllurddluurrdluldrdluu";
	string astardeep_solution_12 = "";
	string astardeep_solution_13 = "";
	string astardeep_solution_14 = "";
	string astardeep_solution_15 = "";
	string astardeep_solution_16 = "";
	string astardeep_solution_17 = "urdluldrdurruldrdurull";
	string astardeep_solution_18 = "ldldllurrddrurull";
	string astardeep_solution_19 = "drduurdrulldrrduul";
	string astardeep_solution_20 = "ddrduldrdulu";
*/

	string solution = "ldrdurdluruldrdlurul";

	string reversed_solution = reverse_string(solution);

	// Automated Solution Testing ===========================================
	cout << endl << "Start state:" << endl;
	
	print_puzzle_state(prob_5);

	cout << "Checking solution - ";

	print_solution(reversed_solution);

	cout << endl << endl;

	solution_checker(prob_5, reversed_solution, goalstate_8);
	// =======================================================================





	// Loop Manual Input Testing ===========================
/*
	string command;

	while (true) {

		print_puzzle_state(prob_1);

		cout << "Input command: ";
		cin >> command;
		if (command == "q") exit(EXIT_SUCCESS);

		move_the0(prob_1, command);

	}
*/
// =========================================





}
