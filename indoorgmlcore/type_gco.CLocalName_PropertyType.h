#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CLocalName_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CLocalName_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CLocalName_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CLocalName_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLocalName_PropertyType(CLocalName_PropertyType const& init);
	void operator=(CLocalName_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CLocalName_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CLocalName_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CCodeType, _altova_mi_gco_altova_CLocalName_PropertyType_altova_LocalName> LocalName;
	struct LocalName { typedef Iterator<gml::CCodeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CLocalName_PropertyType
