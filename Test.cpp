/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "VORRY") == string("Vorry"));
    CHECK(find(text, "VoRRY") == string("Vorry"));
    CHECK(find(text, "VorRY") == string("Vorry"));
    CHECK(find(text, "VorrY") == string("Vorry"));
    CHECK(find(text, "vorry") == string("Vorry"));
    CHECK(find(text, "Vorry") == string("Vorry"));

}

TEST_CASE("Test replacement of v and w") {
    CHECK(find(text, "worry") == string("worry"));
    CHECK(find(text, "vorry") == string("worry"));

   
}

TEST_CASE("Test replacement of p and f") {
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));

}


TEST_CASE("Test replacement of b and f") {
    CHECK(find(text, "fe") == string("be"));

}


TEST_CASE("Test replacement of i and y") {
    CHECK(find(text, "worri") == string("worry"));
    CHECK(find(text, "happi") == string("happy"));
    CHECK(find(text, "sorri") == string("sorry"));
    CHECK(find(text, "hurri") == string("hurry"));
    CHECK(find(text, "easi") == string("easy"));
    CHECK(find(text, "dairi") == string("dairy"));




}

TEST_CASE("Test replacement of o and u") {
    CHECK(find(text, "dont") == string("dont"));
    CHECK(find(text, "dunt") == string("dont"));
    CHECK(find(text, "wurry") == string("worry"));
    CHECK(find(text, "surry") == string("sorry"));
    CHECK(find(text, "suy") == string("soy"));
    CHECK(find(text, "alluy") == string("alloy"));
    CHECK(find(text, "alluw") == string("allow"));
    CHECK(find(text, "allore") == string("allure"));
    CHECK(find(text, "orban") == string("urban"));







}


TEST_CASE("Test replacement of d and t") {
    CHECK(find(text, "tont") == string("dont"));
    CHECK(find(text, "dond") == string("dont"));
    CHECK(find(text, "tond") == string("dont"));
    CHECK(find(text, "tollar") == string("dollar"));
    CHECK(find(text, "tull") == string("dull"));
    CHECK(find(text, "dinker") == string("tinker"));




}


TEST_CASE("Test replacement of s and z") {
    CHECK(find(text, "zorry") == string("sorry"));
    CHECK(find(text, "sorry") == string("sorry"));
    CHECK(find(text, "zelect") == string("select"));
    CHECK(find(text, "zource") == string("source"));
    CHECK(find(text, "zack") == string("sack"));



    

}

TEST_CASE("Test replacement of c and k and q") {
    CHECK(find(text, "cloud") == string("cloud"));
    CHECK(find(text, "qloud") == string("cloud"));

    CHECK(find(text, "kloud") == string("cloud"));
    CHECK(find(text, "kar") == string("car"));
    CHECK(find(text, "qar") == string("car"));

    CHECK(find(text, "klown") == string("clown"));
    CHECK(find(text, "kool") == string("cool"));
    CHECK(find(text, "kreed") == string("creed"));
    CHECK(find(text, "kuill") == string("quill"));



}   


TEST_CASE("Test replacement of g and j") {
    CHECK(find(text, "judje") == string("judge"));
    CHECK(find(text, "gudge") == string("judge"));

    CHECK(find(text, "gudje") == string("judge"));
    CHECK(find(text, "gadjet") == string("gadget"));
    CHECK(find(text, "gunk") == string("junkgit"));

}   

