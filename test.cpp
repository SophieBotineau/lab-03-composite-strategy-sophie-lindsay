
#include "gtest/gtest.h"
#include "mesTests.cpp"

Op* O1=new Op(14);
Op* O2=new Op(3.6);
Op* O3=new Op(-7.1);
Op* O4=new Op(-0.01);
Op* O5=new Op(2);
Op* O6=new Op(-3);
TEST(Operations, Addition)
{
	ASSERT_EQ(17.6, add(O1, O2));
	ASSERT_EQ(6.9, add(O3,O1));
};
TEST(Operations, Subs)
{
	ASSERT_EQ(21.1, sub(O1, O3));
	ASSERT_EQ(10.4, sub(O1, O2));
};
TEST(Operations, Multiplications)
{
	ASSERT_EQ(28, mult(O1,O5));
};
TEST(Operations, Divisions)
{
	ASSERT_EQ(7, div(O1, O5));
};
TEST(Operations, SquareRoot)
{
	ASSERT_EQ(4, sqrt(O5));
	ASSERT_EQ(9, sqrt(O6));
};




/*TEST(MainTest, vectorselection) {
	char* test_val[3]; test_val[0] = "./main"; test_val[1] = "vector"; test_val[2] = "selection";
	EXPECT_EQ("Container before Sort:\n28\n31\n29\n841\nContainer after Sort:\n28\n29\n31\n841\n", main(3,test_val));
}*/

int main(int argv, char **argc){
	::testing::InitGoogleTest(&argv, argc);
	return RUN_ALL_TESTS();
} 
