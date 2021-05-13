#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBoolean_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBoolean_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CBoolean_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CBoolean_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CBoolean_PropertyType(CBoolean_PropertyType const& init);
	void operator=(CBoolean_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CBoolean_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CBoolean_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<xs::CbooleanType, _altova_mi_gco_altova_CBoolean_PropertyType_altova_Boolean> Boolean;
	struct Boolean { typedef Iterator<xs::CbooleanType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CBoolean_PropertyType
