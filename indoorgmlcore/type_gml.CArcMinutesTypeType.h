#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcMinutesTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcMinutesTypeType



namespace indoorgmlcore
{

namespace gml
{	

class CArcMinutesTypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CArcMinutesTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CArcMinutesTypeType(CArcMinutesTypeType const& init);
	void operator=(CArcMinutesTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CArcMinutesTypeType); }
	indoorgmlcore_EXPORT void operator=(const unsigned __int64& value);
	indoorgmlcore_EXPORT operator unsigned __int64();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcMinutesTypeType
