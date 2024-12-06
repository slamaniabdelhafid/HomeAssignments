/*slamani abdelhafid.  group 24.b83 . st130302@student.spbu.ru*/

#include <gtest/gtest.h>
#include "Transformers.h"
#include "autobot.h"
#include "minicon.h"  
#include "decepticon.h"  
#include <iostream>
#include <string>
   
// base class test
TEST(TransformerTest, transformers)
{
    BaseTransformer myRobo2;
    myRobo2.setName("Titanus");
    myRobo2.setHeight(150);
    EXPECT_EQ(myRobo2.getHeight(),150);
    EXPECT_EQ(myRobo2.getName(),"Titanus");
}

//autobots
//we initialized the value of the autobots counter
int Autobot::autobotCounter=0;

TEST(AutobotTest, autobotsCount)
{
    Autobot autobot;
    Autobot autobot1;
    Autobot autobotQ;
    EXPECT_EQ(Autobot::autobotCounter,3);
}

//minicon
//we initialized the value of the counter
int Minicon::miniconCounter=0;  
TEST(MiniconTest, miniconsCount)  
{
    Minicon minbot;  
    EXPECT_EQ(Minicon::miniconCounter,1);  
}

//decepticons
TEST(DecepticonTest, decepticonGetName)  
{
    Decepticon decepticon;  
    decepticon.setName("Chidima");
    EXPECT_EQ(decepticon.getName(),"Chidima");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
 
//testing new comparison
TEST(BaseTransformer, CheckComparison) {
    BaseTransformer trans1;
    trans1.setHeight(2000);
    BaseTransformer trans2;
    trans2.setHeight(5000);

    ASSERT_TRUE(trans1 < trans2);
}

TEST(Autobot, CheckComparison) {
    Autobot abot1;
    abot1.setMoralAlignmet("120");
    Autobot abot2;
    abot2.setMoralAlignmet("35");
    int ab1 = stoi(abot1.getMoralAlignemt());
    int ab2 = stoi(abot2.getMoralAlignemt());
    ASSERT_TRUE(ab1 > ab2);
}

TEST(Minicon, CheckComparison) {  
    Decepticon pcon1;  
    pcon1.setBeastForm("10");
    Decepticon pcon2;  
    pcon2.setPeaceful("5");
    int pn1 = stoi(pcon1.getBeastForm());
    int pn2 = stoi(pcon2.getPeaceful());

    ASSERT_FALSE(pn2 > pn1);
} 