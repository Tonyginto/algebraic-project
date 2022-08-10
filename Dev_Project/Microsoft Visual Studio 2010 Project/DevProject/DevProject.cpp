// DevProject.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

// Буферные переменные
Integer buf;
Polynom bf;

// Переменные определяющие проективную плоскость
Integer v, k;
Integer p, l, d, n;
Integer s; // Определяет номер блока
Polynom f("11");
Polynom x("01");

//
vector<Integer> Lkey, Lblock;
vector<vector<Integer>> Lblockkey, Lblockblock;

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

string fOut()
{
	return f.ToString();
}

int nOut()
{
	return atoi(n.ToString().c_str());
}

int kOut()
{
	return atoi(k.ToString().c_str());
}

int vOut()
{
	return atoi(v.ToString().c_str());
}

int lOut()
{
	return atoi(l.ToString().c_str());
}

int dOut()
{
	return atoi(d.ToString().c_str());
}

void SetS(int sn)
{
	s = sn;
	return;
}

void SetParams(int ln, int dn)
{
	p = 2; l = ln; d = dn;

	n = buf.Pow(p, l);

	Integer bbf;
	v = buf.Div(bbf.Pow(n, d + 1) - 1, n - 1);
	k = buf.Div(v - 1, n);

	if (l > 1)
	{
		f = bf.GenerateIrreduciblePrimitivity(3, 3, atoi(l.ToString().c_str()));
	}
	else
	{
		Polynom prtst("11");
		f = prtst;
	}
	return;
}

//////////////////////////////////////////////////////////////////////////

bool SetLK(int inlk)
{
	bool flag = false;
	if (find(Lkey.begin(), Lkey.end(), inlk) != Lkey.end())
	{
		flag = true;
	}
	else
	{
		Lkey.push_back(inlk);
	}
	return flag;
}

bool SetLB(int inlb)
{
	bool flag = false;
	if (find(Lblock.begin(), Lblock.end(), inlb) != Lblock.end())
	{
		flag = true;
	}
	else
	{
		Lblock.push_back(inlb);
	}
	return flag;
}

bool SetLBK(int inlb, int inlk)
{
	bool flag = false;
	vector<Integer> prom = { inlb, inlk };
	for (const auto& i : Lblockkey)
	{
		auto srch = search(i.begin(), i.end(), prom.begin(), prom.end());
		if (srch != i.end())
		{
			flag = true;
			break;
		}
	}
	if (!flag)
	{
		Lblockkey.push_back({ inlb , inlk });
	}
	return flag;
}

bool SetLBB(int inlb1, int inlb2)
{
	bool flag = false;
	vector<Integer> prom = { inlb1, inlb2 };
	for (const auto& i : Lblockblock)
	{
		auto srch = search(i.begin(), i.end(), prom.begin(), prom.end());
		if (srch != i.end())
		{
			flag = true;
			break;
		}
	}
	if (!flag)
	{
		Lblockblock.push_back({ inlb1 , inlb2 });
	}
	return flag;
}

//////////////////////////////////////////////////////////////////////////

void DelLK(int inlk)
{
	auto iter = find(Lkey.begin(), Lkey.end(), inlk);
	if (iter != Lkey.end())
	{
		Lkey.erase(iter);
	}
}

void DelLB(int inlb)
{
	auto iter = find(Lblock.begin(), Lblock.end(), inlb);
	if (iter != Lblock.end())
	{
		Lblock.erase(iter);
	}
}

void DelLBK(int inlk, int inlb)
{
	vector<Integer> prom = { inlb, inlk };
	int ind = 0;
	for (auto& i : Lblockkey)
	{
		auto srch = search(i.begin(), i.end(), prom.begin(), prom.end());
		if (srch != i.end())
		{
			Lblockkey.erase(Lblockkey.begin()+ind);
			break;
		}
		ind++;
	}
}

void DelLBB(int inlb1, int inlb2)
{
	vector<Integer> prom = { inlb1, inlb2 };
	int ind = 0;
	for (auto& i : Lblockblock)
	{
		auto srch = search(i.begin(), i.end(), prom.begin(), prom.end());
		if (srch != i.end())
		{
			Lblockblock.erase(Lblockblock.begin()+ind);
			break;
		}
		ind++;
	}
}

//////////////////////////////////////////////////////////////////////////

void ClearLK()
{
	Lkey.clear();
}

void ClearLB()
{
	Lblock.clear();
}

void ClearLBK()
{
	Lblockkey.clear();
}

void ClearLBB()
{
	Lblockblock.clear();
}

//////////////////////////////////////////////////////////////////////////

string ShowLK()
{
	string str = "[";
	int ln = Lkey.size();
	for (int i = 0; i < ln; i++)
	{
		str += Lkey[i].ToString();
		if (i != ln - 1)
		{
			str += ", ";
		}
	}
	str += "]";
	return str;
}

string ShowLB()
{
	string str = "[";
	int ln = Lblock.size();
	for (int i = 0; i < ln; i++)
	{
		str += Lblock[i].ToString();
		if (i != ln - 1)
		{
			str += ", ";
		}
	}
	str += "]";
	return str;
}

string ShowLBK()
{
	string str = "[";
	int ln = Lblockkey.size();
	for (int i = 0; i < ln; i++)
	{
		str += "[" + Lblockkey[i][0].ToString() + ", " + Lblockkey[i][1].ToString() + "]";
		if (i != ln - 1)
		{
			str += ", ";
		}
	}
	str += "]";
	return str;
}

string ShowLBB()
{
	string str = "[";
	int ln = Lblockblock.size();
	for (int i = 0; i < ln; i++)
	{
		str += "[" + Lblockblock[i][0].ToString() + ", " + Lblockblock[i][1].ToString() + "]";
		if (i != ln - 1)
		{
			str += ", ";
		}
	}
	str += "]";
	return str;
}

//////////////////////////////////////////////////////////////////////////

// Возведение образующего элемента в нужную степень
Polynom xPow(Integer i)
{
	Polynom s("0");
	if (i != 0)
	{
		Polynom r;
		s = r.PowGF2_n(x, i, f);
	}
	return s;
}

// Определение индекса элемента
Integer ind(Polynom ell)
{
	Integer i = 0;
	if (ell.ToString() != "0")
	{
		i = 1;
		while (xPow(i) != ell)
		{
			i = i + 1;
		}
	}
	return i;
}

// Получение номера пси элемента блока
Integer Psi(PolynomGF2_m_4 el)
{
	Integer ret = 0;
	bool flag = false;
	for (Integer i = 0; i <= d; i++)
	{
		if (!flag && i == d)
		{
			ret = 0;
		}
		if (!flag && el.getByIndex(atoi(i.ToString().c_str())).ToString() == "1")
		{
			flag = true;
			for (Integer j = 0; j < d - i; j++)
			{
				ret += buf.Pow(n, j);
			}
		}
		else
		{
			if (el.getByIndex(atoi(i.ToString().c_str())).ToString() != "0")
			{
				ret += buf.Pow(n, d - i) * ind(el.getByIndex(atoi(i.ToString().c_str())));
			}
		}
	}
	return ret;
}

// Преобразование целого неотрицательного числа в элемент пси при d == 2
PolynomGF2_m_4 PsiInverse(Integer N)
{
	Polynom t1("1");
	PolynomGF2_m_4 ret;
	ret.setZero();
	if (N == 0)
	{
		ret.setByIndex(t1, 2);
	}
	else
	{
		if (N <= n)
		{
			ret.setByIndex(t1, 1);
			ret.setByIndex(xPow(N - 1), 2);
		}
		else
		{
			Integer M = N - n - 1;
			Integer M0 = M % n;
			Integer M1;
			M1 = buf.Div(M, n);
			ret.setByIndex(t1, 0);
			ret.setByIndex(xPow(M1), 1);
			ret.setByIndex(xPow(M0), 2);
		}
	}
	return ret;
}

// Преобразование целого неотрицательного числа в элемент пси при d == 3
PolynomGF2_m_4 Psi3Inverse(Integer N)
{
	Polynom t1("1");
	PolynomGF2_m_4 ret;
	ret.setZero();
	if (N == 0)
	{
		ret.setByIndex(t1, 3);
	}
	else
	{
		if (N <= n)
		{
			ret.setByIndex(t1, 2);
			ret.setByIndex(xPow(N - 1), 3);
		}
		else
		{
			if (N < k)
			{
				Integer M = N - n - 1;
				Integer M0 = M % n;
				Integer M1;
				M1 = buf.Div(M, n);
				ret.setByIndex(t1, 1);
				ret.setByIndex(xPow(M1), 2);
				ret.setByIndex(xPow(M0), 3);
			}
			else
			{
				Integer M = N - k;
				Integer M0 = M % n;
				Integer M1 = (M - M0) % buf.Pow(n, 2);
				Integer bbf, M2;
				M2 = buf.Div(M, bbf.Pow(n, 2));
				ret.setByIndex(t1, 0);
				ret.setByIndex(xPow(M2), 1);
				ret.setByIndex(xPow(M1), 2);
				ret.setByIndex(xPow(M0), 3);
			}
		}
	}
	return ret;
}

PolynomGF2_m_4 vectorsum(PolynomGF2_m_4 a, PolynomGF2_m_4 b)
{
	PolynomGF2_m_4 ret;
	ret.setZero();
	int ii = 0;
	for (Integer i = 0; i <= d; i++)
	{
		ii = atoi(i.ToString().c_str());
		Polynom ra = a.getByIndex(ii);
		Polynom rb = b.getByIndex(ii);
		ret.setByIndex(bf.AddInGF2_n(ra, rb, f), ii);
	}
	return ret;
}

PolynomGF2_m_4 vectorproduct(PolynomGF2_m_4 a, PolynomGF2_m_4 b)
{
	PolynomGF2_m_4 ret;
	ret.setZero();
	int ii = 0;
	for (Integer i = 0; i <= d; i++)
	{
		ii = atoi(i.ToString().c_str());
		Polynom ra = a.getByIndex(ii);
		Polynom rb = b.getByIndex(ii);
		ret.setByIndex(bf.MulGF2_n(ra, rb, f), ii);
	}
	return ret;
}

PolynomGF2_m_4 vectorsub(PolynomGF2_m_4 a, PolynomGF2_m_4 b)
{
	PolynomGF2_m_4 ret;
	ret.setZero();
	int ii = 0;
	for (Integer i = 0; i <= d; i++)
	{
		ii = atoi(i.ToString().c_str());
		Polynom ra = a.getByIndex(ii);
		Polynom rb = b.getByIndex(ii);
		ret.setByIndex(bf.SubInGF2_n(ra, rb, f), ii);
	}
	return ret;
}

PolynomGF2_m_4 mulbyscalar(PolynomGF2_m_4 a, Polynom b)
{
	PolynomGF2_m_4 ret;
	ret.setZero();
	int ii = 0;
	for (Integer i = 0; i <= d; i++)
	{
		ii = atoi(i.ToString().c_str());
		Polynom r = a.getByIndex(ii);
		ret.setByIndex(bf.MulGF2_n(r, b, f), ii);
	}
	return ret;
}

vector<Integer> ProjectivePlaneBlokCreation()
{
	vector<Integer> B;
	if (s <= n)
	{
		B.push_back(0);
		B.push_back(s * n + 1);
	}
	else
	{
		B.push_back((s - 1) / n);
		B.push_back((s - 1) % n + n + 1);
	}
	for (Integer i = 1; i < n; i++)
	{
		B.push_back(Psi(vectorsum(mulbyscalar(PsiInverse(B[0]), xPow(i)), PsiInverse(B[1]))));
	}
	return B;
}

Integer newelement(Integer r, Integer s)
{
	Integer res = -1;
	if (r == 0)
	{
		PolynomGF2_m_4 xpt;
		xpt.setZero();
		for (Integer t = 0; t < n; t++)
		{
			xpt.setByIndex(xPow(t), 2);
			PolynomGF2_m_4 vsub = vectorsub(PsiInverse(s), xpt);
			Integer newel = Psi(vsub);
			if (newel % n == 1)
			{
				res = buf.Div(newel, n);
			}
		}
	}
	else
	{
		for (Integer t = 0; t < n; t++)
		{
			PolynomGF2_m_4 vsub = vectorsub(PsiInverse(s), mulbyscalar(PsiInverse(r), xPow(t)));
			Integer newel = Psi(vsub);
			if (newel <= 2 * n)
			{
				res = (r - 1) * n + newel;
			}
		}
	}
	return res;
}

vector<Integer> DualProjectivePlaneBlokCreation()
{
	vector<Integer> D;
	if (s <= n)
	{
		D.push_back(0);
		for (Integer t = 1; t <= n; t++)
		{
			D.push_back(s * n + t);
		}
	}
	else
	{
		for (Integer r = 0; r <= n; r++)
		{
			D.push_back(newelement(r, s));
		}
	}
	return D;
}

vector<Integer> ProjectiveGeometryBlokCreation()
{
	vector<Integer> B;
	Integer n2;
	int n_int = atoi(n.ToString().c_str());
	if (s < k)
	{
		B.push_back(0);
		B.push_back(1 + buf.Div(s - 1, n) * n);
	}
	else
	{
		Integer bbf;
		Integer n1 = buf.Div(s - n - 1, bbf.Pow(n, 2));
		n2 = buf.Div(s - 1, n) - (n1 - 1) * n;
		B.push_back(n1);
		B.push_back(n2);
	}
	for (Integer i = 1; i < n; i++)
	{
		B.push_back(Psi(vectorsum(mulbyscalar(Psi3Inverse(B[0]), xPow(i)), Psi3Inverse(B[1]))));
	}
	if (s <= n)
	{
		B.push_back(s * buf.Pow(n, 2) + n + 1);
	}
	else {
		if (s < k)
		{
			B.push_back(buf.Pow(n, 2) + ((s - 1) % n + 1) * n + 1);
		}
		else
		{
			B.push_back(s - (n2 - n - 1) * n);
		}
	}
	for (int i = 0; i <= n_int; i++)
	{
		for (Integer j = 1; j < n; j++)
		{
			B.push_back(Psi(vectorsum(mulbyscalar(Psi3Inverse(B[i]), xPow(j)), Psi3Inverse(B[n_int + 1]))));
		}
	}
	return B;
}

vector<Integer> NumsOfBlocksWithBas(Integer el)
{
	vector<Integer> ret;
	Integer n_sqr = buf.Pow(n, 2);
	if (el == 0)
	{
		for (Integer i = 0; i < k; i++)
		{
			ret.push_back(i);
		}
	}
	else if (el == 1)
	{
		for (Integer i = 0; i < n + 1; i++)
		{
			ret.push_back(i);
		}
		for (Integer i = k; i < 2 * n_sqr + n + 1; i++)
		{
			ret.push_back(i);
		}
	}
	else if (el <= n)
	{
		for (Integer i = el * n_sqr + n + 1; i < (el + 1) * n_sqr + n + 1; i++)
		{
			ret.push_back(i);
		}
	}
	else if (el == n + 1)
	{
		for (Integer i = n + 1; i < 2 * n + 1; i++)
		{
			ret.push_back(i);
		}
		for (Integer j = 1; j < n + 1; j++)
		{
			for (Integer i = j * n_sqr + n + 1; i < j * n_sqr + 2 * n + 1; i++)
			{
				ret.push_back(i);
			}
		}
	}
	else if (el <= 2 * n)
	{
		for (Integer j = 1; j < n + 1; j++)
		{
			for (Integer i = j * n_sqr + (el - n) * n + 1; i < j * n_sqr + (el - n + 1) * n + 1; i++)
			{
				ret.push_back(i);
			}
		}
	}
	else if (el <= n_sqr + 1)
	{
		for (Integer i = buf.Div(el - 1, n) * n + 1; i < buf.Div(el - 1, n) * n + n + 1; i++)
		{
			ret.push_back(i);
		}
	}
	return ret;
}

vector<Integer> InterOfTwoBasEl(Integer el1, Integer el2)
{
	vector<Integer> v1 = NumsOfBlocksWithBas(el1);
	vector<Integer> v2 = NumsOfBlocksWithBas(el2);
	vector<Integer> ret;
	for (int i = 0; i < v1.size(); i++)
	{
		if (find(v2.begin(), v2.end(), v1[i]) != v2.end())
		{
			ret.push_back(v1[i]);
		}
	}
	return ret;
}

Integer Predic(PolynomGF2_m_4 el, Integer b1, Integer b2)
{
	vector<Integer> nb = InterOfTwoBasEl(b1, b2);
	Integer ret = -1;
	PolynomGF2_m_4 n3;
	Integer bbf, bfb;
	for (int i = 0; i < nb.size(); i++)
	{
		if (nb[i] <= n)
		{
			n3 = Psi3Inverse(1 + (nb[i]) * buf.Pow(n, 2) + n);
		}
		else if (nb[i] < buf.Pow(n, 2) + n + 1)
		{
			n3 = Psi3Inverse(1 + buf.Pow(n, 2) + ((nb[i] - 1) % n + 1) * n);
		}
		else if (nb[i] < bbf.Pow(n, 3) + buf.Pow(n, 2) + n + 1)
		{
			n3 = Psi3Inverse(nb[i] - (buf.Div(nb[i] - 1, n) - (bbf.Div(nb[i] - n - 1, bfb.Pow(n, 2)) - 1) * n - n - 1) * n);
		}
		for (Integer ii = 0; ii < n; ii++)
		{
			bool flag = false;
			for (Integer iii = 0; iii < n; iii++)
			{
				PolynomGF2_m_4 prom = vectorsum(mulbyscalar(Psi3Inverse(b1), xPow(ii)), mulbyscalar(Psi3Inverse(b2), xPow(iii)));
				if (vectorsum(el, prom) == n3)
				{
					ret = nb[i];
					flag = true;
					break;
				}
			}
			if (flag) { break; }
		}
	}
	return ret;
}

vector<Integer> NotZero(Integer b1, Integer b2)
{
	vector<Integer> ret;
	PolynomGF2_m_4 sp = Psi3Inverse(s);
	for (Integer i = 1; i < n; i++)
	{
		for (Integer ii = 1; ii < n; ii++)
		{
			if (vectorsum(mulbyscalar(Psi3Inverse(b1), xPow(i)), mulbyscalar(Psi3Inverse(b2), xPow(ii))) == sp)
			{
				ret = InterOfTwoBasEl(b1, b2);
			}
		}
	}
	return ret;
}

vector<Integer> DualProjectiveGeometryBlokCreation()
{
	vector<Integer> D;
	PolynomGF2_m_4 sp = Psi3Inverse(s);
	if (s < k)
	{
		vector<Integer> pr = NumsOfBlocksWithBas(s);
		if (!pr.empty())
		{
			for (const auto& i : pr)
			{
				D.push_back(i);
			}
		}
		if (D.size() < k)
		{
			vector<Integer> b2;
			b2.push_back(1);
			for (Integer i = 1; i <= n; i++)
			{
				b2.push_back(n * i + 1);
			}
			for (int i = 0; i < b2.size(); i++)
			{
				pr = NotZero(0, b2[i]);
				if (!pr.empty())
				{
					for (int j = 0; j < pr.size(); j++)
					{
						if (find(D.begin(), D.end(), pr[j]) == D.end())
						{
							D.push_back(pr[j]);
						}
					}
				}
			}
			b2.clear();
			for (Integer i = 1; i <= n; i++)
			{
				b2.push_back(n + i);
			}
			for (Integer i = 1; i <= n; i++)
			{
				for (int ii = 0; ii < b2.size(); ii++)
				{
					pr = NotZero(i, b2[ii]);
					if (!pr.empty())
					{
						for (int j = 0; j < pr.size(); j++)
						{
							if (find(D.begin(), D.end(), pr[j]) == D.end())
							{
								D.push_back(pr[j]);
							}
						}
					}
				}
			}
		}
		if (D.size() < k)
		{
			D.push_back(0);
		}
	}
	else
	{
		vector<Integer> b2;
		b2.push_back(1);
		for (Integer i = 1; i <= n; i++)
		{
			b2.push_back(n * i + 1);
		}
		for (int i = 0; i < b2.size(); i++)
		{
			D.push_back(Predic(sp, 0, b2[i]));
		}
		b2.clear();
		for (Integer i = 1; i <= n; i++)
		{
			b2.push_back(n + i);
		}
		for (Integer i = 1; i <= n; i++)
		{
			for (int ii = 0; ii < b2.size(); ii++)
			{
				D.push_back(Predic(sp, i, b2[ii]));
			}
		}
	}
	return D;
}

vector<Integer> AcicleBlok()
{
	vector<Integer> ret;
	if (d == 2)
	{
		ret = ProjectivePlaneBlokCreation();
	}
	else
	{
		ret = ProjectiveGeometryBlokCreation();
	}
	return ret;
}

vector<Integer> DualAcicleBlok()
{
	vector<Integer> ret;
	if (d == 2)
	{
		ret = DualProjectivePlaneBlokCreation();
	}
	else
	{
		ret = DualProjectiveGeometryBlokCreation();
	}
	return ret;
}

vector<string> PolAcicleBlok()
{
	vector<string> ret;
	vector<Integer> pr;
	if (d == 2)
	{
		pr = ProjectivePlaneBlokCreation();
	}
	else
	{
		pr = ProjectiveGeometryBlokCreation();
	}
	for (const auto& i : pr)
	{
		if (d == 2)
		{
			ret.push_back(PsiInverse(i).getByIndex(0).ToString()+" "+ PsiInverse(i).getByIndex(1).ToString()+" "+ PsiInverse(i).getByIndex(2).ToString());
		}
		else
		{
			ret.push_back(Psi3Inverse(i).getByIndex(0).ToString()+" "+Psi3Inverse(i).getByIndex(1).ToString()+" "+ Psi3Inverse(i).getByIndex(2).ToString()+" "+ Psi3Inverse(i).getByIndex(3).ToString());
		}
	}
	return ret;
}

vector<string> PolDualAcicleBlok()
{
	vector<string> ret;
	vector<Integer> pr;
	if (d == 2)
	{
		pr = DualProjectivePlaneBlokCreation();
	}
	else
	{
		pr = DualProjectiveGeometryBlokCreation();
	}
	for (const auto& i : pr)
	{
		if (d == 2)
		{
			ret.push_back(PsiInverse(i).getByIndex(0).ToString() + " " + PsiInverse(i).getByIndex(1).ToString() + " " + PsiInverse(i).getByIndex(2).ToString());
		}
		else
		{
			ret.push_back(Psi3Inverse(i).getByIndex(0).ToString() + " " + Psi3Inverse(i).getByIndex(1).ToString() + " " + Psi3Inverse(i).getByIndex(2).ToString() + " " + Psi3Inverse(i).getByIndex(3).ToString());
		}
	}
	return ret;
}

// Пересечение блоков, содержащихся в списке arr
vector<Integer> cens(vector<Integer> arr, bool dual)
{
	vector<Integer> rez;
	if (dual == false)
	{
		s = arr[0];
		rez = AcicleBlok();
	}
	else
	{
		s = arr[0];
		rez = DualAcicleBlok();
	}
	for (int i = 1; i < arr.size(); i++)
	{
		vector<Integer> prom;
		s = arr[i];
		vector<Integer> dbl = DualAcicleBlok();
		for (auto j : rez)
		{
			if (find(dbl.begin(), dbl.end(), j) != dbl.end())
			{
				prom.push_back(j);
			}
		}
		rez = prom;
	}
	return rez;
}

Integer id(Integer j)
{
	return j;
}

bool kel(Integer kn)
{
	bool fl = false;
	if (find(Lkey.begin(), Lkey.end(), kn) != Lkey.end()) { fl = true; }
	return fl;
}

bool bkel(Integer bn, Integer bk)
{
	vector<Integer> vec(2);
	vec[0] = bn;
	vec[1] = bk;
	bool fl = false;
	if (find(Lblockkey.begin(), Lblockkey.end(), vec) != Lblockkey.end()) { fl = true; }
	return fl;
}

bool bbel(Integer bn, Integer bk)
{
	vector<Integer> vec1(2);
	vec1[0] = bn;
	vec1[1] = bk;
	vector<Integer> vec2(2);
	vec2[0] = bk;
	vec2[1] = bn;
	bool fl = false;
	if (find(Lblockblock.begin(), Lblockblock.end(), vec1) != Lblockblock.end() || find(Lblockblock.begin(), Lblockblock.end(), vec2) != Lblockblock.end()) { fl = true; }
	return fl;
}

bool blockexistence(Integer bn)
{
	bool fl = false;
	if (find(Lblock.begin(), Lblock.end(), bn) != Lblock.end()) { fl = true; }
	return fl;
}

vector<Integer> psiinv(Integer n)
{
	s = n;
	return AcicleBlok();
}

vector<Integer> dualhiinv(Integer n)
{
	s = n;
	return DualAcicleBlok();
}

vector<Integer> Algoritm1(Integer j1, Integer j2)
{
	if (!blockexistence(j1) && !blockexistence(j2))
	{
		vector<Integer> keys = cens({ id(j1), id(j2) }, false);
		for (const auto& it : keys)
		{
			if ((!kel(it)) && (!bkel(j1, it)) && (!bkel(j2, it)) && (!bbel(j1, j2)))
			{
				return { it };
			}
		}
		vector<Integer> keysofj1 = psiinv(j1);
		vector<Integer> keysofj2 = psiinv(j2);
		for (const auto& it1 : keysofj1)
		{
			for (const auto& it2 : keysofj2)
			{
				if (it1 == it2)
				{
					if ((!kel(it1)) && (!bkel(j1, it1)) && (!bkel(j2, it1)))
					{
						Integer ckey = it1;
						vector<Integer> commonblocks = dualhiinv(ckey);
						for (const auto& it3 : commonblocks)
						{
							if ((!bkel(it3, ckey)) && (!(it3 == j1)) && (!(it3 == j2)) && (!bbel(it3, j1)) && (!bbel(it3, j2)) && (!bbel(it1, it3)) && (!bbel(it2, it3))/**/ && (!(blockexistence(it3))))
							{
								return { ckey,it3 };
							}
						}
					}
				}
			}
		}
		for (const auto& it1 : keysofj1)
		{
			for (const auto& it2 : keysofj2)
			{
				if ((it1 != it2) && (!bkel(j1, it1)) && (!bkel(j2, it2)) && (!kel(it1)) && (!kel(it2)))
				{
					vector<Integer> commonblocks = cens({ id(it1), id(it2) }, true);
					if (commonblocks.size() != 0)
					{
						for (const auto& it3 : commonblocks)
						{
							if ((!bkel(it3, it1)) && (!bkel(it3, it2)) && (!(it3 == j1)) && (!(it3 == j2)) && (!bbel(j1, it3)) && (!bbel(j2, it3)) && (!blockexistence(it3)))
							{
								return { j1,it1,it3,it2,j2 };
							}
						}
					}
				}
			}
		}
	}
	vector<Integer> rez(0);
	return rez;
}

vector<Integer> Algoritm2(Integer j1, Integer j2)
{
	if (!blockexistence(j1) && !blockexistence(j2))
	{
		Integer id1 = id(j1);
		Integer id2 = id(j2);
		vector<Integer>comelementnumbers = cens({ id1, id2 }, false);
		for (const auto& it : comelementnumbers)
		{
			if ((!kel(it)) && (!bkel(id1, it)) && (!bkel(id2, it)) && (!bbel(id1, id2)))
			{
				return { id1, id2 };
			}
		}
		for (int j = 0; j < v; j++)
		{
			if ((j != id1) && (j != id2) && (!blockexistence(j)))
			{
				Integer id3 = id(j);
				vector<Integer> cens1 = cens({ id1, id3 }, false);
				vector<Integer> cens2 = cens({ id2, id3 }, false);
				if ((cens1.size() != 0) && (cens2.size() != 0) && (!bbel(id1, j)) && (!bbel(id2, j)))
				{
					for (const auto& k1 : cens1)
					{
						if ((!bkel(j, k1)) && (!bkel(id1, k1)) && (!kel(k1)))
						{
							for (const auto& k2 : cens2)
							{
								if ((!bkel(j, k2)) && (!bkel(id2, k2)) && (!kel(k2)))
								{
									return { id1, id2, id3 };
								}
							}
						}
					}
				}
			}
		}
	}
	vector<Integer> rez(0);
	return rez;
}

vector<vector<Integer>> Algoritm3(vector<Integer> j1, vector<Integer> j2)
{
	vector<vector<Integer>> rez;
	if ((j1[0] == j2[0]) || (j1[1] == j2[1]))
	{
		return {j1 ,j2};
	}
	vector<Integer> cens1 = cens({j1[1], j2[1]}, true);
	for (const auto& el : cens1)
	{
		if (el == j1[0])
		{
			rez = vector<vector<Integer>>(3);
			rez[0] = j1;
			rez[1] = vector<Integer>(2);
			rez[1][0] = el;
			rez[1][1] = j2[1];
			rez[2] = j2;
			return rez;
		}
		else if (el == j2[0])
		{
			rez = vector<vector<Integer>>(3);
			rez[0] = j1;
			rez[1] = vector<Integer>(2);
			rez[1][0] = el;
			rez[1][1] = j1[1];
			rez[2] = j2;
			return rez;
		}
		else
		{
			rez = vector<vector<Integer>>(4);
			rez[0] = j1;
			rez[1] = vector<Integer>(2);
			rez[1][0] = el;
			rez[1][1] = j1[1];
			rez[2] = vector<Integer>(2);
			rez[2][0] = el;
			rez[2][1] = j2[1];
			rez[3] = j2;
			return rez;
		}
	}
	rez = vector<vector<Integer>>(0);
	return rez;
}

bool IsIn(vector<Integer> v1)
{
	bool rf = false;
	s = v1[0];
	vector<Integer> ipr = DualAcicleBlok();
	if (find(ipr.begin(), ipr.end(), v1[1]) != ipr.end()) { rf = true; }
	return rf;
}