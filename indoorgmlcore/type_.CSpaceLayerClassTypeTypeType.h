#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerClassTypeTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerClassTypeTypeType



namespace indoorgmlcore
{

class CSpaceLayerClassTypeTypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSpaceLayerClassTypeTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSpaceLayerClassTypeTypeType(CSpaceLayerClassTypeTypeType const& init);
	void operator=(CSpaceLayerClassTypeTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSpaceLayerClassTypeTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_TOPOGRAPHIC = 0, // TOPOGRAPHIC
		k_SENSOR = 1, // SENSOR
		k_LOGICAL = 2, // LOGICAL
		k_TAGS = 3, // TAGS
		k_UNKNOWN = 4, // UNKNOWN
		EnumValueCount
	};

	
	indoorgmlcore_EXPORT int GetEnumerationValue();
	indoorgmlcore_EXPORT void SetEnumerationValue( const int index);
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerClassTypeTypeType
