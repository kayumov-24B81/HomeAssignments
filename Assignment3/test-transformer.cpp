/* Kayumov Airat st128100@student.spbu.ru
   transformers. this file contains test for all classes. Some methods are already tested inside constructor test, so they don't have their own separate test. Each TEST group is suited for one class(transformertest for Transformer class etc.).
*/
#include <gtest/gtest.h>
#include <iostream>
#include "decepticon.hpp"
#include "autobot.hpp"
#include "minicon.hpp"

TEST(transformertest, default_constructor)
{
    Transformer goidabot;
    EXPECT_EQ(goidabot.get_hp(), 100);
    EXPECT_EQ(goidabot.get_damage(), 10);
}

TEST(transformertest, constructor)
{
    Gun showel(15);
    Transformer goidabot(showel, 1.2);
    EXPECT_EQ(goidabot.get_hp(), 120);
    EXPECT_EQ(goidabot.get_damage(), 15);
}

TEST(transformertest, get_functions)
{
    Transformer goidabot;
    EXPECT_EQ(goidabot.get_hp(), 100);
    EXPECT_EQ(goidabot.get_lvl(), 0);
    EXPECT_EQ(goidabot.get_fuel(), 100);
    EXPECT_EQ(goidabot.get_ammo(), 20);
    EXPECT_EQ(goidabot.get_damage(), 10);
}

TEST(transformertest, set_functions)
{
    Transformer goidabot;
    goidabot.set_damage(5);
    EXPECT_EQ(goidabot.get_damage(), 5);
    goidabot.set_hp(1);
    EXPECT_EQ(goidabot.get_hp(), 1);
    goidabot.set_fuel(3);
    EXPECT_EQ(goidabot.get_fuel(), 3);
}

TEST(transformertest, misc_functions)
{
    Transformer goidabot;
    goidabot.lvl_up(10);
    EXPECT_EQ(goidabot.get_lvl(), 10);
    goidabot.lvl_up();
    EXPECT_EQ(goidabot.get_lvl(), 11);
    goidabot.fire();
    EXPECT_EQ(goidabot.get_ammo(), 19);
    goidabot.reload();
    EXPECT_EQ(goidabot.get_ammo(), 20);
}

TEST(guntest, default_constructor)
{
    Gun showel;
    EXPECT_EQ(showel.get_damage(), 10);
}

TEST(guntest, constructor)
{
    Gun showel(5);
    EXPECT_EQ(showel.get_damage(), 5);
}

TEST(guntest, set_function)
{
    Gun showel(10);
    showel.set_damage(13);
    EXPECT_EQ(showel.get_damage(), 13);
}

TEST(armortest, default_constructor)
{
    Armor steel_armor;
    EXPECT_EQ(steel_armor.get_toughness(), 1);
}

TEST(armortest, constructor)
{
    Armor steel_armor(2);
    EXPECT_EQ(steel_armor.get_toughness(), 2);
}

TEST(Decepticontest, constructor)
{
    Decepticon goidabot;
    EXPECT_TRUE(goidabot.get_can_fly());
}

TEST(Decepticontest, get_function)
{
    Decepticon goidabot;
    EXPECT_FALSE(goidabot.get_upgrade());
}

TEST(Decepticontest, upgrade_function)
{
    Decepticon goidabot;
    EXPECT_TRUE(goidabot.upgrade());
    EXPECT_EQ(goidabot.get_damage(), 20);
    EXPECT_EQ(goidabot.get_hp(), 80);
    EXPECT_FALSE(goidabot.upgrade());
}

TEST(Autobottest, constructor)
{
    Autobot goidabot;
    EXPECT_FALSE(goidabot.get_can_fly());
}

TEST(Autobottest, get_function)
{
    Autobot goidabot;
    EXPECT_FALSE(goidabot.get_repaired());
}

TEST(Autobottest, set_function)
{
    Autobot goidabot;
    goidabot.set_repaired(true);
    EXPECT_TRUE(goidabot.get_repaired());
}
    
TEST(Autobottest, upgrade_function)
{
    Autobot goidabot;
    EXPECT_TRUE(goidabot.repair());
    EXPECT_EQ(goidabot.get_hp(), 120);
    EXPECT_EQ(goidabot.get_fuel(), 80);
    EXPECT_FALSE(goidabot.repair());
}

TEST(Minicontest, constructor)
{
    Minicon goidabot;
    EXPECT_TRUE(goidabot.get_can_fly());
}

TEST(Minicontest, get_function)
{
    Minicon goidabot;
    EXPECT_TRUE(goidabot.get_battle_mode());
}

TEST(Minicontest, set_function)
{
    Minicon goidabot;
    goidabot.set_battle_mode(false);
    EXPECT_FALSE(goidabot.get_battle_mode());
    goidabot.set_can_fly(false);
    EXPECT_FALSE(goidabot.get_can_fly());
}

TEST(Minicontest, change_mode_function)
{
    Minicon goidabot;
    goidabot.change_mode();
    EXPECT_FALSE(goidabot.get_battle_mode());
    EXPECT_EQ(goidabot.get_damage(), 5);
    EXPECT_EQ(goidabot.get_fuel(), 130);
    EXPECT_EQ(goidabot.get_hp(), 80);
    EXPECT_FALSE(goidabot.get_can_fly());
    EXPECT_FALSE(goidabot.get_battle_mode());
    goidabot.change_mode();
    EXPECT_TRUE(goidabot.get_battle_mode());
    EXPECT_EQ(goidabot.get_damage(), 10);
    EXPECT_EQ(goidabot.get_fuel(), 90);
    EXPECT_EQ(goidabot.get_hp(), 120);
    EXPECT_TRUE(goidabot.get_can_fly());
    EXPECT_TRUE(goidabot.get_battle_mode());
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
