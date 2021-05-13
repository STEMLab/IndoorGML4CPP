#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CRecordType_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CRecordType_Type

#include "type_xs.CstringType.h"


namespace indoorgmlcore
{

namespace gco
{	

class CRecordType_Type : public ::indoorgmlcore::xs::CstringType
{
public:
	indoorgmlcore_EXPORT CRecordType_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRecordType_Type(CRecordType_Type const& init);
	void operator=(CRecordType_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CRecordType_Type); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_Type_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_Type_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_Type_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_Type_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_Type_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_Type_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_Type_altova_actuate, 1, 4> actuate;	// actuate CactuateType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CRecordType_Type
