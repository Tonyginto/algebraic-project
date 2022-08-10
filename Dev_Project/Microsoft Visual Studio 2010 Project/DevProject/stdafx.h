// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <algorithm>
#include <iostream>
#include <conio.h>
#include <iostream>
#include "./AAF/AAL/Polynom.h"
#include "./AAF/AAL/PolynomGF2_mY_7.h"
#include "./AAF/AAL/Integer.h"
#include "./AAF/AAL/DecompositionManager.h"
#include <vector>

using namespace AAL;
using namespace std;

// ������� �������� ���������
void SetParams(int ln, int dn); // ����� l � d
void SetS(int sn); // ����� s - ����� �����
// ������� ��������� �������� ���������� ��������� � �������� �������
int vOut();
int kOut();
int nOut();
int lOut();
int dOut();
string fOut();

// ������� ������ ����������� �����
bool SetLK(int inlk); // ����������� �����
bool SetLB(int inlb); // ����������� �����
bool SetLBK(int inlb, int inlk); // ����������� ���� ����-����
bool SetLBB(int inlb1, int inlb2); // ����������� ���� ����-����

// ������� �������� ����������� �����
void DelLK(int inlk);
void DelLB(int inlb);
void DelLBK(int inlk, int inlb);
void DelLBB(int inlb1, int inlb2);

// ������� �� ����������� �����
void ClearLK();
void ClearLB();
void ClearLBK();
void ClearLBB();

// ������� ����������� �����
string ShowLK();
string ShowLB();
string ShowLBK();
string ShowLBB();

// ������� ������� ��� ���������� ���������
Polynom xPow(Integer i);
Integer ind(Polynom ell);
Integer Psi(PolynomGF2_m_4 el);
PolynomGF2_m_4 PsiInverse(Integer N);
PolynomGF2_m_4 Psi3Inverse(Integer N);
PolynomGF2_m_4 vectorsum(PolynomGF2_m_4 a, PolynomGF2_m_4 b);
PolynomGF2_m_4 vectorproduct(PolynomGF2_m_4 a, PolynomGF2_m_4 b);
PolynomGF2_m_4 vectorsub(PolynomGF2_m_4 a, PolynomGF2_m_4 b);
PolynomGF2_m_4 mulbyscalar(PolynomGF2_m_4 a, Polynom b);
//

// ������� ������� ��� ���������� �������� ���������
Integer newelement(Integer r, Integer s);
vector<Integer> NumsOfBlocksWithBas(Integer el);
vector<Integer> InterOfTwoBasEl(Integer el1, Integer el2);
Integer Predic(PolynomGF2_m_4 el, Integer b1, Integer b2);
vector<Integer> NotZero(Integer b1, Integer b2);
//

// ������� ���������� ������ ��������� � ����������
vector<Integer> ProjectivePlaneBlokCreation();
vector<Integer> DualProjectivePlaneBlokCreation();
vector<Integer> ProjectiveGeometryBlokCreation();
vector<Integer> DualProjectiveGeometryBlokCreation();
// ������� ���������� ������� ���������� � ��������� � �������� �������
vector<Integer> AcicleBlok();
vector<Integer> DualAcicleBlok();
// ������� ���������� ������� ���������� � ��������� � �������������� �������
vector<string> PolAcicleBlok();
vector<string> PolDualAcicleBlok();
//

// ������� ��� ������ ������ ����� �������
Integer id(Integer j);
bool kel(Integer kn);
bool bkel(Integer bn, Integer bk);
bool bbel(Integer bn, Integer bk);
bool blockexistence(Integer bn);
vector<Integer> psiinv(Integer n);
vector<Integer> dualhiinv(Integer n);
vector<Integer> cens(vector<Integer> arr, bool dual);
vector<Integer> Algoritm1(Integer j1, Integer j2);
vector<Integer> Algoritm2(Integer j1, Integer j2);
vector<vector<Integer>> Algoritm3(vector<Integer> j1, vector<Integer> j2);

bool IsIn(vector<Integer> v1);
//
// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������
