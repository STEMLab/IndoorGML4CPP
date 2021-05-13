#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompassPointEnumerationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompassPointEnumerationType



namespace indoorgmlcore
{

namespace gml
{	

class CCompassPointEnumerationType : public ElementType
{
public:
	indoorgmlcore_EXPORT CCompassPointEnumerationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCompassPointEnumerationType(CCompassPointEnumerationType const& init);
	void operator=(CCompassPointEnumerationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCompassPointEnumerationType); }

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

	
	indoorgmlcore_EXPORT int GetEnumerationValue();
	indoorgmlcore_EXPORT void SetEnumerationValue( const int index);
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCompassPointEnumerationType
