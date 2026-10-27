#include <iostream>

// Lab 9 — Jaylen Chae
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.
using std::cout;
using std::endl;
// TODO: double average(const int a[], int n); (Done)
// TODO: void printSummary(double avg); (Done)
double average(const int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; ++i) sum += a[i];
  return sum * 1.0 / n;
  }  
void printSummary(double avg){
  cout << "Average: " << avg << endl;
}
int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  double avg = average(scores, N);
  printSummary(avg);
  // TODO: double avg = average(scores, N); (Done)
  // TODO: printSummary(avg); (Done)
  return 0;
}
