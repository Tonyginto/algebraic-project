// stdafx.h: включаемый файл для стандартных системных включаемых файлов
// или включаемых файлов для конкретного проекта, которые часто используются, но
// не часто изменяются
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

// функции задающие параметры
void SetParams(int ln, int dn); // задаёт l и d
void SetS(int sn); // задаёт s - номер блока
// функции выводящие значения параметров указанных в названии функции
int vOut();
int kOut();
int nOut();
int lOut();
int dOut();
string fOut();

// функции задают запрещённые связи
bool SetLK(int inlk); // запрещённые ключи
bool SetLB(int inlb); // запрещённые блоки
bool SetLBK(int inlb, int inlk); // запрещённые пары блок-ключ
bool SetLBB(int inlb1, int inlb2); // запрещённые пары блок-блок

// удаляет заданные запрещённые связи
void DelLK(int inlk);
void DelLB(int inlb);
void DelLBK(int inlk, int inlb);
void DelLBB(int inlb1, int inlb2);

// удаляет всё запрещённые связи
void ClearLK();
void ClearLB();
void ClearLBK();
void ClearLBB();

// выводит запрещённые связи
string ShowLK();
string ShowLB();
string ShowLBK();
string ShowLBB();

// Базовые функции для построения геометрий
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

// Базовые функции для построения дуальных геометрий
Integer newelement(Integer r, Integer s);
vector<Integer> NumsOfBlocksWithBas(Integer el);
vector<Integer> InterOfTwoBasEl(Integer el1, Integer el2);
Integer Predic(PolynomGF2_m_4 el, Integer b1, Integer b2);
vector<Integer> NotZero(Integer b1, Integer b2);
//

// Функции построения блоков геометрий и плоскостей
vector<Integer> ProjectivePlaneBlokCreation();
vector<Integer> DualProjectivePlaneBlokCreation();
vector<Integer> ProjectiveGeometryBlokCreation();
vector<Integer> DualProjectiveGeometryBlokCreation();
// Функции вызывающие функции плоскостей и геометрий в числовой нотации
vector<Integer> AcicleBlok();
vector<Integer> DualAcicleBlok();
// Функции вызывающие функции плоскостей и геометрий в алгебраической нотации
vector<string> PolAcicleBlok();
vector<string> PolDualAcicleBlok();
//

// Функции для поиска связей между блоками
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
// TODO: Установите здесь ссылки на дополнительные заголовки, требующиеся для программы
