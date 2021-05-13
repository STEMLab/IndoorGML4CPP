#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Keywords_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Keywords_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Keywords_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_Keywords_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Keywords_Type(CMD_Keywords_Type const& init);
	void operator=(CMD_Keywords_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Keywords_Type); }
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_Keywords_Type_altova_keyword> keyword;
	struct keyword { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gmd::CMD_KeywordTypeCode_PropertyType, _altova_mi_gmd_altova_CMD_Keywords_Type_altova_type> type;
	struct type { typedef Iterator<gmd::CMD_KeywordTypeCode_PropertyType> iterator; };
	MemberElement<gmd::CCI_Citation_PropertyType, _altova_mi_gmd_altova_CMD_Keywords_Type_altova_thesaurusName> thesaurusName;
	struct thesaurusName { typedef Iterator<gmd::CCI_Citation_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Keywords_Type
