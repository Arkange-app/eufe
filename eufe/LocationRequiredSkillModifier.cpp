#include "LocationRequiredSkillModifier.h"
#include "Item.h"
#include "Attribute.h"

using namespace eufe;

LocationRequiredSkillModifier::LocationRequiredSkillModifier(TypeID attributeID, Association association, Attribute* modifier, TypeID skillID, bool isAssistance, bool isOffensive, Character* character) : Modifier(attributeID, association, modifier, isAssistance, isOffensive, character), skillID_(skillID)
{
	
}

LocationRequiredSkillModifier::~LocationRequiredSkillModifier()
{
}

bool LocationRequiredSkillModifier::isMatch(Item* item) const
{
	return item->requireSkill(skillID_);
}

#if _DEBUG

std::ostream& eufe::operator<<(std::ostream& os, eufe::LocationRequiredSkillModifier& modifier)
{
	os	<< "{\"skillID\":\"" << modifier.skillID_
	<< "\", \"association\":\"" << modifier.getAssociationName()
	<< "\", \"attributeID\":\"" << modifier.getAttributeID()
	<< "\", \"modifier\":" << *modifier.getModifier() << "}";
	return os;
}

#endif