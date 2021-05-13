#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerClassTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerClassTypeType



namespace indoorgmlcore
{

class CSpaceLayerClassTypeType : public TypeBase
{
public:
	indoorgmlcore_EXPORT CSpaceLayerClassTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSpaceLayerClassTypeType(CSpaceLayerClassTypeType const& init);
	void operator=(CSpaceLayerClassTypeType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_altova_CSpaceLayerClassTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_TOPOGRAPHIC = 0, // TOPOGRAPHIC
		k_SENSOR = 1, // SENSOR
		k_LOGICAL = 2, // LOGICAL
		k_TAGS = 3, // TAGS
		k_UNKNOWN = 4, // UNKNOWN
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


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerClassTypeType
