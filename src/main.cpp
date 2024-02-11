#include <Geode/Geode.hpp>
#include <Geode/modify/CCLabelBMFont.hpp>

using namespace geode::prelude;

class $modify(CCLabelBMFont) {
	static CCLabelBMFont* create(char const* str, char const* fntFile) {
		return CCLabelBMFont::create("RobTop", fntFile);
	} 
};
