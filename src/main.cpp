#include <Geode/Geode.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>
#include <Geode/modify/EditorUI.hpp>
using namespace geode::prelude;
class $modify(EditorUI) {
	bool init(LevelEditorLayer * lol) {
		if (!EditorUI::init(lol)) {
			return false;
		}
			
		return true;
		
	}
	void onCreateObject(int p0) {
		EditorUI::onCreateObject(p0);
		if (m_selectedObject) {
			if (m_selectedObject->m_hasNoGlow == false) {
				m_selectedObject->m_hasNoGlow = true;
			}
		}
	}
};