#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CScopedName_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CScopedName_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CScopedName_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CScopedName_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CScopedName_PropertyType(CScopedName_PropertyType const& init);
	void operator=(CScopedName_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CScopedName_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CScopedName_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CCodeType, _altova_mi_gco_altova_CScopedName_PropertyType_altova_ScopedName> ScopedName;
	struct ScopedName { typedef Iterator<gml::CCodeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CScopedName_PropertyType
