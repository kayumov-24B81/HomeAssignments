/* Kayumov Airat st128100@student.spbu.ru
   transformers. this file contains test for all classes. Some methods are already tested inside constructor test, so they don't have their own separate test. Each TEST group is suited for one class(transformertest for Transformer class etc.). Has one TEST group for tests that contain different class objects.
*/
#include <gtest/gtest.h>
#include <vector>
#include "decepticon.hpp"
#include "autobot.hpp"

TEST(Transformertest, default_constructor)
{
    Transformer goidabot;
    EXPECT_EQ(goidabot.get_hp(), 100);
    EXPECT_EQ(goidabot.get_damage(), 10);
}

TEST(Transformertest, constructor)
{
    Gun showel(15);
    Transformer goidabot(showel, 1.2, true);
    EXPECT_EQ(goidabot.get_hp(), 120);
    EXPECT_EQ(goidabot.get_damage(), 15);
    EXPECT_TRUE(goidabot.get_fire_resistance());
}

TEST(Transformertest, get_functions)
{
    Transformer goidabot;
    EXPECT_EQ(goidabot.get_hp(), 100);
    EXPECT_EQ(goidabot.get_lvl(), 0);
    EXPECT_EQ(goidabot.get_fuel(), 100);
    EXPECT_EQ(goidabot.get_ammo(), 20);
    EXPECT_EQ(goidabot.get_damage(), 10);
    EXPECT_FALSE(goidabot.get_fire_resistance());
}

TEST(Transformertest, set_functions)
{
    Transformer goidabot;
    goidabot.set_damage(5);
    EXPECT_EQ(goidabot.get_damage(), 5);
    goidabot.set_hp(1);
    EXPECT_EQ(goidabot.get_hp(), 1);
    goidabot.set_fuel(3);
    EXPECT_EQ(goidabot.get_fuel(), 3);
}

TEST(Transformertest, misc_functions)
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

TEST(Transformertest, cout_overload)
{
    Transformer goidabot;
    std :: cout << goidabot << std :: endl;
}

TEST(Transformertest, comparision_overload)
{
    Gun gun(20);
    Transformer goidabot(gun, 1.2, true);
    Transformer zolobot(gun, 1.4, true);
    EXPECT_TRUE(zolobot > goidabot);
    EXPECT_TRUE(goidabot < zolobot);
    EXPECT_FALSE(goidabot < goidabot);
}

TEST(Transformertest, virtual_functions)
{
    Transformer goidabot;
    EXPECT_TRUE(goidabot.transform());
    EXPECT_TRUE(goidabot.self_destruction());
    EXPECT_TRUE(goidabot.call_reinforcements());
}

TEST(Transformertest, virtual_functions_w_typed_ptr)
{
    Transformer goidabot;
    Transformer* ptr = &goidabot;
    EXPECT_TRUE(ptr->transform());
    EXPECT_TRUE(ptr->self_destruction());
    EXPECT_TRUE(ptr->call_reinforcements());
}

TEST(Guntest, default_constructor)
{
    Gun showel;
    EXPECT_EQ(showel.get_damage(), 10);
}

TEST(Guntest, constructor)
{
    Gun showel(5);
    EXPECT_EQ(showel.get_damage(), 5);
}

TEST(Guntest, set_function)
{
    Gun showel(10);
    showel.set_damage(13);
    EXPECT_EQ(showel.get_damage(), 13);
}

TEST(Guntest, cout_overload)
{
    Gun showel(5);
    std :: cout << showel << std :: endl;
}


TEST(Armortest, default_constructor)
{
    Armor steel_armor;
    EXPECT_EQ(steel_armor.get_toughness(), 1);
}

TEST(Armortest, constructor)
{
    Armor steel_armor(2, true);
    EXPECT_EQ(steel_armor.get_toughness(), 2);
    EXPECT_EQ(steel_armor.get_fire_resistance(), true);
}

TEST(Decepticontest, constructor)
{
    Decepticon goidabot;
    EXPECT_FALSE(goidabot.get_can_makedonian_shooting());
}

TEST(Decepticontest, get_function)
{
    Decepticon goidabot;
    EXPECT_FALSE(goidabot.get_is_upgraded());
}

TEST(Decepticontest, upgrade_function)
{
    Decepticon goidabot;
    EXPECT_TRUE(goidabot.upgrade());
    EXPECT_EQ(goidabot.get_damage(), 20);
    EXPECT_EQ(goidabot.get_hp(), 80);
    EXPECT_FALSE(goidabot.upgrade());
    EXPECT_TRUE(goidabot.get_can_makedonian_shooting());
}

TEST(Decepticontest, cout_overload)
{
    Decepticon goidabot;
    std :: cout << goidabot << std :: endl;
}

TEST(Decepticontest, comparision_overload)
{
    Gun gun(20);
    Decepticon goidabot(gun, 1.2, true);
    Decepticon zolobot(gun, 1.4, true);
    EXPECT_TRUE(zolobot > goidabot);
    EXPECT_TRUE(goidabot < zolobot);
    EXPECT_FALSE(goidabot < goidabot);
}

TEST(Decepticontest, virtual_functions)
{
    Decepticon goidabot;
    EXPECT_TRUE(goidabot.transform());
    EXPECT_TRUE(goidabot.self_destruction());
    EXPECT_TRUE(goidabot.call_reinforcements());
}

TEST(Decepticontest, virtual_functions_w_typed_ptr)
{
    Decepticon goidabot;
    Transformer* ptr = &goidabot;
    EXPECT_TRUE(ptr->transform());
    EXPECT_TRUE(ptr->self_destruction());
    EXPECT_TRUE(ptr->call_reinforcements());
}

TEST(Autobottest, constructor)
{
    Autobot goidabot;
    EXPECT_TRUE(goidabot.get_is_teleport_ready());
}

TEST(Autobottest, get_function)
{
    Autobot goidabot;
    EXPECT_FALSE(goidabot.get_is_repaired());
    EXPECT_TRUE(goidabot.get_is_teleport_ready());
}

TEST(Autobottest, set_function)
{
    Autobot goidabot;
    goidabot.set_repaired(true);
    EXPECT_TRUE(goidabot.get_is_repaired());
}

TEST(Autobottest, repair_function)
{
    Autobot goidabot;
    EXPECT_TRUE(goidabot.repair());
    EXPECT_EQ(goidabot.get_hp(), 120);
    EXPECT_EQ(goidabot.get_fuel(), 80);
    EXPECT_FALSE(goidabot.repair());
}

TEST(Autobottest, cout_overload)
{
    Autobot goidabot;
    std :: cout << goidabot << std :: endl;
}

TEST(Autobottest, comparision_overload)
{
    Gun gun(20);
    Autobot goidabot(gun, 1.2, true);
    Autobot zolobot(gun, 1.4, true);
    EXPECT_TRUE(zolobot > goidabot);
    EXPECT_TRUE(goidabot < zolobot);
    EXPECT_FALSE(goidabot < goidabot);
}

TEST(Autobottest, virtual_functions)
{
    Autobot goidabot;
    EXPECT_TRUE(goidabot.transform());
    EXPECT_TRUE(goidabot.self_destruction());
    EXPECT_TRUE(goidabot.call_reinforcements());
}

TEST(Autobottest, virtual_functions_w_typed_ptr)
{
    Autobot goidabot;
    Transformer* ptr = &goidabot;
    EXPECT_TRUE(ptr->transform());
    EXPECT_TRUE(ptr->self_destruction());
    EXPECT_TRUE(ptr->call_reinforcements());
}

TEST(Interclass, comparisison_overload_d_and_t)
{
    Gun gun(20);
    Decepticon goidabot(gun, 1.2, true);
    Transformer zolobot(gun, 1.4, true);
    EXPECT_TRUE(zolobot > goidabot);
    EXPECT_TRUE(goidabot < zolobot);
    EXPECT_FALSE(goidabot < goidabot);
}

TEST(Interclass, comparisison_overload_t_and_a)
{
    Gun gun(20);
    Transformer goidabot(gun, 1.2, true);
    Autobot zolobot(gun, 1.4, true);
    EXPECT_TRUE(zolobot > goidabot);
    EXPECT_TRUE(goidabot < zolobot);
    EXPECT_FALSE(goidabot < goidabot);
}

TEST(Interclass, virtual_functions_w_typed_ptrs)
{
    std :: vector<Transformer*> squad;
    for(unsigned i = 0; i < 3; ++i)
    {
        squad.push_back(new Transformer());
        squad.push_back(new Decepticon());
        squad.push_back(new Autobot());
    }
    for(unsigned i = 0; i < squad.size(); ++i)
    {
        EXPECT_TRUE(squad[i]->transform());
        EXPECT_TRUE(squad[i]->self_destruction());
        EXPECT_TRUE(squad[i]->call_reinforcements());
    }
    for(unsigned i = 0; i < squad.size(); ++i)
    {
        delete squad[i];
    }
}


int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
