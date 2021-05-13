#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompassPointEnumeration
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompassPointEnumeration



namespace indoorgmlcore
{

namespace gml
{	

class CCompassPointEnumeration : public TypeBase
{
public:
	indoorgmlcore_EXPORT CCompassPointEnumeration(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCompassPointEnumeration(CCompassPointEnumeration const& init);
	void operator=(CCompassPointEnumeration const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CCompassPointEnumeration); }

	enum EnumValues {
		Invalid = -1,
		k_N = 0, // N
		k_NNE = 1, // NNE
		k_NE = 2, // NE
		k_ENE = 3, // ENE
		k_E = 4, // E
		k_ESE = 5, // ESE
		k_SE = 6, // SE
		k_SSE = 7, // SSE
		k_S = 8, // S
		k_SSW = 9, // SSW
		k_SW = 10, // SW
		k_WSW = 11, // WSW
		k_W = 12, // W
		k_WNW = 13, // WNW
		k_NW = 14, // NW
		k_NNW = 15, // NNW
		EnumValueCount
	};
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompassPointEnumeration
