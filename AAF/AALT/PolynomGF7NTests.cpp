/*
    MPEI Algebraic Abstractions Library,
    2007-2019,
    Moscow Power Engineering Institute

        This file contains tests of the following classes:
		AAL::PolynomGF7N

*/
#include "./CppUnitLite/TestHarness.h"

#include <iostream>
#include <chrono>
#include <time.h>
#include "AAF/AAL/PolynomGF7N.h"
#include <fstream>

using namespace AAL;
using namespace std;
TEST(PolynomGF7N, SHR)
{
	PolynomGF7N i("1002000210101010012101010100012101000121001022211111111111111111111111000001111222111211121112110020011211211211110001011121211111111");
	PolynomGF7N j("0000000000000000000000000000000000000000000001002000210101010012101010100012101000121001022211111111111111111111111000001111222111211121112110020011211211211110001011121211111111");
	PolynomGF7N k;

	k.Shift_R_ParallelPack(100);
	i.Shift_R_ParallelPack(45);
	CHECK(i == j);
	CHECK(k.isNull());
}

TEST(PolynomGF7N, SHL)
{
	PolynomGF7N i("102020201010121001110121010001020100010100101111121111211121121112111200000211211121121121112112001021111111111111201001121121121111");
	PolynomGF7N j("10100101111121111211121121112111200000211211121121121112112001021111111111111201001121121121111");
	PolynomGF7N k;

	k.Shift_L_ParallelPack(10001);
	i.Shift_L_ParallelPack(37);
	CHECK(i == j);
	CHECK(k.isNull());
}

TEST(PolynomGF7N, Add) {
	PolynomGF7N p1("1234525");
	PolynomGF7N p2("1321425");
	PolynomGF7N p3("2555243");
	PolynomGF7N res_1("5413551");
	PolynomGF7N res_2("3012456");
	PolynomGF7N res_3("142523");
	PolynomGF7N pol_0("0");

	PolynomGF7N c;

	CHECK(!(p1.ToString() != "1234525"));
	CHECK(!(p2.ToString() != "1321425"));
	CHECK(!(c.Add(p1, p2) != p3));
	CHECK(!(c.Add(res_3, pol_0) != res_3));
	CHECK(!(c.Add(res_1, res_2) != res_3));
	
}

TEST(PolynomGF7N, Mul) {
	PolynomGF7N p1("1232563");
	PolynomGF7N p2("1");
	PolynomGF7N p3("2");
	PolynomGF7N res_1("1232563");
	PolynomGF7N res_2("2464356");
	PolynomGF7N pol_0("0");

	PolynomGF7N c;

	CHECK(!(c.Mul(p1, p2) != res_1));
	CHECK(!(c.Mul(p1, p3) != res_2));
	CHECK(!(c.Mul(res_1, pol_0) != pol_0));
}
TEST(PolynomGF7N, Sub)
{
	PolynomGF7N i("162025");
	PolynomGF7N j("111111");
        PolynomGF7N k("051614");
        PolynomGF7N zero("0");
        CHECK(i.Sub(i, j) == k);
        CHECK(j.ToString() == "111111");
		CHECK(j.Sub(j, zero).ToString() == "111111");
        CHECK(j.Sub(zero,zero).isNull());
}

TEST(PolynomGF7N, Add2)
{
	PolynomGF7N i("162025");
	PolynomGF7N j("141125");
	PolynomGF7N k("233143");
	PolynomGF7N i1("0346061");
	PolynomGF7N i11("3460610");
	PolynomGF7N i111("3036601");
	PolynomGF7N zero("0");
	CHECK(i1.Add(i1, i11) == i111);
	CHECK(i.ToString()=="162025");
	CHECK(j.ToString() == "141125");
	CHECK(i.Add(i,j) == k);
	CHECK(j.Add(j, zero).ToString() == "141125" && !j.isNull() && zero.isNull());
	CHECK(j.Add(zero,zero).isNull());

}

TEST(PolynomGF7N, Div) {
	PolynomGF7N p1("1232563");
	PolynomGF7N p2("13213");
	PolynomGF7N p3("222222");
	PolynomGF7N res_1;
	PolynomGF7N res_2;
	PolynomGF7N quot, rem, c;

	res_1.Mul(p1, p2);
	res_2.Mul(p2, p3);

	// ???????????????? ????????????????
	rem.Div(res_1, p1, quot);
	CHECK(!(quot != p2));
	// ???????????????? ??????????????
	rem.Div(res_2, p3, quot);
	c.Mul(p3, quot);
	c.Add(c, rem);
	CHECK(!(c != res_2));
}

TEST(PolynomGF7N, isIrreducible) {
	PolynomGF7N p10("101");
	PolynomGF7N p11("2000000001");
	PolynomGF7N p12("2000000000000000000000000001");
	PolynomGF7N p1_not("24121434");
	PolynomGF7N p1_big1("3000000000000000000000000000000000000000000000000000000000000000000000000000000001");
	PolynomGF7N p1_big2("4000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001");

	PolynomGF7N p20("311");
	PolynomGF7N p21("65001");
	PolynomGF7N p22("540000001");
	PolynomGF7N p23("20300000000000000001");
	PolynomGF7N p2_not("320001421");
	PolynomGF7N p2_big1("4050000000000000000000000000000000000001");
	PolynomGF7N p2_big2("600000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001");

	CHECK(p12.isIrreducible());
	CHECK(p10.isIrreducible());
	CHECK(p11.isIrreducible());
	CHECK(!(p1_not.isIrreducible()));
	CHECK(p1_big1.isIrreducible());
	CHECK(p1_big2.isIrreducible());
	CHECK(p20.isIrreducible());
	CHECK(p21.isIrreducible());
	CHECK(p22.isIrreducible());
	CHECK(p23.isIrreducible());
	CHECK(!(p2_not.isIrreducible()));
	CHECK(p2_big1.isIrreducible());
	CHECK(p2_big2.isIrreducible());
}

TEST(PolynomGF7N, MUL_GNB) {
	PolynomGF7N x1, x2, prod, xbetalon, irr;

	for (int i = 3; i <= 510; i++) {
		if (x1.GNB_Test(i) != 0) {
			irr.GenerateGNBIrreducible(i);
			x1.Generate(irr);
			x2.Generate(irr);

			prod.Mul(x1, x2);
			xbetalon.Div(prod, irr);

			prod.PolynomialToReduced(prod, i);
			prod.ReducedToRedundant(prod, i);
			prod.RedundantToReduced(prod, i);
			prod.ReducedToPolynomial(prod, i);

			CHECK (prod == xbetalon);
		}
	}
}

TEST(PolynomGF7N, Mul2)
{
	PolynomGF7N i("162025");
	PolynomGF7N j("333333");
	PolynomGF7N k ("30665636001");

	CHECK(k == i.Mul(i,j));
}
TEST(PolynomGF7N, ModMul)
{
	PolynomGF7N i("162025");
	PolynomGF7N j("333333");
	PolynomGF7N k ("364656360");
	PolynomGF7N f("1200000001");
	k.TrimZero();
	CHECK(k == i.ModMul(i,j,f));

	PolynomGF7N i1("461002325412");
	PolynomGF7N j1("312563254");
	PolynomGF7N k1("650643002");
        PolynomGF7N f1("1200000001");
        CHECK(k1 == i1.ModMul(i1,j1,f1));

	PolynomGF7N i3("135");
	PolynomGF7N j3("135");
	PolynomGF7N k3("343");
        PolynomGF7N f3("1111");
        CHECK(k3 == i3.ModMul(i3,j3,f3));

}

TEST(PolynomGF7N, Div2)
{
	PolynomGF7N a("162025");
	PolynomGF7N b("333333");
	PolynomGF7N ab("30665636001");
	PolynomGF7N r, rm;
	//CHECK(ab/a == b);
	CHECK(r.Div(ab, b, rm).isNull() && rm == a && r.isNull());
}
TEST(PolynomGF7N, ModPow)
{
        PolynomGF7N a("030"),b("110"),c("0"),c2("0");
        PolynomGF7N d("002"),c1("0"),c3("0"),d1("100");
        PolynomGF7N a1("12345612345612345612345612345");
        PolynomGF7N module("130000000000000000000000000001");
        PolynomGF7N ax("3"),bx("1");
        c.ModMul(a1,a1,module);
        std::string s = c.ToString();
        c.ModMul(c,a1,module);
        s = c.ToString();
        c.ModMul(c,a1,module);
        s = c.ToString();
        c.ModMul(c,a1,module);
        s = c.ToString();
        c.ModMul(c,a1,module);
        s = c.ToString();
        c.ModMul(c,a1,module);
        s = c.ToString();

		c2.ModPow(a1,7,module);
		CHECK(c2 == c);
		c1 = c;
		PolynomGF7N module1("1101");
		d1.TrimZero();
		CHECK(c3.ModPow(b,342,module1) == d1);
		s = c3.ToString();
		CHECK(c1.ModPow(a,2,module) == c2.ModMul(a,a,module));

}

/*
TEST(PolynomGF7N, POW_GNB) {
	PolynomGF7N x1, x2, pol, irr;

	for (int i = 3; i <= 510; i++) {
		printf("\r%2.1f%%",i/5.1);
		fflush(stdout);
		if (x1.GNB_Test(i) != 0) {

			irr.GenerateGNBIrreducible(i);
			if (irr.isIrreducible()) {

				pol.Generate(irr);
				int deg = rand();

				x1.ModPow(pol, deg, irr);
				x2.PowGF7_n_ONB(pol, deg, irr);

				if (x1 == x2) {
					continue;
				}
				else {
					cout << i << endl;
					CHECK(false);
				}
			}

		}
	}
}
/*
int main()
{
	// ???????????????????????? ???????????????? ????????????????
	cout << "Add() test: " << Add_TEST() << endl;
	// ???????????????????????? ???????????????? ??????????????????
	cout << "Mul() test: " << Mul_TEST() << endl;
	// ???????? ???????????????? ??????????????
	cout << "Div() test: " << Div_TEST() << endl;
	// ???????? ???????????????? ????????????????????????????
	cout << "isIrreducible() test: " << isIrreducible_TEST() << endl;
	
	// ???????? ???????????????????????????? ?????????????? ?? ???????????????????????????? ??????????????????
	cout << "MUL_GNB_TEST() test: " << MUL_GNB_TEST() << endl;

	// ???????? ???????????????????????????? ?????????????? ?? ???????????????????????????? ???????????????????? ?? ??????????????
	cout << "POW_GNB_TEST() test: " << POW_GNB_TEST() << endl;

    return 0;
}

*/