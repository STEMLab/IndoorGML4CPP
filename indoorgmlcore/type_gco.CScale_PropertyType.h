#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CScale_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CScale_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CScale_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CScale_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CScale_PropertyType(CScale_PropertyType const& init);
	void operator=(CScale_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CScale_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CScale_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gml::CScaleType, _altova_mi_gco_altova_CScale_PropertyType_altova_Scale> Scale;
	struct Scale { typedef Iterator<gml::CScaleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CScale_PropertyType
