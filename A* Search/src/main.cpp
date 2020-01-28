#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;
using std::abs;

enum class State {kEmpty, kObstacle, kClosed};


vector<State> ParseLine(string line) {
  istringstream sline(line);
  int n;
  char c;
  vector<State> row;
  while (sline >> n >> c && c == ',') {
    if (n == 0) {
      row.push_back(State::kEmpty);
    } else {
      row.push_back(State::kObstacle);
    }
  }
  return row;
}

vector<vector<State>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<State>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<State> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;
}

// TODO: Write function to compare the f-value of two nodes here
bool Compare(const vector<int> a, const vector<int> b) {
  int f1 = a[2] + a[3];
  int f2 = b[2] + b[3];
  return f1 > f2;
}

// Calculate the manhattan distance
int Heuristic(int x1, int y1, int x2, int y2) {
  return abs(x2 - x1) + abs(y2 - y1);
}

// TODO: Write the AddToOpen function here.
void addToOpen(int x, int y, int g, int h, vector<vector<int>> &open_list, vector<vector<State>> &grid) {
  open_list.pushback(vector<int>{x, y, g, h});
  grid[x][y] = State::kClosed;
}

// TODO: Write the Search function stub here.
vector<vector<State>> Search(vector<vector<State>> grid, int start[2], int goal[2]) {
  // Create the vector of open nodes.
  vector<vector<int>> open {};

  // TODO: Initialize the starting node.
  int x = start[0];
  int y = start[1];
  int g = 0;
  int h = Heuristic(x, y, goal[0], goal[1]);

  // TODO: Use AddToOpen to add the starting node to the open vector.
  addToOpen(x, y, g, h, open, grid);

  cout << "No path found!" << "\n";
  return vector<vector<State>> {};
}

string CellString(State cell) {
  switch(cell) {
    case State::kObstacle: return "⛰️   ";
    default: return "0   ";
  }
}

void PrintBoard(const vector<vector<State>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << CellString(board[i][j]);
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Declare "init" and "goal" arrays with values {0, 0} and {4, 5} respectively.
  int init[2]{0, 0};
  int goal[2]{4, 5};
  auto board = ReadBoardFile("1.board");
  // TODO: Call Search with "board", "init", and "goal". Store the results in the variable "solution".
  auto solution = Search(board, init, goal);

  // TODO: Change the following line to pass "solution" to PrintBoard.
  PrintBoard(solution);
}
