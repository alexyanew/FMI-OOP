//������������� ���� , �� �� �� ��������� �� ����������� ���������
#pragma once 

//��� ��� - ����� �������������� ��� ����� - ���������� �� � � ���������� �� �
struct Point{

	int x;
	int y;

};


//������� ����� ���� �� ��������� ���� �����, ���������� ,�� ���
//����������� �� ��������� � ������������ , ������ ����� �� �������� �� ������������ � ��������� �����,
//� �� � ������,����� ��� ������ ���� ��������� �� ���������
void ReadPnt(Point&);

//��������� �� ������ ������������ �� ������ �����
//��� ����� �� ���������� � ���������� , ������ ���� �� ��������� ����� �����
void PrintPnt(const Point&);

//����� ������������ �� ����� �� (0,0)
double PntToBegDist(const Point&);

//����� ������������ �� ���� ����� �� �����
double PntToPntDist(const Point&, const Point&);

//�������� ����� �� ����� � ������� ������
//����� ������� �� ������� ��� -����� �� (0,0)
//����� -1 ��� ��������� ���������
int ClosestPoint(Point*, int);




