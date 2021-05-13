#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CGenericName_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CGenericName_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CGenericName_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CGenericName_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGenericName_PropertyType(CGenericName_PropertyType const& init);
	void operator=(CGenericName_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CGenericName_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CGenericName_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CCodeType, _altova_mi_gco_altova_CGenericName_PropertyType_altova_LocalName> LocalName;
	struct LocalName { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gco_altova_CGenericName_PropertyType_altova_ScopedName> ScopedName;
	struct ScopedName { typedef Iterator<gml::CCodeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CGenericName_PropertyType
