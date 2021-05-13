#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CUnlimitedInteger_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CUnlimitedInteger_Type

#include "type_xs.CnonNegativeIntegerType.h"


namespace indoorgmlcore
{

namespace gco
{	

class CUnlimitedInteger_Type : public ::indoorgmlcore::xs::CnonNegativeIntegerType
{
public:
	indoorgmlcore_EXPORT CUnlimitedInteger_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CUnlimitedInteger_Type(CUnlimitedInteger_Type const& init);
	void operator=(CUnlimitedInteger_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CUnlimitedInteger_Type); }
	indoorgmlcore_EXPORT void operator=(const unsigned __int64& value);

	MemberAttribute<bool,_altova_mi_gco_altova_CUnlimitedInteger_Type_altova_isInfinite, 0, 0> isInfinite;	// isInfinite Cboolean
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CUnlimitedInteger_Type
