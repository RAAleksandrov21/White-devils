#pragma once
#include <iostream>
#include <vector>
using namespace std;

void welcome();
string FindAnswer(int len);
void DrawHangman(int misses);
void Status(vector<char> incorrect, string answer);
void End(string answer, string codeword);
