#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

double grade_weight(string grade) {
	double weight = 0;
	if (grade == "A+") {
		weight = 4.5;
	}
	else if (grade == "A0") {
		weight = 4;
	}
	else if (grade == "B+") {
		weight = 3.5;
	}
	else if (grade == "B0") {
		weight = 3;
	}
	else if (grade == "C+") {
		weight = 2.5;
	}
	else if (grade == "C0") {
		weight = 2;
	}
	else if (grade == "D+") {
		weight = 1.5;
	}
	else if (grade == "D0") {
		weight = 1;
	}
	else if (grade == "F") {
		weight = 0;
	}

	return weight;
}

int main() {
	freopen("./resources/2/5000/25206.txt", "r", stdin);
	cin.tie(NULL), ios::sync_with_stdio(false);
	string title, grade;
	double credit;
	int all = 0;
	double sum = 0;
	while (cin >> title >> credit >> grade) {
		if (grade == "P") continue;
		sum += credit * grade_weight(grade);
		all += (int)credit;
	}
	
	cout << sum / all << '\n';

	return 0;
}


/*

https://www.acmicpc.net/problem/25206

���� ������ ����� ����
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 �� 	1024 MB	18471	8636	7721	48.238 %
����

���ϴ��б� ��ǻ�Ͱ��а��� �����ϱ� ���ؼ���, ���������� 3.3 �̻��̰ų� ������縦 ����ؾ� �Ѵ�.�׷��� �ƻԽ�, ġ���̴� �����ϰ� ������縦 �������� �ʾҴٴ� ����� ���޾Ҵ�!

ġ������ ���������� ������ִ� ���α׷��� �ۼ��غ���.

���������� ��������(���� �� ��������)�� ���� ������ �������� ���� ���̴�.

���ϴ��б� ��ǻ�Ͱ��а��� ��޿� ���� ���������� ���� ǥ�� ����.
A + 4.5
A0 	4.0
B + 3.5
B0 	3.0
C + 2.5
C0 	2.0
D + 1.5
D0 	1.0
F 	0.0

P / F ������ ��� ����� P�Ǵ� F�� ǥ�õǴµ�, ����� P�� ������ ��꿡�� �����ؾ� �Ѵ�.

���� ġ���̴� ������ ������ �� ������ ?
�Է�

20�ٿ� ���� ġ���̰� ������ ���������� �����, ����, ����� �������� ���еǾ� �־�����.
���

ġ������ ���������� ����Ѵ�.

������� ������� �Ǵ� ��������

\(10 ^ {-4}\) �����̸� �������� �����Ѵ�.
����

1 �� ������� ���� �� 50
������� ���ĺ� ��ҹ��� �Ǵ� ���ڷθ� �̷���� ������, ���� ���� �־�����.�Է����� �־����� ��� ������� ���� �ٸ���.
������ 1.0, 2.0, 3.0, 4.0�� �ϳ��̴�.
����� A + , A0, B + , B0, C + , C0, D + , D0, F, P�� �ϳ��̴�.
��� �� ������ ����� P�� �ƴ��� ����ȴ�.

���� �Է� 1

ObjectOrientedProgramming1 3.0 A +
IntroductiontoComputerEngineering 3.0 A +
ObjectOrientedProgramming2 3.0 A0
CreativeComputerEngineeringDesign 3.0 A +
AssemblyLanguage 3.0 A +
InternetProgramming 3.0 B0
ApplicationProgramminginJava 3.0 A0
SystemProgramming 3.0 B0
OperatingSystem 3.0 B0
WirelessCommunicationsandNetworking 3.0 C +
LogicCircuits 3.0 B0
DataStructure 4.0 A +
MicroprocessorApplication 3.0 B +
EmbeddedSoftware 3.0 C0
ComputerSecurity 3.0 D +
Database 3.0 C +
Algorithm 3.0 B0
CapstoneDesigninCSE 3.0 B +
CompilerDesign 3.0 D0
ProblemSolving 4.0 P

���� ��� 1

3.284483

���� �Է� 2

BruteForce 3.0 F
Greedy 1.0 F
DivideandConquer 2.0 F
DynamicProgramming 3.0 F
DepthFirstSearch 4.0 F
BreadthFirstSearch 3.0 F
ShortestPath 4.0 F
DisjointSet 2.0 F
MinimumSpanningTree 2.0 F
TopologicalSorting 1.0 F
LeastCommonAncestor 2.0 F
SegmentTree 4.0 F
EulerTourTechnique 3.0 F
StronglyConnectedComponent 2.0 F
BipartiteMatching 2.0 F
MaximumFlowProblem 3.0 F
SuffixArray 1.0 F
HeavyLightDecomposition 4.0 F
CentroidDecomposition 3.0 F
SplayTree 1.0 F

���� ��� 2

0.000000

��Ʈ

���� 1�� ġ������ ���� �������� �����̴�.
��ó

University > ���ϴ��б� > 2022 ���ϴ��б� ���α׷��� ������ȸ(IUPC) B��

������ �˼��� ��� : 39dll, gumgood, jh05013, jhnah917, ruz, yooshnn, yuja
������ ���� ��� : wjdclgns12

�˰��� �з�

����
����
���ڿ�

�޸�

*/