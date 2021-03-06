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
        string text2 = "dont Vorry";

    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text2, "VORRY") == string("Vorry"));
    CHECK(find(text2, "VoRRY") == string("Vorry"));
    CHECK(find(text2, "VorRY") == string("Vorry"));
    CHECK(find(text2, "VorrY") == string("Vorry"));
    CHECK(find(text2, "vorry") == string("Vorry"));
    CHECK(find(text2, "Vorry") == string("Vorry"));

}

TEST_CASE("Test replacement of v and w") {
    CHECK(find("dont worry", "worry") == string("worry"));
    CHECK(find("dont worry", "vorry") == string("worry"));

   
}

TEST_CASE("Test replacement of p and f") {
        string text = "happy xxx yyy";

    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));

}


TEST_CASE("Test replacement of b and f") {
    CHECK(find("be happy", "fe") == string("be"));

}


TEST_CASE("Test replacement of i and y") {
    CHECK(find("dont worry be happy", "worri") == string("worry"));
    CHECK(find("be happy", "happi") == string("happy"));
    CHECK(find("he is sorry", "sorri") == string("sorry"));
    CHECK(find("please hurry", "hurri") == string("hurry"));
    CHECK(find("take it easy", "easi") == string("easy"));
    CHECK(find("i like dairy", "dairi") == string("dairy"));




}

TEST_CASE("Test replacement of o and u") {
    CHECK(find("dont worry", "dont") == string("dont"));
    CHECK(find("dont worry", "dunt") == string("dont"));
    CHECK(find("dont wurry", "wurry") == string("worry"));
    CHECK(find("im sorry", "surry") == string("sorry"));
    CHECK(find("soy boy", "suy") == string("soy"));
    CHECK(find("titanuim alloy", "alluy") == string("alloy"));
    CHECK(find("allow him to go", "alluw") == string("allow"));
    CHECK(find("he allure", "allore") == string("allure"));
    CHECK(find("urban exploration", "orban") == string("urban"));







}


TEST_CASE("Test replacement of d and t") {
    CHECK(find("dont worry", "tont") == string("dont"));
    CHECK(find("dont worry", "dond") == string("dont"));
    CHECK(find("dont worry", "tond") == string("dont"));
    CHECK(find("dollar bill", "tollar") == string("dollar"));
    CHECK(find("its dull", "tull") == string("dull"));
    CHECK(find("tinker bill", "dinker") == string("tinker"));




}


TEST_CASE("Test replacement of s and z") {
    CHECK(find("he is sorry", "zorry") == string("sorry"));
    CHECK(find("im sorry", "sorry") == string("sorry"));
    CHECK(find("select one fruit", "zelect") == string("select"));
    CHECK(find("source code", "zource") == string("source"));
    CHECK(find("in the sack", "zack") == string("sack"));



    

}

TEST_CASE("Test replacement of c and k and q") {
    CHECK(find("look at the cloud", "cloud") == string("cloud"));
    CHECK(find("pretty cloud", "qloud") == string("cloud"));

    CHECK(find("pretty cloud", "kloud") == string("cloud"));
    CHECK(find("nice car", "kar") == string("car"));
    CHECK(find("nice car", "qar") == string("car"));

    CHECK(find("funny clown", "klown") == string("clown"));
    CHECK(find("its cool out", "kool") == string("cool"));
    CHECK(find("assassins creed", "kreed") == string("creed"));
    CHECK(find("quill and skull", "kuill") == string("quill"));



}   


TEST_CASE("Test replacement of g and j") {
    CHECK(find("junge and jurry", "judje") == string("judge"));
    CHECK(find("judge and jurry", "gudge") == string("judge"));

    CHECK(find("judge and jurry", "gudje") == string("judge"));
    CHECK(find("awesome gadget", "gadjet") == string("gadget"));
    CHECK(find("junk food", "gunk") == string("junk"));

}   

