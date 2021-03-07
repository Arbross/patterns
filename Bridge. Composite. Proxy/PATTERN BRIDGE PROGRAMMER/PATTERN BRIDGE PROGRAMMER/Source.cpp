#include <iostream>
#include "Job.h"
using namespace std;

int count()
{
	int new_tmp = 1000 * 50 / 100;
	return new_tmp;
}

/*
�) �������� �������� ��� ���������� ������� ����� ����������. ��������� ���� ��������� �� ������ ��(�) ���� �����������  ������.
��������� ���� ���������� �������� �� ����� ��� �������������(�++, C#  �� ��.). ����� ������ ������ ���������� ������� �� ���� �������������.
��������� ������ ��������� �� ��������� ���� ������� �������. 
*/

int main()
{
	ILanguage* csh = new CSharp();
	ILanguage* java = new Java();

	Programmer* placeJob = new PlaceJob(50, csh);
	cout << placeJob->count(4) << endl;
	placeJob->print();
	cout << count() << endl;
}
