#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDictionaryType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDictionaryType

#include "type_gml.CDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDictionaryType : public ::indoorgmlcore::gml::CDefinitionType
{
public:
	indoorgmlcore_EXPORT CDictionaryType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDictionaryType(CDictionaryType const& init);
	void operator=(CDictionaryType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDictionaryType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CDictionaryType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CDictionaryEntryType, _altova_mi_gml_altova_CDictionaryType_altova_dictionaryEntry> dictionaryEntry;
	struct dictionaryEntry { typedef Iterator<gml::CDictionaryEntryType> iterator; };
	MemberElement<gml::CDictionaryEntryType, _altova_mi_gml_altova_CDictionaryType_altova_definitionMember> definitionMember;
	struct definitionMember { typedef Iterator<gml::CDictionaryEntryType> iterator; };
	MemberElement<gml::CIndirectEntryType, _altova_mi_gml_altova_CDictionaryType_altova_indirectEntry> indirectEntry;
	struct indirectEntry { typedef Iterator<gml::CIndirectEntryType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDictionaryType
