#include <iostream>
#include "Job.h"
using namespace std;

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
}
