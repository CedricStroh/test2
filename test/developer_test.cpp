#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <gtest/gtest.h>

TEST(DeveloperTest, ConstructorTest) {
    JuniorDeveloper jd("Cedric", "TheKid");
    SeniorDeveloper sd("Jannis", "TheMaster");
    EXPECT_EQ(jd.get_name(), "Cedric");
    EXPECT_EQ(sd.get_alias(), "TheMaster");
}

TEST(DeveloperTest, LoadLogoSuccess) {
    JuniorDeveloper jd("Test", "T");
    jd.load_logo_from_file("junior.txt");
    EXPECT_FALSE(jd.get_logo().empty());
}

TEST(DeveloperTest, LoadLogoFailure) {
    JuniorDeveloper jd("Test", "T");
    EXPECT_THROW(jd.load_logo_from_file("missing.txt"), std::runtime_error);
}
